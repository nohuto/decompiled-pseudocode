/*
 * XREFs of CsTerminate @ 0x14000D470
 * Callers:
 *     CiDriverUnload @ 0x14000D350 (CiDriverUnload.c)
 *     DriverEntry @ 0x140010540 (DriverEntry.c)
 * Callees:
 *     CiFreeMemory @ 0x140003FF0 (CiFreeMemory.c)
 *     _guard_dispatch_icall @ 0x140005A10 (_guard_dispatch_icall.c)
 *     CiNdisCleanupThrottle @ 0x14000DB90 (CiNdisCleanupThrottle.c)
 *     CiSystemTerminate @ 0x14000DD5C (CiSystemTerminate.c)
 *     CiSchedulerTerminate @ 0x14000DE54 (CiSchedulerTerminate.c)
 */

NTSTATUS CsTerminate()
{
  struct _LIST_ENTRY *Flink; // rbx
  struct _LIST_ENTRY *v1; // rax
  NTSTATUS result; // eax
  PDEVICE_OBJECT v3; // rbx

  if ( CiThreadCallbackRegistered )
  {
    PsRemoveCreateThreadNotifyRoutine((PCREATE_THREAD_NOTIFY_ROUTINE)CiThreadNotification);
    CiThreadCallbackRegistered = 0;
  }
  CiSchedulerTerminate();
  if ( CiKernelExtensionRegistration )
    ExUnregisterExtension();
  while ( 1 )
  {
    Flink = WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink;
    if ( WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink == &WPP_MAIN_CB.DeviceLock.Header.WaitListHead )
      break;
    if ( WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink->Blink != &WPP_MAIN_CB.DeviceLock.Header.WaitListHead
      || (v1 = WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink->Flink,
          WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink->Flink->Blink != WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink) )
    {
      __fastfail(3u);
    }
    WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink = WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink->Flink;
    v1->Blink = &WPP_MAIN_CB.DeviceLock.Header.WaitListHead;
    CiFreeMemory(Flink[1].Flink);
    CiFreeMemory(&Flink[-1].Blink);
  }
  CiSystemTerminate();
  result = CiNdisCleanupThrottle();
  if ( CiLoggerContext )
  {
    result = EtwUnregister(CiLoggerContext);
    CiLoggerContext = 0LL;
  }
  v3 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
  {
    result = WPPTraceSuite;
    if ( WPPTraceSuite == 4 )
    {
      while ( v3 )
      {
        if ( v3->Vpb )
        {
          result = ((__int64 (*)(void))pfnEtwUnregister)();
          v3->Vpb = 0LL;
        }
        v3 = v3->NextDevice;
      }
    }
    else if ( WPPTraceSuite == 2 )
    {
      result = IoWMIRegistrationControl(WPP_GLOBAL_Control, 0x80000002);
    }
    WPP_GLOBAL_Control = (PDEVICE_OBJECT)&WPP_GLOBAL_Control;
  }
  return result;
}
