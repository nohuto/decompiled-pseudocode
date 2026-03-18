/*
 * XREFs of ?ForwardInputToISMTimers@CAccessibilityTimer@@CAXW4_ACCESSIBILITY_TIMERS@@KHH@Z @ 0x14020E5B8
 * Callers:
 *     ?KillTimer@CAccessibilityTimer@@SA_NW4_ACCESSIBILITY_TIMERS@@@Z @ 0x14020E710 (-KillTimer@CAccessibilityTimer@@SA_NW4_ACCESSIBILITY_TIMERS@@@Z.c)
 *     ?SetTimer@CAccessibilityTimer@@SA?AW4_ACCESSIBILITY_TIMERS@@KP6AXPEAUtagWND@@I_K_J@ZH@Z @ 0x14020E750 (-SetTimer@CAccessibilityTimer@@SA-AW4_ACCESSIBILITY_TIMERS@@KP6AXPEAUtagWND@@I_K_J@ZH@Z.c)
 * Callees:
 *     SendMessageTo @ 0x140048F20 (SendMessageTo.c)
 */

__int64 __fastcall CAccessibilityTimer::ForwardInputToISMTimers(int a1, int a2, int a3, int a4)
{
  int v5; // [rsp+20h] [rbp-18h] BYREF
  int v6; // [rsp+24h] [rbp-14h]
  int v7; // [rsp+28h] [rbp-10h]

  v5 = a1;
  v7 = a2;
  v6 = a3 != 0;
  if ( a4 )
    v6 = (a3 != 0) | 2;
  return SendMessageTo(17LL, &v5, 12LL);
}
