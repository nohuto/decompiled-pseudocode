/*
 * XREFs of PopFxTryReferenceDevice @ 0x1403A6408
 * Callers:
 *     PopFxProcessWork @ 0x1402BFE70 (PopFxProcessWork.c)
 *     PopFxAllocatePowerIrp @ 0x1402E6A5C (PopFxAllocatePowerIrp.c)
 *     PoFxPowerControl @ 0x1403A58C0 (PoFxPowerControl.c)
 *     PopFxPlatformIdleVeto @ 0x1403A6020 (PopFxPlatformIdleVeto.c)
 *     PopFxLockDevice @ 0x1403A79D0 (PopFxLockDevice.c)
 *     PopFxProcessorIdleVeto @ 0x1405CEFC0 (PopFxProcessorIdleVeto.c)
 *     PopFxUpdatePlatformIdleState @ 0x1405CF850 (PopFxUpdatePlatformIdleState.c)
 *     PopFxUpdateProcessorIdleState @ 0x1405CF930 (PopFxUpdateProcessorIdleState.c)
 *     PopPepPlatformStateRegistered @ 0x1405D8BE8 (PopPepPlatformStateRegistered.c)
 *     PoFxSetTargetDripsDevicePowerState @ 0x140A6AD30 (PoFxSetTargetDripsDevicePowerState.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 */

__int64 __fastcall PopFxTryReferenceDevice(__int64 a1, int a2)
{
  unsigned int v2; // r8d

  _InterlockedIncrement((volatile signed __int32 *)(a1 + 244));
  v2 = 0;
  if ( *(_BYTE *)(a1 + 240) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 244), 0xFFFFFFFF) == 1 )
      KeSetEvent((PRKEVENT)(a1 + 248), 0, 0);
    return (unsigned int)-1073741738;
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 4LL * a2 + 272));
  }
  return v2;
}
