/*
 * XREFs of ?GetSlotIndexForSlotType@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAIAEBUSTATE_SPECIFICATION@3@W4StateSlotType@3@@Z @ 0x1400E6770
 * Callers:
 *     ?ExitCurrentState@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA?AW4EngineState@123@AEBUEVENT_ACTION@123@@Z @ 0x1400E6610 (-ExitCurrentState@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA-AW4EngineState@123@AEBUEV.c)
 *     ?PurgeEventsForCurrentState@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXXZ @ 0x1400E6B68 (-PurgeEventsForCurrentState@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmFx::StateMachineEngine::StateMachineEngineImpl::GetSlotIndexForSlotType(
        SmFx::StateMachineEngine::StateMachineEngineImpl *this,
        const struct SmFx::STATE_SPECIFICATION *a2,
        __int16 a3)
{
  __int64 result; // rax
  __int16 i; // r9
  unsigned int v5; // ecx

  result = 0LL;
  for ( i = 1; i != a3; result = v5 )
  {
    v5 = result + 1;
    if ( ((unsigned __int16)i & *(_WORD *)a2->activeSlots) != i )
      v5 = result;
    i *= 2;
  }
  return result;
}
