/*
 * XREFs of RtlpHpSegMgrLock @ 0x180115830
 * Callers:
 *     RtlpHpSegMgrVaCtxAlloc @ 0x1800BAC1C (RtlpHpSegMgrVaCtxAlloc.c)
 *     RtlpHpSegMgrVaCtxFree @ 0x1801597F0 (RtlpHpSegMgrVaCtxFree.c)
 *     RtlpHpSegMgrVaCtxInsert @ 0x180159940 (RtlpHpSegMgrVaCtxInsert.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 */

char __fastcall RtlpHpSegMgrLock(_RTL_SRWLOCK *a1)
{
  RtlAcquireSRWLockExclusive(a1 + 14);
  return -1;
}
