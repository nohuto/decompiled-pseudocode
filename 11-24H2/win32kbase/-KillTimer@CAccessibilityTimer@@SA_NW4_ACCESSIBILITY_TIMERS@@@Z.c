/*
 * XREFs of ?KillTimer@CAccessibilityTimer@@SA_NW4_ACCESSIBILITY_TIMERS@@@Z @ 0x14020E710
 * Callers:
 *     <none>
 * Callees:
 *     ?ForwardInputToISMTimers@CAccessibilityTimer@@CAXW4_ACCESSIBILITY_TIMERS@@KHH@Z @ 0x14020E5B8 (-ForwardInputToISMTimers@CAccessibilityTimer@@CAXW4_ACCESSIBILITY_TIMERS@@KHH@Z.c)
 *     ?IsTimerEnabled@CAccessibilityTimer@@CA_NW4_ACCESSIBILITY_TIMERS@@@Z @ 0x14020E6D0 (-IsTimerEnabled@CAccessibilityTimer@@CA_NW4_ACCESSIBILITY_TIMERS@@@Z.c)
 *     ?SetTimerState@CAccessibilityTimer@@CAXW4_ACCESSIBILITY_TIMERS@@_N@Z @ 0x14020E7A0 (-SetTimerState@CAccessibilityTimer@@CAXW4_ACCESSIBILITY_TIMERS@@_N@Z.c)
 */

char __fastcall CAccessibilityTimer::KillTimer(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = a1;
  if ( !CAccessibilityTimer::IsTimerEnabled(a1) )
    return 0;
  CAccessibilityTimer::SetTimerState(v1, 0LL);
  CAccessibilityTimer::ForwardInputToISMTimers(v1, 0, 1, 1);
  return 1;
}
