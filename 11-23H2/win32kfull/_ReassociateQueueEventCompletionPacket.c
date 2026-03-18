/*
 * XREFs of _ReassociateQueueEventCompletionPacket @ 0x1C01B2E04
 * Callers:
 *     NtUserMsgWaitForMultipleObjectsEx @ 0x1C011DBA0 (NtUserMsgWaitForMultipleObjectsEx.c)
 *     NtUserReassociateQueueEventCompletionPacket @ 0x1C01D8590 (NtUserReassociateQueueEventCompletionPacket.c)
 * Callees:
 *     <none>
 */

__int64 ReassociateQueueEventCompletionPacket()
{
  ZwAssociateWaitCompletionPacket(
    *(_QWORD *)(gptiCurrent + 1488LL),
    *(_QWORD *)(gptiCurrent + 1464LL),
    *(_QWORD *)(gptiCurrent + 1480LL),
    0LL,
    1LL,
    0,
    0LL,
    0LL);
  return 1LL;
}
