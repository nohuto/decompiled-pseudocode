/*
 * XREFs of AslpFileGetVersionAttributes @ 0x1407FE928
 * Callers:
 *     AslFileAllocAndGetAttributes @ 0x1407FC8EC (AslFileAllocAndGetAttributes.c)
 * Callees:
 *     AslpFileGetVersionBlock @ 0x1407FEA10 (AslpFileGetVersionBlock.c)
 *     AslpFileGetVersionBlockImageOnly @ 0x1407FF218 (AslpFileGetVersionBlockImageOnly.c)
 *     AslpFileMakeBinVersionAttributes @ 0x1407FF808 (AslpFileMakeBinVersionAttributes.c)
 *     AslpFileMakeStringVersionAttributes @ 0x1407FF91C (AslpFileMakeStringVersionAttributes.c)
 *     AslLogCallPrintf @ 0x140825A60 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslpFileGetVersionAttributes(__int64 a1, __int64 a2, __int64 a3)
{
  int VersionBlockImageOnly; // eax
  const char *v6; // r9
  int v7; // r8d
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r11
  int StringVersionAttributes; // ebx
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF
  __int64 v14; // [rsp+50h] [rbp+18h] BYREF

  v13 = 0LL;
  v14 = 0LL;
  if ( *(_DWORD *)(a2 + 80) )
    VersionBlockImageOnly = AslpFileGetVersionBlockImageOnly(&v13, &v14, a3, a2);
  else
    VersionBlockImageOnly = AslpFileGetVersionBlock(&v13, &v14, a2);
  if ( VersionBlockImageOnly >= 0 )
  {
    v8 = v14;
  }
  else
  {
    if ( (unsigned int)(VersionBlockImageOnly + 1073741687) > 2 )
    {
      if ( *(_DWORD *)(a2 + 80) )
      {
        v6 = "AslpFileGetVersionBlockImageOnly failed [%x]";
        v7 = 1507;
      }
      else
      {
        v6 = "AslpFileGetVersionBlock failed [%x]";
        v7 = 1510;
      }
      AslLogCallPrintf(3, (unsigned int)"AslpFileGetVersionAttributes", v7, (_DWORD)v6);
    }
    v8 = 0LL;
  }
  AslpFileMakeBinVersionAttributes(a1, v8);
  StringVersionAttributes = AslpFileMakeStringVersionAttributes(v9, v10);
  if ( StringVersionAttributes >= 0 )
    return 0;
  else
    AslLogCallPrintf(
      1,
      (unsigned int)"AslpFileGetVersionAttributes",
      1534,
      (unsigned int)"AslpFileMakeStringVersionAttributes failed [%x]");
  return (unsigned int)StringVersionAttributes;
}
