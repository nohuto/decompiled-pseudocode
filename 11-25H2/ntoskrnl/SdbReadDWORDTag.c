/*
 * XREFs of SdbReadDWORDTag @ 0x140824978
 * Callers:
 *     SdbpCheckApplicationTypeAttributes @ 0x14068ACD4 (SdbpCheckApplicationTypeAttributes.c)
 *     KsepDbGetShimInfo @ 0x140732594 (KsepDbGetShimInfo.c)
 *     KsepDbReadKData @ 0x14073293C (KsepDbReadKData.c)
 *     SdbQueryDataExTagID @ 0x1407F253C (SdbQueryDataExTagID.c)
 *     SdbpCheckContainment @ 0x1407F2B80 (SdbpCheckContainment.c)
 *     SdbpCheckOSKind @ 0x1407F4180 (SdbpCheckOSKind.c)
 *     SdbpCheckRuntimePlatform @ 0x1407F42B0 (SdbpCheckRuntimePlatform.c)
 *     SdbpGetDeviceDWORD @ 0x1407F4A5C (SdbpGetDeviceDWORD.c)
 *     SdbpGetExeEntryFlags @ 0x1407F4AAC (SdbpGetExeEntryFlags.c)
 *     SdbpGetMatchingTextAttributes @ 0x1407F4BE4 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x1407F4E08 (SdbpGetRegistryMatchingAttributes.c)
 *     SdbpCheckAllAttributes @ 0x1407F77EC (SdbpCheckAllAttributes.c)
 *     SdbMergeIsEntryUpdated @ 0x1407F8158 (SdbMergeIsEntryUpdated.c)
 *     InitOnceScanIndexes @ 0x140824AF0 (InitOnceScanIndexes.c)
 *     KsepDbGetDriverShimsInternal @ 0x14082941C (KsepDbGetDriverShimsInternal.c)
 *     SdbGetDatabaseEdition @ 0x14082B870 (SdbGetDatabaseEdition.c)
 * Callees:
 *     SdbpReadTagData @ 0x1408256F0 (SdbpReadTagData.c)
 *     SdbGetTagFromTagID @ 0x140825934 (SdbGetTagFromTagID.c)
 *     AslLogCallPrintf @ 0x140825A60 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbReadDWORDTag(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  unsigned int v5; // ebx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // eax
  unsigned int v10; // ecx
  unsigned int v12; // [rsp+50h] [rbp+18h] BYREF

  v4 = a3;
  v12 = a3;
  v5 = a2;
  if ( (SdbGetTagFromTagID(a1, a2, a3, a4) & 0xF000) == 0x4000 )
  {
    v9 = SdbpReadTagData(a1, v5, &v12, 4LL);
    v10 = v12;
    if ( !v9 )
      return v4;
    return v10;
  }
  else
  {
    SdbGetTagFromTagID(a1, v5, v7, v8);
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbReadDWORDTag",
      179,
      (unsigned int)"TagID 0x%X, Tag 0x%X not of the expected type");
    return v4;
  }
}
