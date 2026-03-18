/*
 * XREFs of PpmGetDeepSleepPlatformStateIndex @ 0x140355CAC
 * Callers:
 *     PopFxClearDeviceConstraints @ 0x140354884 (PopFxClearDeviceConstraints.c)
 *     PopPepUpdateDripsDeviceVetoMask @ 0x140355CD0 (PopPepUpdateDripsDeviceVetoMask.c)
 *     PopPepInitializeVetoMasks @ 0x1404BF148 (PopPepInitializeVetoMasks.c)
 *     PopFxEnablePlatformStates @ 0x1405CCB48 (PopFxEnablePlatformStates.c)
 *     PopCheckResiliencyScenarios @ 0x140A1E378 (PopCheckResiliencyScenarios.c)
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
