/*
 * XREFs of CsInitialize @ 0x1C000F040
 * Callers:
 *     DriverEntry @ 0x1C000F010 (DriverEntry.c)
 * Callees:
 *     WPP_SF_D @ 0x1C0004704 (WPP_SF_D.c)
 *     WppLoadTracingSupport @ 0x1C000C010 (WppLoadTracingSupport.c)
 *     WppInitKm @ 0x1C000C160 (WppInitKm.c)
 *     CiNdisOpenDevice @ 0x1C000C7E8 (CiNdisOpenDevice.c)
 *     CiConfigInitialize @ 0x1C000F1B0 (CiConfigInitialize.c)
 *     CiDispatchInitialize @ 0x1C000F670 (CiDispatchInitialize.c)
 *     CiThreadInitialize @ 0x1C000F8B8 (CiThreadInitialize.c)
 *     CiProcessInitialize @ 0x1C000F91C (CiProcessInitialize.c)
 *     CiSystemInitialize @ 0x1C000FA30 (CiSystemInitialize.c)
 *     CiSchedulerInitialize @ 0x1C000FDC0 (CiSchedulerInitialize.c)
 */

__int64 __fastcall CsInitialize(__int64 a1)
{
  NTSTATUS v2; // ebx

  WPP_MAIN_CB.Timer = (PIO_TIMER)1;
  *(_QWORD *)&WPP_MAIN_CB.Type = 0LL;
  WPP_MAIN_CB.DriverObject = (struct _DRIVER_OBJECT *)&WPP_ThisDir_CTLGUID_MmcssTrace;
  WPP_MAIN_CB.NextDevice = 0LL;
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WppLoadTracingSupport();
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WppInitKm();
  WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink = &WPP_MAIN_CB.DeviceLock.Header.WaitListHead;
  WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink = &WPP_MAIN_CB.DeviceLock.Header.WaitListHead;
  WPP_MAIN_CB.Dpc.DeferredContext = &WPP_MAIN_CB.Dpc.DeferredRoutine;
  WPP_MAIN_CB.Dpc.DeferredRoutine = (PKDEFERRED_ROUTINE)&WPP_MAIN_CB.Dpc.DeferredRoutine;
  WPP_MAIN_CB.Dpc.SystemArgument2 = &WPP_MAIN_CB.Dpc.SystemArgument1;
  WPP_MAIN_CB.Dpc.SystemArgument1 = &WPP_MAIN_CB.Dpc.SystemArgument1;
  v2 = EtwRegister(&MMCSS_ETW_PROVIDER, (PETWENABLECALLBACK)CiLogControlCallback, 0LL, &CiLoggerContext);
  if ( v2 >= 0 )
  {
    v2 = CiSystemInitialize();
    if ( v2 >= 0 )
    {
      v2 = CiConfigInitialize();
      if ( v2 >= 0 )
      {
        v2 = CiThreadInitialize();
        if ( v2 >= 0 )
        {
          v2 = CiProcessInitialize(a1);
          if ( v2 >= 0 )
          {
            v2 = CiSchedulerInitialize();
            if ( v2 >= 0 )
              v2 = CiDispatchInitialize(a1);
          }
        }
      }
    }
  }
  else if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    WPP_SF_D((__int64)WPP_GLOBAL_Control->AttachedDevice);
  }
  if ( LODWORD(WPP_MAIN_CB.Dpc.DpcData) != -1 && CiSystemResponsiveness != 100 )
  {
    CiNdisThrottleWorkItem = IoAllocateWorkItem(CiDeviceObject);
    if ( CiNdisThrottleWorkItem )
      CiNdisOpenDevice();
  }
  return (unsigned int)v2;
}
