/*
 * XREFs of RtlpHpSegMgrLock @ 0x1402C0D1C
 * Callers:
 *     RtlpHpSegMgrVaCtxFree @ 0x1402C0D68 (RtlpHpSegMgrVaCtxFree.c)
 *     RtlpHpSegMgrVaCtxAlloc @ 0x1402C1364 (RtlpHpSegMgrVaCtxAlloc.c)
 *     RtlpHpSegMgrVaCtxInsert @ 0x1402C2AA8 (RtlpHpSegMgrVaCtxInsert.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x14020D790 (RtlpHpAcquireLockExclusive.c)
 */

char __fastcall RtlpHpSegMgrLock(__int64 a1, __int64 a2, __int64 a3)
{
  return RtlpHpAcquireLockExclusive((int *)(a1 + 112), *(_DWORD *)(a1 + 40) & 1, a3);
}
