/*
 * XREFs of RtlpHpSegMgrUnlock @ 0x1402C0D40
 * Callers:
 *     RtlpHpSegMgrVaCtxFree @ 0x1402C0D68 (RtlpHpSegMgrVaCtxFree.c)
 *     RtlpHpSegMgrVaCtxAlloc @ 0x1402C1364 (RtlpHpSegMgrVaCtxAlloc.c)
 *     RtlpHpSegMgrVaCtxInsert @ 0x1402C2AA8 (RtlpHpSegMgrVaCtxInsert.c)
 * Callees:
 *     RtlpHpReleaseLockExclusive @ 0x1402B9650 (RtlpHpReleaseLockExclusive.c)
 */

void __fastcall RtlpHpSegMgrUnlock(__int64 a1, unsigned __int8 a2)
{
  RtlpHpReleaseLockExclusive(a1 + 112, *(_DWORD *)(a1 + 40) & 1, a2);
}
