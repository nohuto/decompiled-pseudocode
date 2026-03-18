/*
 * XREFs of SmcCacheDereference @ 0x14078DD18
 * Callers:
 *     SmcProcessCreateRequest @ 0x140789AAC (SmcProcessCreateRequest.c)
 *     SmcGetCacheStats @ 0x14078E27C (SmcGetCacheStats.c)
 *     SmcStoreCreate @ 0x14078E424 (SmcStoreCreate.c)
 *     SmcStoreDelete @ 0x14078E684 (SmcStoreDelete.c)
 *     SmcStoreResize @ 0x14078E970 (SmcStoreResize.c)
 *     SmcVolumePnpNotification @ 0x14078EF80 (SmcVolumePnpNotification.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 */

void __fastcall SmcCacheDereference(__int64 a1, char a2)
{
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(32LL * (a2 & 0xF) + a1 + 8));
}
