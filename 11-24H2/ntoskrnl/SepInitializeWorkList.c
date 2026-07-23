/*
 * XREFs of SepInitializeWorkList @ 0x140C399AC
 * Callers:
 *     SepInitializationPhase0 @ 0x140C3BE1C (SepInitializationPhase0.c)
 * Callees:
 *     ExInitializeResourceLite2 @ 0x1403EAA00 (ExInitializeResourceLite2.c)
 */

__int64 SepInitializeWorkList()
{
  __int64 result; // rax

  ExInitializeResourceLite2(&stru_140E67D70, -1);
  qword_140E67DD8 = 0LL;
  qword_140E67D58 = (__int64)&SepLsaAuditQueueInfo;
  SepLsaAuditQueueInfo = (__int64)&SepLsaAuditQueueInfo;
  qword_140E67E28 = (__int64)ExFreePool;
  qword_140E67D68 = (__int64)&qword_140E67D60;
  qword_140E67D60 = (__int64)&qword_140E67D60;
  qword_140E67E20 = (__int64)SepAdtDetermineInsertQueue;
  word_140E67E30 = 3;
  ExInitializeResourceLite2(&stru_140E67B90, -1);
  qword_140E67C48 = (__int64)ExFreePool;
  qword_140E67B78 = (__int64)&SepLsaDeletedLogonQueueInfo;
  SepLsaDeletedLogonQueueInfo = (__int64)&SepLsaDeletedLogonQueueInfo;
  result = 1LL;
  word_140E67C50 = 1;
  return result;
}
