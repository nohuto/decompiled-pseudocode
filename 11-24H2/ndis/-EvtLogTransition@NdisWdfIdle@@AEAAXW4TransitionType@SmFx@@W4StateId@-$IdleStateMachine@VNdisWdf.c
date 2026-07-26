/*
 * XREFs of ?EvtLogTransition@NdisWdfIdle@@AEAAXW4TransitionType@SmFx@@W4StateId@?$IdleStateMachine@VNdisWdfIdle@@@@W4EventId@5@1@Z @ 0x140063600
 * Callers:
 *     ?EvtLogTransitionThunk@?$IdleStateMachine@VNdisWdfIdle@@@@CAXPEAXW4TransitionType@SmFx@@GGG@Z @ 0x1400635E0 (-EvtLogTransitionThunk@-$IdleStateMachine@VNdisWdfIdle@@@@CAXPEAXW4TransitionType@SmFx@@GGG@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qLLLL @ 0x140063680 (WPP_RECORDER_SF_qLLLL.c)
 */

_UNKNOWN **__fastcall NdisWdfIdle::EvtLogTransition(__int64 a1, int a2, char a3, char a4, char a5)
{
  _UNKNOWN **result; // rax

  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return (_UNKNOWN **)WPP_RECORDER_SF_qLLLL(
                          *((_QWORD *)WPP_GLOBAL_Control + 8),
                          a2,
                          13,
                          11,
                          (struct _GUID *)&WPP_dc0d0c0f10983dc717169f88e75f167f_Traceguids,
                          *(_QWORD *)(a1 + 136),
                          a2,
                          a3,
                          a4,
                          a5);
  return result;
}
