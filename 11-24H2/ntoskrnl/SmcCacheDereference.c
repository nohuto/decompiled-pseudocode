/*
 * XREFs of SmcCacheDereference @ 0x14079D0D8
 * Callers:
 *     SmcProcessCreateRequest @ 0x140798E7C (SmcProcessCreateRequest.c)
 *     SmcGetCacheStats @ 0x14079D63C (SmcGetCacheStats.c)
 *     SmcStoreCreate @ 0x14079D7E4 (SmcStoreCreate.c)
 *     SmcStoreDelete @ 0x14079DA44 (SmcStoreDelete.c)
 *     SmcStoreResize @ 0x14079DD30 (SmcStoreResize.c)
 *     SmcVolumePnpNotification @ 0x14079E340 (SmcVolumePnpNotification.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 */

void __fastcall SmcCacheDereference(__int64 a1, char a2)
{
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(32LL * (a2 & 0xF) + a1 + 8));
}
