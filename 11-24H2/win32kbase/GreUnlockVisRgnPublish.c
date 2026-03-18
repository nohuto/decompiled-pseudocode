/*
 * XREFs of GreUnlockVisRgnPublish @ 0x1400F6F80
 * Callers:
 *     <none>
 * Callees:
 *     ??$GreReleaseSemaphoreShared@$0L@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400F6FA8 (--$GreReleaseSemaphoreShared@$0L@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 */

__int64 __fastcall GreUnlockVisRgnPublish(__int64 a1)
{
  __int64 SessionState; // rax

  SessionState = W32GetSessionState(a1);
  return GreReleaseSemaphoreShared<11,>(*(_QWORD *)(SessionState + 88));
}
