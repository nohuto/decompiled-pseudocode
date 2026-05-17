/*
 * XREFs of RtlpHpSegMgrLock @ 0x180112AF0
 * Callers:
 *     RtlpHpSegMgrVaCtxAlloc @ 0x18009189C (RtlpHpSegMgrVaCtxAlloc.c)
 *     RtlpHpSegMgrVaCtxFree @ 0x180158240 (RtlpHpSegMgrVaCtxFree.c)
 *     RtlpHpSegMgrVaCtxInsert @ 0x180158390 (RtlpHpSegMgrVaCtxInsert.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 */

char __fastcall RtlpHpSegMgrLock(__int64 a1, volatile signed __int32 **a2, unsigned __int64 a3)
{
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a1 + 112), a2, a3);
  return -1;
}
