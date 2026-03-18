/*
 * XREFs of GreUnlockSprite @ 0x140014650
 * Callers:
 *     <none>
 * Callees:
 *     ??$GreReleaseSemaphoreExclusive@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400146AC (--$GreReleaseSemaphoreExclusive@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 */

__int64 __fastcall GreUnlockSprite(__int64 a1, __int64 a2)
{
  __int64 SessionState; // rax

  SessionState = W32GetSessionState(a1, a2);
  return GreReleaseSemaphoreExclusive<6,>(*(_QWORD *)(SessionState + 88));
}
