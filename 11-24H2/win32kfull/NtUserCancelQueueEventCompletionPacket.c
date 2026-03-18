/*
 * XREFs of NtUserCancelQueueEventCompletionPacket @ 0x140292D70
 * Callers:
 *     <none>
 * Callees:
 *     _CancelQueueEventCompletionPacket @ 0x1401825E8 (_CancelQueueEventCompletionPacket.c)
 */

__int64 NtUserCancelQueueEventCompletionPacket()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // rbx
  __int64 v3; // rcx

  EnterCrit(0LL, 0LL);
  v2 = (int)CancelQueueEventCompletionPacket(v1, v0);
  UserSessionSwitchLeaveCrit(v3);
  return v2;
}
