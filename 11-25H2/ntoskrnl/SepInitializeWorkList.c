/*
 * XREFs of SepInitializeWorkList @ 0x140C2659C
 * Callers:
 *     SepInitializationPhase0 @ 0x140C289F4 (SepInitializationPhase0.c)
 * Callees:
 *     ExInitializeResourceLite2 @ 0x1402D6940 (ExInitializeResourceLite2.c)
 */

__int64 SepInitializeWorkList()
{
  __int64 result; // rax

  ExInitializeResourceLite2(&stru_140E67890, -1);
  qword_140E678F8 = 0LL;
  qword_140E67878 = (__int64)&SepLsaAuditQueueInfo;
  SepLsaAuditQueueInfo = (__int64)&SepLsaAuditQueueInfo;
  qword_140E67948 = (__int64)ExFreePool;
  qword_140E67888 = (__int64)&qword_140E67880;
  qword_140E67880 = (__int64)&qword_140E67880;
  qword_140E67940 = (__int64)SepAdtDetermineInsertQueue;
  word_140E67950 = 3;
  ExInitializeResourceLite2(&stru_140E676D0, -1);
  qword_140E67788 = (__int64)ExFreePool;
  qword_140E676B8 = (__int64)&SepLsaDeletedLogonQueueInfo;
  SepLsaDeletedLogonQueueInfo = (__int64)&SepLsaDeletedLogonQueueInfo;
  result = 1LL;
  word_140E67790 = 1;
  return result;
}
