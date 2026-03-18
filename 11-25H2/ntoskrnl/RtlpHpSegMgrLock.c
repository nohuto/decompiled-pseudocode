/*
 * XREFs of RtlpHpSegMgrLock @ 0x1402FA978
 * Callers:
 *     RtlpHpSegMgrVaCtxFree @ 0x1402F916C (RtlpHpSegMgrVaCtxFree.c)
 *     RtlpHpSegMgrVaCtxAlloc @ 0x1402F9630 (RtlpHpSegMgrVaCtxAlloc.c)
 *     RtlpHpSegMgrVaCtxInsert @ 0x1402FA798 (RtlpHpSegMgrVaCtxInsert.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x140212CB0 (RtlpHpAcquireLockExclusive.c)
 */

char __fastcall RtlpHpSegMgrLock(__int64 a1)
{
  return RtlpHpAcquireLockExclusive((int *)(a1 + 112), *(_DWORD *)(a1 + 40) & 1);
}
