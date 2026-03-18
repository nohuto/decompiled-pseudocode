/*
 * XREFs of NtUserReassociateQueueEventCompletionPacket @ 0x14029A730
 * Callers:
 *     <none>
 * Callees:
 *     _ReassociateQueueEventCompletionPacket @ 0x1401EA614 (_ReassociateQueueEventCompletionPacket.c)
 */

__int64 NtUserReassociateQueueEventCompletionPacket()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // rbx
  __int64 v3; // rcx

  EnterCrit(0LL, 0LL);
  v2 = (int)ReassociateQueueEventCompletionPacket(v1, v0);
  UserSessionSwitchLeaveCrit(v3);
  return v2;
}
