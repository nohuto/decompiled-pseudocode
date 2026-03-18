/*
 * XREFs of PopLockGetDoDevicePowerState @ 0x1404B42C8
 * Callers:
 *     PiControlGetDevicePowerData @ 0x140A62D88 (PiControlGetDevicePowerData.c)
 *     NtGetDevicePowerState @ 0x140A83450 (NtGetDevicePowerState.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 __fastcall PopLockGetDoDevicePowerState(__int64 a1)
{
  KIRQL v2; // al

  v2 = KeAcquireSpinLockRaiseToDpc(&PopIrpSerialLock);
  LODWORD(a1) = (*(_DWORD *)(a1 + 16) >> 4) & 0xF;
  KeReleaseSpinLock(&PopIrpSerialLock, v2);
  return (unsigned int)a1;
}
