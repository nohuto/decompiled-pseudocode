/*
 * XREFs of ?SetTimerState@CAccessibilityTimer@@CAXW4_ACCESSIBILITY_TIMERS@@_N@Z @ 0x14020E7A0
 * Callers:
 *     ?KillTimer@CAccessibilityTimer@@SA_NW4_ACCESSIBILITY_TIMERS@@@Z @ 0x14020E710 (-KillTimer@CAccessibilityTimer@@SA_NW4_ACCESSIBILITY_TIMERS@@@Z.c)
 *     ?SetTimer@CAccessibilityTimer@@SA?AW4_ACCESSIBILITY_TIMERS@@KP6AXPEAUtagWND@@I_K_J@ZH@Z @ 0x14020E750 (-SetTimer@CAccessibilityTimer@@SA-AW4_ACCESSIBILITY_TIMERS@@KP6AXPEAUtagWND@@I_K_J@ZH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAccessibilityTimer::SetTimerState(__int64 a1, char a2)
{
  char v3; // di
  __int64 result; // rax
  __int16 v5; // dx
  __int16 v6; // dx

  v3 = a1;
  result = W32GetUserSessionState(a1);
  v5 = *(_WORD *)(result + 21908);
  if ( a2 )
    v6 = v5 | (1 << (v3 & 0xF));
  else
    v6 = v5 & ~(1 << (v3 & 0xF));
  *(_WORD *)(result + 21908) = v6;
  return result;
}
