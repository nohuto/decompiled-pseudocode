/*
 * XREFs of KiSetForceIdleState @ 0x1403CBA34
 * Callers:
 *     KiUpdateTime @ 0x14029B7C0 (KiUpdateTime.c)
 *     KiCallInterruptServiceRoutine @ 0x14033B0A0 (KiCallInterruptServiceRoutine.c)
 *     KiCheckAndRearmForceIdle @ 0x1403C17F8 (KiCheckAndRearmForceIdle.c)
 *     KeSetForceIdle @ 0x1403CAD20 (KeSetForceIdle.c)
 *     ?KiForceIdleStopDpcRoutine@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1403CAE10 (-KiForceIdleStopDpcRoutine@@YAXPEAU_KDPC@@PEAX11@Z.c)
 *     KeClearForceIdle @ 0x1403CB798 (KeClearForceIdle.c)
 *     KiResetForceIdle @ 0x14040C2A4 (KiResetForceIdle.c)
 *     ?KiForceIdleStartDpcRoutine@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1404BBDB0 (-KiForceIdleStartDpcRoutine@@YAXPEAU_KDPC@@PEAX11@Z.c)
 * Callees:
 *     PoTraceForceIdleStateChange @ 0x1403CBA60 (PoTraceForceIdleStateChange.c)
 */

__int64 __fastcall KiSetForceIdleState(unsigned int a1)
{
  unsigned int v1; // ebx

  v1 = KiForceIdleState;
  KiForceIdleState = a1;
  PoTraceForceIdleStateChange(v1, a1);
  return v1;
}
