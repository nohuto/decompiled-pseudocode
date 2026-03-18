/*
 * XREFs of ?IsTimerEnabled@CAccessibilityTimer@@CA_NW4_ACCESSIBILITY_TIMERS@@@Z @ 0x14020E6D0
 * Callers:
 *     ?ExecuteTimer@CAccessibilityTimer@@SAXW4_ACCESSIBILITY_TIMERS@@@Z @ 0x14020E4E0 (-ExecuteTimer@CAccessibilityTimer@@SAXW4_ACCESSIBILITY_TIMERS@@@Z.c)
 *     ?KillTimer@CAccessibilityTimer@@SA_NW4_ACCESSIBILITY_TIMERS@@@Z @ 0x14020E710 (-KillTimer@CAccessibilityTimer@@SA_NW4_ACCESSIBILITY_TIMERS@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CAccessibilityTimer::IsTimerEnabled(__int64 a1)
{
  return ((unsigned __int16)(1 << a1) & *(_WORD *)(W32GetUserSessionState(a1) + 21908)) != 0;
}
