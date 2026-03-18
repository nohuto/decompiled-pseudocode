/*
 * XREFs of NtUserThreadMessageQueueAttached @ 0x140171220
 * Callers:
 *     <none>
 * Callees:
 *     _ThreadMessageQueueAttached @ 0x140171260 (_ThreadMessageQueueAttached.c)
 */

__int64 __fastcall NtUserThreadMessageQueueAttached(unsigned int a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx

  EnterCrit(0LL, 0LL);
  v2 = (int)ThreadMessageQueueAttached(a1);
  UserSessionSwitchLeaveCrit(v3);
  return v2;
}
