/*
 * XREFs of NtUserSetWaitForQueueAttach @ 0x14029EEB0
 * Callers:
 *     <none>
 * Callees:
 *     _SetWaitForQueueAttach @ 0x14021703C (_SetWaitForQueueAttach.c)
 */

__int64 __fastcall NtUserSetWaitForQueueAttach(unsigned int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rbx
  __int64 v4; // rcx

  EnterCrit(0LL, 0LL);
  v3 = (int)SetWaitForQueueAttach(a1, v2);
  UserSessionSwitchLeaveCrit(v4);
  return v3;
}
