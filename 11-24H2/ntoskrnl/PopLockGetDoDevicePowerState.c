/*
 * XREFs of PopLockGetDoDevicePowerState @ 0x1404AEAE8
 * Callers:
 *     PiControlGetDevicePowerData @ 0x140A5B688 (PiControlGetDevicePowerData.c)
 *     NtGetDevicePowerState @ 0x140A7DF70 (NtGetDevicePowerState.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 __fastcall PopLockGetDoDevicePowerState(__int64 a1)
{
  KIRQL v2; // al

  v2 = KeAcquireSpinLockRaiseToDpc(&PopIrpSerialLock);
  LODWORD(a1) = (*(_DWORD *)(a1 + 16) >> 4) & 0xF;
  KeReleaseSpinLock(&PopIrpSerialLock, v2);
  return (unsigned int)a1;
}
