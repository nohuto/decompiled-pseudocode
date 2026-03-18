/*
 * XREFs of SdbReadWORDTag @ 0x140824E14
 * Callers:
 *     SdbpCheckAllAttributes @ 0x1407F77EC (SdbpCheckAllAttributes.c)
 *     SdbMergeIsEntryUpdated @ 0x1407F8158 (SdbMergeIsEntryUpdated.c)
 *     InitOnceScanIndexes @ 0x140824AF0 (InitOnceScanIndexes.c)
 *     SdbpCheckForMatch @ 0x140A0B70C (SdbpCheckForMatch.c)
 * Callees:
 *     SdbpReadTagData @ 0x1408256F0 (SdbpReadTagData.c)
 *     SdbGetTagFromTagID @ 0x140825934 (SdbGetTagFromTagID.c)
 *     AslLogCallPrintf @ 0x140825A60 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbReadWORDTag(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int16 v4; // di
  unsigned int v5; // ebx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // eax
  unsigned __int16 v10; // cx
  unsigned __int16 v12; // [rsp+50h] [rbp+18h] BYREF

  v4 = a3;
  v12 = a3;
  v5 = a2;
  if ( (SdbGetTagFromTagID(a1, a2, a3, a4) & 0xF000) == 0x3000 )
  {
    v9 = SdbpReadTagData(a1, v5, &v12, 2LL);
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
      (unsigned int)"SdbReadWORDTag",
      172,
      (unsigned int)"TagID 0x%X, Tag 0x%X not of the expected type");
    return v4;
  }
}
