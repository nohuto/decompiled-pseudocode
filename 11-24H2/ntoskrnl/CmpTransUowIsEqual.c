/*
 * XREFs of CmpTransUowIsEqual @ 0x1406FB46C
 * Callers:
 *     CmpCheckKeyBodyAccess @ 0x140851B40 (CmpCheckKeyBodyAccess.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x140852140 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmpSecurityMethod @ 0x140852E10 (CmpSecurityMethod.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x140869130 (CmpGetSecurityCacheEntryForKcbStack.c)
 *     CmpWalkOneLevel @ 0x140872560 (CmpWalkOneLevel.c)
 *     CmEqualTrans @ 0x140879280 (CmEqualTrans.c)
 *     CmpSearchForTrans @ 0x14087B1AC (CmpSearchForTrans.c)
 *     CmpIsKeyStackDeleted @ 0x140988420 (CmpIsKeyStackDeleted.c)
 *     CmpGetSecurityDescriptorForKcbStack @ 0x14098C9D0 (CmpGetSecurityDescriptorForKcbStack.c)
 *     CmGetKCBCacheSecurity @ 0x1409A07E0 (CmGetKCBCacheSecurity.c)
 *     CmRmIsKcbStackVisible @ 0x1409A7350 (CmRmIsKcbStackVisible.c)
 *     CmRmIsKCBVisible @ 0x1409A73F0 (CmRmIsKCBVisible.c)
 * Callees:
 *     RtlCompareMemory @ 0x1406B3990 (RtlCompareMemory.c)
 */

bool __fastcall CmpTransUowIsEqual(const void *a1, const void *a2)
{
  return RtlCompareMemory(a1, a2, 0x10uLL) == 16;
}
