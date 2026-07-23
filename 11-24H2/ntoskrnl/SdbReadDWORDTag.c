/*
 * XREFs of SdbReadDWORDTag @ 0x140946BB8
 * Callers:
 *     SdbpCheckApplicationTypeAttributes @ 0x1406970F8 (SdbpCheckApplicationTypeAttributes.c)
 *     KsepDbGetShimInfo @ 0x14073C4E4 (KsepDbGetShimInfo.c)
 *     KsepDbReadKData @ 0x14073C88C (KsepDbReadKData.c)
 *     SdbQueryDataExTagID @ 0x140802B2C (SdbQueryDataExTagID.c)
 *     SdbpCheckContainment @ 0x140803170 (SdbpCheckContainment.c)
 *     SdbpCheckOSKind @ 0x140804770 (SdbpCheckOSKind.c)
 *     SdbpCheckRuntimePlatform @ 0x1408048A0 (SdbpCheckRuntimePlatform.c)
 *     SdbpGetDeviceDWORD @ 0x140804DF0 (SdbpGetDeviceDWORD.c)
 *     SdbpGetExeEntryFlags @ 0x140804E40 (SdbpGetExeEntryFlags.c)
 *     SdbpGetMatchingTextAttributes @ 0x140804F78 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x14080519C (SdbpGetRegistryMatchingAttributes.c)
 *     SdbpCheckAllAttributes @ 0x140807A9C (SdbpCheckAllAttributes.c)
 *     SdbMergeIsEntryUpdated @ 0x140808408 (SdbMergeIsEntryUpdated.c)
 *     KsepDbGetDriverShimsInternal @ 0x1409428D4 (KsepDbGetDriverShimsInternal.c)
 *     SdbGetDatabaseEdition @ 0x140944D54 (SdbGetDatabaseEdition.c)
 *     InitOnceScanIndexes @ 0x140946C70 (InitOnceScanIndexes.c)
 * Callees:
 *     SdbpReadTagData @ 0x140947920 (SdbpReadTagData.c)
 *     SdbGetTagFromTagID @ 0x140947B70 (SdbGetTagFromTagID.c)
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
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
