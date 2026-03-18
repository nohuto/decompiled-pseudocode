/*
 * XREFs of CmpTransUowIsEqual @ 0x1406EF5FC
 * Callers:
 *     CmpCheckKeyBodyAccess @ 0x1408559A0 (CmpCheckKeyBodyAccess.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x140855F70 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmpSecurityMethod @ 0x140856B80 (CmpSecurityMethod.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x14086FF30 (CmpGetSecurityCacheEntryForKcbStack.c)
 *     CmpGetSecurityDescriptorForKcbStack @ 0x140870ED0 (CmpGetSecurityDescriptorForKcbStack.c)
 *     CmEqualTrans @ 0x140871010 (CmEqualTrans.c)
 *     CmpWalkOneLevel @ 0x140876200 (CmpWalkOneLevel.c)
 *     CmpSearchForTrans @ 0x140885E18 (CmpSearchForTrans.c)
 *     CmpIsKeyStackDeleted @ 0x140973050 (CmpIsKeyStackDeleted.c)
 *     CmGetKCBCacheSecurity @ 0x140976D40 (CmGetKCBCacheSecurity.c)
 *     CmRmIsKcbStackVisible @ 0x1409A6D80 (CmRmIsKcbStackVisible.c)
 *     CmRmIsKCBVisible @ 0x1409A6EB0 (CmRmIsKCBVisible.c)
 * Callees:
 *     RtlCompareMemory @ 0x1406A86C0 (RtlCompareMemory.c)
 */

bool __fastcall CmpTransUowIsEqual(const void *a1, const void *a2)
{
  return RtlCompareMemory(a1, a2, 0x10uLL) == 16;
}
