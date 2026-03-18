/*
 * XREFs of SepInitializeWorkList @ 0x140C3786C
 * Callers:
 *     SepInitializationPhase0 @ 0x140C39CC4 (SepInitializationPhase0.c)
 * Callees:
 *     ExInitializeResourceLite2 @ 0x140365350 (ExInitializeResourceLite2.c)
 */

__int64 SepInitializeWorkList()
{
  __int64 result; // rax

  ExInitializeResourceLite2(&stru_140E67B90, -1);
  qword_140E67BF8 = 0LL;
  qword_140E67B78 = (__int64)&SepLsaAuditQueueInfo;
  SepLsaAuditQueueInfo = (__int64)&SepLsaAuditQueueInfo;
  qword_140E67C48 = (__int64)ExFreePool;
  qword_140E67B88 = (__int64)&qword_140E67B80;
  qword_140E67B80 = (__int64)&qword_140E67B80;
  qword_140E67C40 = (__int64)SepAdtDetermineInsertQueue;
  word_140E67C50 = 3;
  ExInitializeResourceLite2(&stru_140E679C0, -1);
  qword_140E67A78 = (__int64)ExFreePool;
  qword_140E679A8 = (__int64)&SepLsaDeletedLogonQueueInfo;
  SepLsaDeletedLogonQueueInfo = (__int64)&SepLsaDeletedLogonQueueInfo;
  result = 1LL;
  word_140E67A80 = 1;
  return result;
}
