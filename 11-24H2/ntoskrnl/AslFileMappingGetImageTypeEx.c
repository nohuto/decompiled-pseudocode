/*
 * XREFs of AslFileMappingGetImageTypeEx @ 0x140809C00
 * Callers:
 *     AslFileMappingGetFileKindDetail @ 0x140809A3C (AslFileMappingGetFileKindDetail.c)
 * Callees:
 *     AslFileMappingEnsure @ 0x14080989C (AslFileMappingEnsure.c)
 *     AslpFileGetImageNtHeader @ 0x14080E6E4 (AslpFileGetImageNtHeader.c)
 *     AslpImageRvaToVa @ 0x140810584 (AslpImageRvaToVa.c)
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
 */

__int64 __fastcall AslFileMappingGetImageTypeEx(_WORD *a1, _WORD *a2, int *a3, _DWORD *a4, __int64 a5)
{
  _WORD *v7; // r8
  unsigned int v8; // r14d
  __int16 v9; // dx
  __int16 v10; // r15
  int v11; // ecx
  int v12; // eax
  int ImageNtHeader; // ebx
  const char *v14; // r9
  int v15; // r8d
  __int64 v16; // rax
  __int16 v18; // [rsp+30h] [rbp-68h]
  _QWORD v19[10]; // [rsp+48h] [rbp-50h] BYREF

  v7 = a2;
  v19[0] = 0LL;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  if ( *(_DWORD *)(a5 + 64) == 1 )
  {
    ImageNtHeader = -1073741701;
    goto LABEL_25;
  }
  ImageNtHeader = AslFileMappingEnsure(a5);
  if ( ImageNtHeader < 0 )
  {
    v14 = "AslFileMappingEnsure failed [%x]";
    v15 = 1102;
LABEL_5:
    AslLogCallPrintf(1, (unsigned int)"AslFileMappingGetImageTypeEx", v15, (_DWORD)v14);
LABEL_6:
    v9 = 0;
LABEL_7:
    v11 = 0;
    v12 = 0;
    v7 = a2;
    goto LABEL_25;
  }
  if ( *(_DWORD *)(a5 + 64) != 6 )
  {
    ImageNtHeader = -1073741701;
    goto LABEL_6;
  }
  ImageNtHeader = AslpFileGetImageNtHeader(v19, a5);
  if ( ImageNtHeader < 0 )
  {
    v14 = "AslpFileGetImageNtHeader failed [%x]";
    v15 = 1122;
    goto LABEL_5;
  }
  v9 = *(_WORD *)(v19[0] + 4LL);
  v18 = v9;
  v10 = *(_WORD *)(v19[0] + 24LL);
  if ( *(_DWORD *)(a5 + 80) || !a3 && !a4 )
    goto LABEL_13;
  if ( v10 == 267 )
  {
    v8 = *(_DWORD *)(v19[0] + 232LL);
  }
  else if ( v10 == 523 )
  {
    v8 = *(_DWORD *)(v19[0] + 248LL);
  }
  if ( !v8 )
  {
LABEL_13:
    ImageNtHeader = 0;
    goto LABEL_7;
  }
  v16 = AslpImageRvaToVa(v19[0], a5 + 8, v8);
  if ( v16 )
  {
    v11 = 1;
    v12 = *(_DWORD *)(v16 + 16);
    ImageNtHeader = 0;
  }
  else
  {
    AslLogCallPrintf(
      2,
      (unsigned int)"AslFileMappingGetImageTypeEx",
      1176,
      (unsigned int)"Failed to find the Cor20Header");
    ImageNtHeader = 0;
    v12 = 0;
    v11 = 0;
  }
  v9 = v18;
  v7 = a2;
LABEL_25:
  if ( a1 )
    *a1 = v9;
  if ( v7 )
    *v7 = v10;
  if ( a3 )
    *a3 = v11;
  if ( a4 )
    *a4 = v12;
  return (unsigned int)ImageNtHeader;
}
