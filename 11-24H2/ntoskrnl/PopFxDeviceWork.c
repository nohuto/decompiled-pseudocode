/*
 * XREFs of PopFxDeviceWork @ 0x1405CE730
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxDereferenceDevice @ 0x1403A7F58 (PopFxDereferenceDevice.c)
 *     PopFxDeliverDevicePowerRequired @ 0x140481DAC (PopFxDeliverDevicePowerRequired.c)
 */

LONG __fastcall PopFxDeviceWork(ULONG_PTR BugCheckParameter2)
{
  KSPIN_LOCK *v2; // rsi
  KIRQL v3; // bl

  v2 = (KSPIN_LOCK *)(BugCheckParameter2 + 400);
  do
  {
    v3 = KeAcquireSpinLockRaiseToDpc(v2);
    PopFxDeliverDevicePowerRequired(BugCheckParameter2, 0LL);
    KeReleaseSpinLock(v2, v3);
  }
  while ( _InterlockedExchangeAdd((volatile signed __int32 *)(BugCheckParameter2 + 376), 0xFFFFFFFF) != 1 );
  return PopFxDereferenceDevice(BugCheckParameter2, 4);
}
