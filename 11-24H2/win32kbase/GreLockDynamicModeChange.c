/*
 * XREFs of GreLockDynamicModeChange @ 0x14014AB40
 * Callers:
 *     <none>
 * Callees:
 *     ??$GreAcquireSemaphore@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400118C0 (--$GreAcquireSemaphore@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 */

__int64 __fastcall GreLockDynamicModeChange(__int64 a1)
{
  __int64 SessionState; // rax

  SessionState = W32GetSessionState(a1);
  return GreAcquireSemaphore<1,>(*(__int64 **)(SessionState + 88));
}
