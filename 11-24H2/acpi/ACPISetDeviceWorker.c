/*
 * XREFs of ACPISetDeviceWorker @ 0x140038938
 * Callers:
 *     ACPIFanDeviceControl @ 0x14002BA40 (ACPIFanDeviceControl.c)
 *     ACPIFanFSTCallback @ 0x14002C010 (ACPIFanFSTCallback.c)
 *     ACPIFanLoop @ 0x14002C64C (ACPIFanLoop.c)
 *     ACPIThermalLoopEx @ 0x140037A14 (ACPIThermalLoopEx.c)
 *     ACPICMButtonNotify @ 0x140039BD8 (ACPICMButtonNotify.c)
 *     ACPIRootPowerCallBack @ 0x14003A030 (ACPIRootPowerCallBack.c)
 *     ACPICMExperienceButtonHandleEvent @ 0x14005628C (ACPICMExperienceButtonHandleEvent.c)
 *     ACPICMButtonStartWorker @ 0x14005BB60 (ACPICMButtonStartWorker.c)
 *     ACPIPepCleanupPlatformNotificationSupport @ 0x1400A1050 (ACPIPepCleanupPlatformNotificationSupport.c)
 *     ACPIPepQueueWorker @ 0x1400BA358 (ACPIPepQueueWorker.c)
 * Callees:
 *     <none>
 */

void __fastcall ACPISetDeviceWorker(__int64 a1, int a2)
{
  KIRQL v4; // al
  bool v5; // si
  _QWORD *v6; // rdi
  _QWORD *v7; // rcx

  v4 = KeAcquireSpinLockRaiseToDpc(&ACPIWorkerQueueSpinLock);
  *(_DWORD *)(a1 + 160) |= a2;
  v5 = 0;
  v6 = (_QWORD *)(a1 + 168);
  if ( !*v6 )
  {
    v7 = (_QWORD *)qword_140089A98;
    if ( *(__int64 **)qword_140089A98 != &ACPIDeviceWorkQueue )
      __fastfail(3u);
    *v6 = &ACPIDeviceWorkQueue;
    v6[1] = v7;
    *v7 = v6;
    qword_140089A98 = (__int64)v6;
    v5 = ACPIWorkerBusy == 0;
    ACPIWorkerBusy = 1;
  }
  KeReleaseSpinLock(&ACPIWorkerQueueSpinLock, v4);
  if ( v5 )
    ExQueueWorkItem(&ACPIWorkItem, DelayedWorkQueue);
}
