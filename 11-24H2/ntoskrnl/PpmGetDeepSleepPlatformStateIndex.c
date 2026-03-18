/*
 * XREFs of PpmGetDeepSleepPlatformStateIndex @ 0x1404A673C
 * Callers:
 *     PopFxClearDeviceConstraints @ 0x1404A6344 (PopFxClearDeviceConstraints.c)
 *     PopPepUpdateDripsDeviceVetoMask @ 0x1404A64E8 (PopPepUpdateDripsDeviceVetoMask.c)
 *     PopPepInitializeVetoMasks @ 0x1404BD99C (PopPepInitializeVetoMasks.c)
 *     PopFxEnablePlatformStates @ 0x1405D12F8 (PopFxEnablePlatformStates.c)
 *     PopCheckResiliencyScenarios @ 0x140A27318 (PopCheckResiliencyScenarios.c)
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
