/*
 * XREFs of AslpFileIsArm64XBinary @ 0x1800A29D8
 * Callers:
 *     AslFileAllocAndGetAttributes @ 0x18009FB14 (AslFileAllocAndGetAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x180071658 (AslLogCallPrintf.c)
 *     AslFileMappingGetFileKindDetail @ 0x18009F290 (AslFileMappingGetFileKindDetail.c)
 *     AslpFileGetImageNtHeader @ 0x1800A16A0 (AslpFileGetImageNtHeader.c)
 *     AslpImageRvaToVa @ 0x1800A399C (AslpImageRvaToVa.c)
 */

__int64 __fastcall AslpFileIsArm64XBinary(bool *a1, __int64 a2)
{
  int FileKindDetail; // ebx
  unsigned int v5; // ebx
  unsigned __int64 v6; // rbp
  __int64 v7; // r15
  const char *v8; // r14
  __int64 v9; // rax
  unsigned int v11; // [rsp+60h] [rbp+8h] BYREF
  __int64 v12; // [rsp+70h] [rbp+18h] BYREF

  v11 = 0;
  v12 = 0LL;
  FileKindDetail = -1073741584;
  if ( a1 )
  {
    *a1 = 0;
    FileKindDetail = AslFileMappingGetFileKindDetail((int *)&v11, a2);
    if ( FileKindDetail < 0 )
    {
LABEL_3:
      AslLogCallPrintf(1LL);
      return (unsigned int)FileKindDetail;
    }
    if ( v11 <= 4 )
      return (unsigned int)-2147483614;
    if ( v11 == 8 || v11 == 9 || v11 == 10 || v11 == 15 )
    {
      FileKindDetail = AslpFileGetImageNtHeader(&v12, a2);
      if ( FileKindDetail < 0 )
        goto LABEL_3;
      v5 = *(_DWORD *)(v12 + 216);
      if ( v5 )
      {
        v6 = 0LL;
        v7 = v12;
        v8 = (const char *)(*(unsigned __int16 *)(v12 + 20) + v12 + 24);
        if ( *(_WORD *)(v12 + 6) )
        {
          while ( strncmp(".a64xrm", v8, 8uLL) )
          {
            ++v6;
            v8 += 40;
            if ( v6 >= *(unsigned __int16 *)(v7 + 6) )
              goto LABEL_15;
          }
          *a1 = 1;
        }
        else
        {
LABEL_15:
          v9 = AslpImageRvaToVa(v7, a2 + 8, v5);
          if ( !v9 )
          {
            FileKindDetail = -1073741275;
            AslLogCallPrintf(1LL);
            return (unsigned int)FileKindDetail;
          }
          if ( *(_DWORD *)v9 >= 0xD0u )
            *a1 = *(_QWORD *)(v9 + 200) != 0LL;
        }
      }
    }
    return 0;
  }
  return (unsigned int)FileKindDetail;
}
