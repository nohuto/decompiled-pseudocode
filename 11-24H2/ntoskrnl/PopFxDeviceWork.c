/*
 * XREFs of PopFxDeviceWork @ 0x1405D1010
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxDeliverDevicePowerRequired @ 0x140376700 (PopFxDeliverDevicePowerRequired.c)
 *     PopFxDereferenceDevice @ 0x140376880 (PopFxDereferenceDevice.c)
 */

LONG __fastcall PopFxDeviceWork(ULONG_PTR a1)
{
  KSPIN_LOCK *v2; // rsi
  KIRQL v3; // bl
  __int64 v4; // r8

  v2 = (KSPIN_LOCK *)(a1 + 400);
  do
  {
    v3 = KeAcquireSpinLockRaiseToDpc(v2);
    PopFxDeliverDevicePowerRequired(a1, 0LL, v4);
    KeReleaseSpinLock(v2, v3);
  }
  while ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 376), 0xFFFFFFFF) != 1 );
  return PopFxDereferenceDevice(a1, 4);
}
