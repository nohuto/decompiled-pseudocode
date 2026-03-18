/*
 * XREFs of CsTerminate @ 0x1C000C400
 * Callers:
 *     CiDriverUnload @ 0x1C000C350 (CiDriverUnload.c)
 *     DriverEntry @ 0x1C000F010 (DriverEntry.c)
 * Callees:
 *     CiFreeMemory @ 0x1C0003FF0 (CiFreeMemory.c)
 *     _guard_dispatch_icall @ 0x1C0004F20 (_guard_dispatch_icall.c)
 *     CiSystemTerminate @ 0x1C000C89C (CiSystemTerminate.c)
 *     CiSchedulerTerminate @ 0x1C000C8C8 (CiSchedulerTerminate.c)
 */

void CsTerminate()
{
  struct _LIST_ENTRY *Flink; // rbx
  struct _LIST_ENTRY *v1; // rax
  PDEVICE_OBJECT v2; // rbx

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
  if ( CiNdisThrottleWorkItem )
  {
    IoFreeWorkItem(CiNdisThrottleWorkItem);
    if ( CiNdisDeviceHandle )
      ZwClose(CiNdisDeviceHandle);
  }
  if ( CiLoggerContext )
  {
    EtwUnregister(CiLoggerContext);
    CiLoggerContext = 0LL;
  }
  v2 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
  {
    if ( WPPTraceSuite == 4 )
    {
      while ( v2 )
      {
        if ( v2->Vpb )
        {
          ((void (*)(void))pfnEtwUnregister)();
          v2->Vpb = 0LL;
        }
        v2 = v2->NextDevice;
      }
    }
    else if ( WPPTraceSuite == 2 )
    {
      IoWMIRegistrationControl(WPP_GLOBAL_Control, 0x80000002);
    }
    WPP_GLOBAL_Control = (PDEVICE_OBJECT)&WPP_GLOBAL_Control;
  }
}
