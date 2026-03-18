/*
 * XREFs of UsbhDispatch_HardResetEvent @ 0x1400376CC
 * Callers:
 *     UsbhQueryPortState @ 0x140009A20 (UsbhQueryPortState.c)
 *     UsbhFdoSetPowerDx_Action @ 0x1400372B8 (UsbhFdoSetPowerDx_Action.c)
 *     UsbhResumeHardReset @ 0x1400399E4 (UsbhResumeHardReset.c)
 *     UsbhOvercurrentResetWorker @ 0x14003F0B0 (UsbhOvercurrentResetWorker.c)
 *     UsbhQueueDriverOvercurrent @ 0x14003F320 (UsbhQueueDriverOvercurrent.c)
 *     UsbhQueueOvercurrentReset @ 0x14003F4A0 (UsbhQueueOvercurrentReset.c)
 *     UsbhFinishStart @ 0x14004604C (UsbhFinishStart.c)
 *     UsbhDisableHardReset @ 0x14004B550 (UsbhDisableHardReset.c)
 *     UsbhHardResetWorker @ 0x14004B5F0 (UsbhHardResetWorker.c)
 *     UsbhQueueHardReset @ 0x14004B950 (UsbhQueueHardReset.c)
 *     UsbhResetNotificationIrpCompletion @ 0x1400509A0 (UsbhResetNotificationIrpCompletion.c)
 * Callees:
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     Log @ 0x1400298B0 (Log.c)
 *     Usbh_HRS_Disabled @ 0x1400378FC (Usbh_HRS_Disabled.c)
 *     UsbhAcquireResetLock @ 0x1400379EC (UsbhAcquireResetLock.c)
 *     UsbhReleaseResetLock @ 0x14003968C (UsbhReleaseResetLock.c)
 *     WPP_RECORDER_SF_d @ 0x14003DA58 (WPP_RECORDER_SF_d.c)
 *     UsbhIncrementConcurrentResetCounter @ 0x14004B8F8 (UsbhIncrementConcurrentResetCounter.c)
 *     Usbh_HRS_Paused @ 0x14004BC78 (Usbh_HRS_Paused.c)
 *     Usbh_HRS_PausedWaitDone @ 0x14004BDB4 (Usbh_HRS_PausedWaitDone.c)
 *     Usbh_HRS_Queued @ 0x14004BEAC (Usbh_HRS_Queued.c)
 *     Usbh_HRS_ResetStop @ 0x14004C174 (Usbh_HRS_ResetStop.c)
 *     Usbh_HRS_WaitDone @ 0x14004C290 (Usbh_HRS_WaitDone.c)
 *     Usbh_HRS_WaitReady @ 0x14004C388 (Usbh_HRS_WaitReady.c)
 */

__int64 __fastcall UsbhDispatch_HardResetEvent(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  _DWORD *v6; // r14
  __int64 v7; // rbp
  __int64 v8; // r9
  KIRQL v9; // r10
  KIRQL v10; // r10

  v3 = a3;
  v6 = FdoExt(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      19,
      (__int64)&WPP_ba2e62575cae3d6a8bb98b5a8ed3568a_Traceguids,
      v3);
  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v6 + 350);
  v7 = (int)v6[702];
  Log(a1, 16, 1381200433, v7, v3);
  if ( ((_DWORD)v3 == 3 || (_DWORD)v3 == 9) && (_DWORD)v7 == 3 )
  {
    if ( *((_BYTE *)v6 + 5268) )
    {
      _InterlockedIncrement(v6 + 1315);
      UsbhIncrementConcurrentResetCounter(a1);
    }
    Log(a1, 16, 1381200434, v7, v3);
    KeReleaseSpinLock((PKSPIN_LOCK)v6 + 350, v9);
    return (unsigned int)v7;
  }
  Log(a1, 16, 1381200435, v8, v3);
  KeReleaseSpinLock((PKSPIN_LOCK)v6 + 350, v10);
  Log(a1, 16, 1920150315, a2, v3);
  v7 = (int)UsbhAcquireResetLock(a1, a2, (unsigned int)v3);
  Log(a1, 16, 1920150829, a2, v7);
  switch ( (_DWORD)v7 )
  {
    case 1:
      return Usbh_HRS_Disabled(a2, (unsigned int)v3);
    case 2:
      return Usbh_HRS_WaitReady(a2, (unsigned int)v3);
    case 3:
      return Usbh_HRS_Queued(a2, (unsigned int)v3);
    case 4:
      return Usbh_HRS_ResetStop(a2, (unsigned int)v3);
    case 5:
      return Usbh_HRS_WaitDone(a2, (unsigned int)v3);
    case 6:
      return Usbh_HRS_Paused(a2, (unsigned int)v3);
  }
  if ( (_DWORD)v7 != 7 )
  {
    UsbhReleaseResetLock(a1, a2, (unsigned int)v7);
    return (unsigned int)v7;
  }
  return Usbh_HRS_PausedWaitDone(a2, (unsigned int)v3);
}
