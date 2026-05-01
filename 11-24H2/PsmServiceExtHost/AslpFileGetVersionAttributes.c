/*
 * XREFs of AslpFileGetVersionAttributes @ 0x1800A1B9C
 * Callers:
 *     AslFileAllocAndGetAttributes @ 0x18009FB14 (AslFileAllocAndGetAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x180071658 (AslLogCallPrintf.c)
 *     AslpFileGetVersionBlock @ 0x1800A1C84 (AslpFileGetVersionBlock.c)
 *     AslpFileGetVersionBlockImageOnly @ 0x1800A253C (AslpFileGetVersionBlockImageOnly.c)
 *     AslpFileMakeBinVersionAttributes @ 0x1800A2B94 (AslpFileMakeBinVersionAttributes.c)
 *     AslpFileMakeStringVersionAttributes @ 0x1800A2CA8 (AslpFileMakeStringVersionAttributes.c)
 */

__int64 __fastcall AslpFileGetVersionAttributes(__int64 a1, __int64 a2, __int64 a3)
{
  int VersionBlockImageOnly; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r11
  int StringVersionAttributes; // ebx
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF
  __int64 v11; // [rsp+50h] [rbp+18h] BYREF

  v10 = 0LL;
  v11 = 0LL;
  if ( *(_DWORD *)(a2 + 72) )
    VersionBlockImageOnly = AslpFileGetVersionBlockImageOnly(&v10, &v11, a3, a2);
  else
    VersionBlockImageOnly = AslpFileGetVersionBlock(&v10, &v11, a2);
  if ( VersionBlockImageOnly >= 0 )
  {
    v5 = v11;
  }
  else
  {
    if ( (unsigned int)(VersionBlockImageOnly + 1073741687) > 2 )
      AslLogCallPrintf(3LL);
    v5 = 0LL;
  }
  AslpFileMakeBinVersionAttributes(a1, v5);
  StringVersionAttributes = AslpFileMakeStringVersionAttributes(v6, v7);
  if ( StringVersionAttributes >= 0 )
    return 0;
  else
    AslLogCallPrintf(1LL);
  return (unsigned int)StringVersionAttributes;
}
