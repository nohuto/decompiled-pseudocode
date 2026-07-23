/*
 * XREFs of RtlpHpSegMgrUnlock @ 0x14035CE38
 * Callers:
 *     RtlpHpSegMgrVaCtxFree @ 0x14035CE60 (RtlpHpSegMgrVaCtxFree.c)
 *     RtlpHpSegMgrVaCtxInsert @ 0x14035D4AC (RtlpHpSegMgrVaCtxInsert.c)
 *     RtlpHpSegMgrVaCtxAlloc @ 0x14035D7A8 (RtlpHpSegMgrVaCtxAlloc.c)
 * Callees:
 *     RtlpHpReleaseLockExclusive @ 0x140360D90 (RtlpHpReleaseLockExclusive.c)
 */

__int64 __fastcall RtlpHpSegMgrUnlock(__int64 a1)
{
  return RtlpHpReleaseLockExclusive(a1 + 112);
}
