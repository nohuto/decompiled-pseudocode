/*
 * XREFs of PopPepDeviceStarted @ 0x1404AB8C4
 * Callers:
 *     PoFxStartDevicePowerManagement @ 0x1404AB730 (PoFxStartDevicePowerManagement.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusive @ 0x140379ED0 (ExReleaseSpinLockExclusive.c)
 *     PopPepInitializeVetoMasks @ 0x1404BD99C (PopPepInitializeVetoMasks.c)
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
