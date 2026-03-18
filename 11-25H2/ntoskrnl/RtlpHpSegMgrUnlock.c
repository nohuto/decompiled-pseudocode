/*
 * XREFs of RtlpHpSegMgrUnlock @ 0x1402FA950
 * Callers:
 *     RtlpHpSegMgrVaCtxFree @ 0x1402F916C (RtlpHpSegMgrVaCtxFree.c)
 *     RtlpHpSegMgrVaCtxAlloc @ 0x1402F9630 (RtlpHpSegMgrVaCtxAlloc.c)
 *     RtlpHpSegMgrVaCtxInsert @ 0x1402FA798 (RtlpHpSegMgrVaCtxInsert.c)
 * Callees:
 *     RtlpHpReleaseLockExclusive @ 0x14031FBD0 (RtlpHpReleaseLockExclusive.c)
 */

__int64 __fastcall RtlpHpSegMgrUnlock(__int64 a1)
{
  return RtlpHpReleaseLockExclusive(a1 + 112);
}
