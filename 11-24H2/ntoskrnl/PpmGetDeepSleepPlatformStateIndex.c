/*
 * XREFs of PpmGetDeepSleepPlatformStateIndex @ 0x1403A5BC0
 * Callers:
 *     PopPepUpdateDripsDeviceVetoMask @ 0x1403A5BE4 (PopPepUpdateDripsDeviceVetoMask.c)
 *     PopPepInitializeVetoMasks @ 0x1404B8B0C (PopPepInitializeVetoMasks.c)
 *     PopFxClearDeviceConstraints @ 0x1404CDF98 (PopFxClearDeviceConstraints.c)
 *     PopFxEnablePlatformStates @ 0x1405CEA18 (PopFxEnablePlatformStates.c)
 *     PopCheckResiliencyScenarios @ 0x140A1BD98 (PopCheckResiliencyScenarios.c)
 * Callees:
 *     <none>
 */

__int64 PpmGetDeepSleepPlatformStateIndex()
{
  __int64 result; // rax

  result = 0xFFFFFFFFLL;
  if ( PpmPlatformStates )
  {
    if ( *(_DWORD *)PpmPlatformStates )
      return (unsigned int)(*(_DWORD *)PpmPlatformStates - 1);
  }
  return result;
}
