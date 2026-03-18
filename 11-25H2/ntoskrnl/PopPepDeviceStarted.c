/*
 * XREFs of PopPepDeviceStarted @ 0x1404AA434
 * Callers:
 *     PoFxStartDevicePowerManagement @ 0x1404AA2A0 (PoFxStartDevicePowerManagement.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusive @ 0x1403A2D40 (ExReleaseSpinLockExclusive.c)
 *     PopPepInitializeVetoMasks @ 0x1404BF148 (PopPepInitializeVetoMasks.c)
 */

__int64 __fastcall PopPepDeviceStarted(__int64 a1)
{
  KIRQL v2; // al
  __int64 result; // rax

  v2 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 64));
  *(_DWORD *)(a1 + 172) = 1;
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 64), v2);
  result = PopPepPlatformState;
  if ( PopPepPlatformState )
    return PopPepInitializeVetoMasks(a1, *(unsigned int *)PpmPlatformStates);
  return result;
}
