/*
 * XREFs of PopFxTryReferenceDevice @ 0x140377BF0
 * Callers:
 *     PopFxProcessWork @ 0x1403172E0 (PopFxProcessWork.c)
 *     PopFxLockDevice @ 0x140376070 (PopFxLockDevice.c)
 *     PopFxAllocatePowerIrp @ 0x140378380 (PopFxAllocatePowerIrp.c)
 *     PopFxPlatformIdleVeto @ 0x1404A1080 (PopFxPlatformIdleVeto.c)
 *     PoFxPowerControl @ 0x1404A9650 (PoFxPowerControl.c)
 *     PopFxProcessorIdleVeto @ 0x1405D18A0 (PopFxProcessorIdleVeto.c)
 *     PopFxUpdatePlatformIdleState @ 0x1405D2130 (PopFxUpdatePlatformIdleState.c)
 *     PopFxUpdateProcessorIdleState @ 0x1405D2210 (PopFxUpdateProcessorIdleState.c)
 *     PopPepPlatformStateRegistered @ 0x1405DBD18 (PopPepPlatformStateRegistered.c)
 *     PoFxSetTargetDripsDevicePowerState @ 0x140A71950 (PoFxSetTargetDripsDevicePowerState.c)
 * Callees:
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
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
