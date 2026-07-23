/*
 * XREFs of CmpTransUowIsEqual @ 0x1406F90AC
 * Callers:
 *     CmGetKCBCacheSecurity @ 0x140831720 (CmGetKCBCacheSecurity.c)
 *     CmpCheckKeyBodyAccess @ 0x14084DE00 (CmpCheckKeyBodyAccess.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x14084E400 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmpSecurityMethod @ 0x14084F0D0 (CmpSecurityMethod.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x14086D420 (CmpGetSecurityCacheEntryForKcbStack.c)
 *     CmpWalkOneLevel @ 0x140876890 (CmpWalkOneLevel.c)
 *     CmEqualTrans @ 0x14087D5B0 (CmEqualTrans.c)
 *     CmpSearchForTrans @ 0x14087F05C (CmpSearchForTrans.c)
 *     CmpIsKeyStackDeleted @ 0x140970C00 (CmpIsKeyStackDeleted.c)
 *     CmpGetSecurityDescriptorForKcbStack @ 0x1409772F0 (CmpGetSecurityDescriptorForKcbStack.c)
 *     CmRmIsKcbStackVisible @ 0x140990820 (CmRmIsKcbStackVisible.c)
 *     CmRmIsKCBVisible @ 0x1409909A0 (CmRmIsKCBVisible.c)
 * Callees:
 *     RtlCompareMemory @ 0x1406B4930 (RtlCompareMemory.c)
 */

bool __fastcall CmpTransUowIsEqual(const void *a1, const void *a2)
{
  return RtlCompareMemory(a1, a2, 0x10uLL) == 16;
}
