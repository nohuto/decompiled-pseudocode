/*
 * XREFs of ACPIStopShutdownInProgress @ 0x14006795C
 * Callers:
 *     ACPINotifyOsShutdownWorker @ 0x1400675B0 (ACPINotifyOsShutdownWorker.c)
 *     AcpiShutdownNotificationTimerWorkItem @ 0x140067B50 (AcpiShutdownNotificationTimerWorkItem.c)
 * Callees:
 *     <none>
 */

void __fastcall ACPIStopShutdownInProgress(__int64 a1)
{
  KIRQL v2; // al

  *(_BYTE *)a1 = 0;
  KeCancelTimer((PKTIMER)(a1 + 8));
  *(_DWORD *)(a1 + 192) = 0;
  v2 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  AcpiNotifyOsShutdownInProgress = 0;
  KeReleaseSpinLock(&AcpiPowerLock, v2);
}
