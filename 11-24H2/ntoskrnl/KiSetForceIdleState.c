/*
 * XREFs of KiSetForceIdleState @ 0x140484E74
 * Callers:
 *     KiUpdateTime @ 0x1402AA2B0 (KiUpdateTime.c)
 *     KeClearForceIdle @ 0x1402BA2B0 (KeClearForceIdle.c)
 *     KiCallInterruptServiceRoutine @ 0x14031A580 (KiCallInterruptServiceRoutine.c)
 *     KiCheckAndRearmForceIdle @ 0x1403B03B8 (KiCheckAndRearmForceIdle.c)
 *     KiResetForceIdle @ 0x1404048A4 (KiResetForceIdle.c)
 *     KiForceIdleInterruptNotify @ 0x140404948 (KiForceIdleInterruptNotify.c)
 *     KeSetForceIdle @ 0x140484970 (KeSetForceIdle.c)
 *     ?KiForceIdleStopDpcRoutine@@YAXPEAU_KDPC@@PEAX11@Z @ 0x140484A60 (-KiForceIdleStopDpcRoutine@@YAXPEAU_KDPC@@PEAX11@Z.c)
 *     ?KiForceIdleStartDpcRoutine@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1404B6CC0 (-KiForceIdleStartDpcRoutine@@YAXPEAU_KDPC@@PEAX11@Z.c)
 * Callees:
 *     PoTraceForceIdleStateChange @ 0x140484EA0 (PoTraceForceIdleStateChange.c)
 */

__int64 __fastcall KiSetForceIdleState(unsigned int a1)
{
  unsigned int v1; // ebx

  v1 = KiForceIdleState;
  KiForceIdleState = a1;
  PoTraceForceIdleStateChange(v1, a1);
  return v1;
}
