/*
 * XREFs of RtlpHpSegMgrLock @ 0x14035CE14
 * Callers:
 *     RtlpHpSegMgrVaCtxFree @ 0x14035CE60 (RtlpHpSegMgrVaCtxFree.c)
 *     RtlpHpSegMgrVaCtxInsert @ 0x14035D4AC (RtlpHpSegMgrVaCtxInsert.c)
 *     RtlpHpSegMgrVaCtxAlloc @ 0x14035D7A8 (RtlpHpSegMgrVaCtxAlloc.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x140336AF0 (RtlpHpAcquireLockExclusive.c)
 */

char __fastcall RtlpHpSegMgrLock(__int64 a1)
{
  return RtlpHpAcquireLockExclusive((int *)(a1 + 112), *(_DWORD *)(a1 + 40) & 1);
}
