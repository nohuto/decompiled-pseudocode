/*
 * XREFs of SdbReadQWORDTag @ 0x1407F606C
 * Callers:
 *     SdbpCheckApplicationTypeAttributes @ 0x14068ACD4 (SdbpCheckApplicationTypeAttributes.c)
 *     KsepDbReadKData @ 0x14073293C (KsepDbReadKData.c)
 *     KsepDbReadKFlag @ 0x140732B04 (KsepDbReadKFlag.c)
 *     SdbQueryDataExTagID @ 0x1407F253C (SdbQueryDataExTagID.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x1407F4E08 (SdbpGetRegistryMatchingAttributes.c)
 *     SdbpCheckAllAttributes @ 0x1407F77EC (SdbpCheckAllAttributes.c)
 *     SdbpMatchOsVersion @ 0x140A0B840 (SdbpMatchOsVersion.c)
 * Callees:
 *     SdbpReadTagData @ 0x1408256F0 (SdbpReadTagData.c)
 *     SdbGetTagFromTagID @ 0x140825934 (SdbGetTagFromTagID.c)
 *     AslLogCallPrintf @ 0x140825A60 (AslLogCallPrintf.c)
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
