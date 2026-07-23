/*
 * XREFs of RtlpHpSegMgrLock @ 0x18009A674
 * Callers:
 *     RtlpHpSegMgrVaCtxAlloc @ 0x18009C428 (RtlpHpSegMgrVaCtxAlloc.c)
 *     RtlpHpSegMgrVaCtxFree @ 0x180156600 (RtlpHpSegMgrVaCtxFree.c)
 *     RtlpHpSegMgrVaCtxInsert @ 0x180156750 (RtlpHpSegMgrVaCtxInsert.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 */

char __fastcall RtlpHpSegMgrLock(_RTL_SRWLOCK *a1)
{
  RtlAcquireSRWLockExclusive(a1 + 14);
  return -1;
}
