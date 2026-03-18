/*
 * XREFs of GreUnlockDynamicModeChange @ 0x140113540
 * Callers:
 *     <none>
 * Callees:
 *     ??$GreReleaseSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14001F464 (--$GreReleaseSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 */

void __fastcall GreUnlockDynamicModeChange(__int64 a1)
{
  __int64 SessionState; // rax

  SessionState = W32GetSessionState(a1);
  GreReleaseSemaphoreShared<1,>(*(__int64 **)(SessionState + 88));
}
