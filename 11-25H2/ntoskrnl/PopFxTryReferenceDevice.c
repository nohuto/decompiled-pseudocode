/*
 * XREFs of PopFxTryReferenceDevice @ 0x1403596E8
 * Callers:
 *     PopFxProcessWork @ 0x14034B940 (PopFxProcessWork.c)
 *     PopFxAllocatePowerIrp @ 0x140358D10 (PopFxAllocatePowerIrp.c)
 *     PopFxLockDevice @ 0x14048C9E4 (PopFxLockDevice.c)
 *     PopFxPlatformIdleVeto @ 0x1404A1630 (PopFxPlatformIdleVeto.c)
 *     PoFxPowerControl @ 0x1404A8EE0 (PoFxPowerControl.c)
 *     PopFxProcessorIdleVeto @ 0x1405CD020 (PopFxProcessorIdleVeto.c)
 *     PopFxUpdatePlatformIdleState @ 0x1405CD8B0 (PopFxUpdatePlatformIdleState.c)
 *     PopFxUpdateProcessorIdleState @ 0x1405CD990 (PopFxUpdateProcessorIdleState.c)
 *     PopPepPlatformStateRegistered @ 0x1405D6B38 (PopPepPlatformStateRegistered.c)
 *     PoFxSetTargetDripsDevicePowerState @ 0x140A6F990 (PoFxSetTargetDripsDevicePowerState.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
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
