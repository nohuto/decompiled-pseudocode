/*
 * XREFs of SmcCacheDereference @ 0x14079D1E8
 * Callers:
 *     SmcProcessCreateRequest @ 0x140798F8C (SmcProcessCreateRequest.c)
 *     SmcGetCacheStats @ 0x14079D74C (SmcGetCacheStats.c)
 *     SmcStoreCreate @ 0x14079D8F4 (SmcStoreCreate.c)
 *     SmcStoreDelete @ 0x14079DB54 (SmcStoreDelete.c)
 *     SmcStoreResize @ 0x14079DE40 (SmcStoreResize.c)
 *     SmcVolumePnpNotification @ 0x14079E450 (SmcVolumePnpNotification.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 */

void __fastcall SmcCacheDereference(__int64 a1, char a2)
{
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(32LL * (a2 & 0xF) + a1 + 8));
}
