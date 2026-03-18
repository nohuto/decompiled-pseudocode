/*
 * XREFs of SdbReadDWORDTag @ 0x14095F0F8
 * Callers:
 *     SdbpCheckApplicationTypeAttributes @ 0x140696028 (SdbpCheckApplicationTypeAttributes.c)
 *     KsepDbGetShimInfo @ 0x14073E5B4 (KsepDbGetShimInfo.c)
 *     KsepDbReadKData @ 0x14073E95C (KsepDbReadKData.c)
 *     SdbQueryDataExTagID @ 0x1408023EC (SdbQueryDataExTagID.c)
 *     SdbpCheckContainment @ 0x140802A30 (SdbpCheckContainment.c)
 *     SdbpCheckOSKind @ 0x140804030 (SdbpCheckOSKind.c)
 *     SdbpCheckRuntimePlatform @ 0x140804160 (SdbpCheckRuntimePlatform.c)
 *     SdbpGetDeviceDWORD @ 0x1408046B0 (SdbpGetDeviceDWORD.c)
 *     SdbpGetExeEntryFlags @ 0x140804700 (SdbpGetExeEntryFlags.c)
 *     SdbpGetMatchingTextAttributes @ 0x140804838 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x140804A5C (SdbpGetRegistryMatchingAttributes.c)
 *     SdbpCheckAllAttributes @ 0x14080735C (SdbpCheckAllAttributes.c)
 *     SdbMergeIsEntryUpdated @ 0x140807CC8 (SdbMergeIsEntryUpdated.c)
 *     KsepDbGetDriverShimsInternal @ 0x14095AE14 (KsepDbGetDriverShimsInternal.c)
 *     SdbGetDatabaseEdition @ 0x14095D294 (SdbGetDatabaseEdition.c)
 *     InitOnceScanIndexes @ 0x14095F1B0 (InitOnceScanIndexes.c)
 * Callees:
 *     SdbpReadTagData @ 0x14095FE60 (SdbpReadTagData.c)
 *     SdbGetTagFromTagID @ 0x1409600B0 (SdbGetTagFromTagID.c)
 *     AslLogCallPrintf @ 0x1409601DC (AslLogCallPrintf.c)
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
