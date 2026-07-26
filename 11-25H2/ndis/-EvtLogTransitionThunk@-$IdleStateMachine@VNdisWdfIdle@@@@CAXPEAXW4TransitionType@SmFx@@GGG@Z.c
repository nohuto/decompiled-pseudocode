/*
 * XREFs of ?EvtLogTransitionThunk@?$IdleStateMachine@VNdisWdfIdle@@@@CAXPEAXW4TransitionType@SmFx@@GGG@Z @ 0x14007F490
 * Callers:
 *     <none>
 * Callees:
 *     ?EvtLogTransition@NdisWdfIdle@@AEAAXW4TransitionType@SmFx@@W4StateId@?$IdleStateMachine@VNdisWdfIdle@@@@W4EventId@5@1@Z @ 0x14007F4B0 (-EvtLogTransition@NdisWdfIdle@@AEAAXW4TransitionType@SmFx@@W4StateId@-$IdleStateMachine@VNdisWdf.c)
 */

__int64 __fastcall IdleStateMachine<NdisWdfIdle>::EvtLogTransitionThunk(__int64 a1)
{
  return NdisWdfIdle::EvtLogTransition(a1);
}
