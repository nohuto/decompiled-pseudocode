/*
 * XREFs of AslpFileIsArm64XBinary @ 0x1407FF668
 * Callers:
 *     AslFileAllocAndGetAttributes @ 0x1407FC8EC (AslFileAllocAndGetAttributes.c)
 * Callees:
 *     strncmp @ 0x1406B4820 (strncmp.c)
 *     AslFileMappingGetFileKindDetail @ 0x1407F978C (AslFileMappingGetFileKindDetail.c)
 *     AslpFileGetImageNtHeader @ 0x1407FE434 (AslpFileGetImageNtHeader.c)
 *     AslpImageRvaToVa @ 0x1408002D4 (AslpImageRvaToVa.c)
 *     AslLogCallPrintf @ 0x140825A60 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslpFileIsArm64XBinary(bool *a1, __int64 a2)
{
  int FileKindDetail; // ebx
  const char *v5; // r9
  int v6; // r8d
  unsigned int v7; // ebp
  __int64 v8; // r15
  const char *v9; // r14
  unsigned __int64 i; // rbx
  __int64 v11; // rax
  unsigned int v13; // [rsp+60h] [rbp+8h] BYREF
  __int64 v14; // [rsp+70h] [rbp+18h] BYREF

  v13 = 0;
  v14 = 0LL;
  FileKindDetail = -1073741584;
  if ( a1 )
  {
    *a1 = 0;
    FileKindDetail = AslFileMappingGetFileKindDetail((int *)&v13, a2);
    if ( FileKindDetail < 0 )
    {
      v5 = "AslFileMappingGetFileKindDetails failed [%x]";
      v6 = 5475;
LABEL_4:
      AslLogCallPrintf(1, (unsigned int)"AslpFileIsArm64XBinary", v6, (_DWORD)v5);
      return (unsigned int)FileKindDetail;
    }
    if ( v13 <= 4 )
      return (unsigned int)-2147483614;
    if ( v13 == 8 || v13 == 9 || v13 == 10 || v13 == 15 )
    {
      FileKindDetail = AslpFileGetImageNtHeader(&v14, a2);
      if ( FileKindDetail < 0 )
      {
        v5 = "AslpFileGetImageNtHeader failed [%x]";
        v6 = 5507;
        goto LABEL_4;
      }
      v7 = *(_DWORD *)(v14 + 216);
      if ( v7 )
      {
        v8 = v14;
        v9 = (const char *)(*(unsigned __int16 *)(v14 + 20) + v14 + 24);
        for ( i = 0LL; i < *(unsigned __int16 *)(v8 + 6); ++i )
        {
          if ( !strncmp(".a64xrm", v9, 8uLL) )
          {
            *a1 = 1;
            return 0;
          }
          v9 += 40;
        }
        v11 = AslpImageRvaToVa(v8, a2 + 8, v7);
        if ( !v11 )
        {
          FileKindDetail = -1073741275;
          AslLogCallPrintf(
            1,
            (unsigned int)"AslpFileIsArm64XBinary",
            5538,
            (unsigned int)"AslpImageRvaToVa failed to find LoadConfigTableDirectory RVA");
          return (unsigned int)FileKindDetail;
        }
        if ( *(_DWORD *)v11 >= 0xD0u )
          *a1 = *(_QWORD *)(v11 + 200) != 0LL;
      }
    }
    return 0;
  }
  return (unsigned int)FileKindDetail;
}
