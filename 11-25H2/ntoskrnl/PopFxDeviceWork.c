/*
 * XREFs of PopFxDeviceWork @ 0x1405CC860
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     PopFxDeliverDevicePowerRequired @ 0x140358878 (PopFxDeliverDevicePowerRequired.c)
 *     PopFxDereferenceDevice @ 0x1403589F8 (PopFxDereferenceDevice.c)
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
