/*
 * XREFs of SdbReadQWORDTag @ 0x14080631C
 * Callers:
 *     SdbpCheckApplicationTypeAttributes @ 0x1406970F8 (SdbpCheckApplicationTypeAttributes.c)
 *     KsepDbReadKData @ 0x14073C88C (KsepDbReadKData.c)
 *     KsepDbReadKFlag @ 0x14073CA54 (KsepDbReadKFlag.c)
 *     SdbQueryDataExTagID @ 0x140802B2C (SdbQueryDataExTagID.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x14080519C (SdbpGetRegistryMatchingAttributes.c)
 *     SdbpCheckAllAttributes @ 0x140807A9C (SdbpCheckAllAttributes.c)
 *     SdbpMatchOsVersion @ 0x140A04DE4 (SdbpMatchOsVersion.c)
 * Callees:
 *     SdbpReadTagData @ 0x140947920 (SdbpReadTagData.c)
 *     SdbGetTagFromTagID @ 0x140947B70 (SdbGetTagFromTagID.c)
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbReadQWORDTag(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebx
  __int64 v7; // r8
  __int64 v8; // r9
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // [rsp+50h] [rbp+18h] BYREF

  v12 = a3;
  v5 = a2;
  if ( (SdbGetTagFromTagID(a1, a2, a3, a4) & 0xF000) == 0x5000 )
  {
    v10 = SdbpReadTagData(a1, v5, &v12, 8LL);
    v11 = v12;
    if ( !v10 )
      return a3;
    return v11;
  }
  else
  {
    SdbGetTagFromTagID(a1, v5, v7, v8);
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbReadQWORDTag",
      186,
      (unsigned int)"TagID 0x%X, Tag 0x%X not of the expected type");
    return a3;
  }
}
