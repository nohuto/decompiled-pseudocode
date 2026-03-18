/*
 * XREFs of PopLockGetDoDevicePowerState @ 0x1404B49B8
 * Callers:
 *     PiControlGetDevicePowerData @ 0x140A60C44 (PiControlGetDevicePowerData.c)
 *     NtGetDevicePowerState @ 0x140A7FFA0 (NtGetDevicePowerState.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 */

__int64 __fastcall PopLockGetDoDevicePowerState(__int64 a1)
{
  KIRQL v2; // al

  v2 = KeAcquireSpinLockRaiseToDpc(&PopIrpSerialLock);
  LODWORD(a1) = (*(_DWORD *)(a1 + 16) >> 4) & 0xF;
  KeReleaseSpinLock(&PopIrpSerialLock, v2);
  return (unsigned int)a1;
}
