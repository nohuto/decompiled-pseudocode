/*
 * XREFs of KiSetForceIdleState @ 0x1403558C8
 * Callers:
 *     KiUpdateTime @ 0x140272C80 (KiUpdateTime.c)
 *     KiCallInterruptServiceRoutine @ 0x140279DF0 (KiCallInterruptServiceRoutine.c)
 *     KeSetForceIdle @ 0x140354B90 (KeSetForceIdle.c)
 *     KeClearForceIdle @ 0x1403551F8 (KeClearForceIdle.c)
 *     ?KiForceIdleStopDpcRoutine@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1403554A0 (-KiForceIdleStopDpcRoutine@@YAXPEAU_KDPC@@PEAX11@Z.c)
 *     KiCheckAndRearmForceIdle @ 0x140372628 (KiCheckAndRearmForceIdle.c)
 *     KiResetForceIdle @ 0x140404598 (KiResetForceIdle.c)
 *     ?KiForceIdleStartDpcRoutine@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1404BCC50 (-KiForceIdleStartDpcRoutine@@YAXPEAU_KDPC@@PEAX11@Z.c)
 * Callees:
 *     PoTraceForceIdleStateChange @ 0x1403558F4 (PoTraceForceIdleStateChange.c)
 */

__int64 __fastcall KiSetForceIdleState(unsigned int a1)
{
  unsigned int v1; // ebx

  v1 = KiForceIdleState;
  KiForceIdleState = a1;
  PoTraceForceIdleStateChange(v1, a1);
  return v1;
}
