/*
 * XREFs of NtUserSetThreadQueueMergeSetting @ 0x1C01DC720
 * Callers:
 *     <none>
 * Callees:
 *     _SetThreadQueueMergeSetting @ 0x1C01E2FE0 (_SetThreadQueueMergeSetting.c)
 */

__int64 __fastcall NtUserSetThreadQueueMergeSetting(unsigned int a1, unsigned int a2)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9

  EnterCrit(0LL, 0LL);
  v4 = (int)SetThreadQueueMergeSetting(a1, a2);
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v4;
}
