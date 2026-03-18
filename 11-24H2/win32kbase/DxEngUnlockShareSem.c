/*
 * XREFs of DxEngUnlockShareSem @ 0x1400EF8E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$GreReleaseSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14001F464 (--$GreReleaseSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 */

__int64 __fastcall DxEngUnlockShareSem(__int64 a1)
{
  __int64 SessionState; // rax

  SessionState = W32GetSessionState(a1);
  GreReleaseSemaphoreShared<1,>(*(__int64 **)(SessionState + 88));
  return 1LL;
}
