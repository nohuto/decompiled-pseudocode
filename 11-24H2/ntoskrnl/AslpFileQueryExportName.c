/*
 * XREFs of AslpFileQueryExportName @ 0x14080FFD8
 * Callers:
 *     AslpFileGetExportName @ 0x14080DFE0 (AslpFileGetExportName.c)
 * Callees:
 *     RtlStringCchCopyA @ 0x14044D468 (RtlStringCchCopyA.c)
 *     AslpMemorySpanCheckBounds @ 0x140697B90 (AslpMemorySpanCheckBounds.c)
 *     AslpFileGetImageNtHeader @ 0x14080E6E4 (AslpFileGetImageNtHeader.c)
 *     AslpImageRvaToVa @ 0x140810584 (AslpImageRvaToVa.c)
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
 */

__int64 __fastcall AslpFileQueryExportName(NTSTRSAFE_PSTR pszDest, __int64 a2)
{
  int ImageNtHeader; // ebx
  const char *v5; // r9
  int v6; // r8d
  __int64 v7; // rdi
  __int16 v8; // ax
  unsigned int *v9; // rbx
  unsigned int *v10; // r15
  __int64 v11; // r12
  __int64 v12; // rbx
  __int64 v13; // rsi
  const char *v14; // rbx
  unsigned int *v16; // [rsp+40h] [rbp-58h] BYREF
  __int64 v17; // [rsp+48h] [rbp-50h]
  __int64 v18; // [rsp+50h] [rbp-48h] BYREF
  __int64 v19; // [rsp+58h] [rbp-40h]
  unsigned __int64 v20[2]; // [rsp+60h] [rbp-38h] BYREF
  const char *v21; // [rsp+70h] [rbp-28h] BYREF
  __int64 v22; // [rsp+78h] [rbp-20h]
  __int64 v23; // [rsp+A0h] [rbp+8h] BYREF

  v23 = 0LL;
  v20[0] = *(_QWORD *)(a2 + 32);
  v20[1] = *(_QWORD *)(a2 + 40);
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  *pszDest = 0;
  ImageNtHeader = AslpFileGetImageNtHeader(&v23, a2);
  if ( ImageNtHeader >= 0 )
  {
    v17 = 8LL;
    v7 = v23;
    v8 = *(_WORD *)(v23 + 24);
    if ( v8 == 267 )
    {
      v9 = (unsigned int *)(v23 + 120);
    }
    else
    {
      if ( v8 != 523 )
        return (unsigned int)-1073741637;
      v9 = (unsigned int *)(v23 + 136);
    }
    v16 = v9;
    v10 = v9;
    if ( AslpMemorySpanCheckBounds((unsigned __int64 *)&v16, v20) )
    {
      v11 = a2 + 8;
      v12 = AslpImageRvaToVa(v7, a2 + 8, *v9);
      v18 = v12;
      v13 = v10[1];
      v19 = v13;
      if ( AslpMemorySpanCheckBounds((unsigned __int64 *)&v18, v20) )
      {
        v14 = (const char *)AslpImageRvaToVa(v7, v11, *(unsigned int *)(v12 + 12));
        v21 = v14;
        v22 = 256LL;
        if ( !AslpMemorySpanCheckBounds((unsigned __int64 *)&v21, v20) )
        {
          ImageNtHeader = -1073741701;
          AslLogCallPrintf(
            2,
            (unsigned int)"AslpFileQueryExportName",
            4253,
            (unsigned int)"Export name pointer out of bounds or invalid image format");
          return (unsigned int)ImageNtHeader;
        }
        ImageNtHeader = RtlStringCchCopyA(pszDest, 0x100uLL, v14);
        if ( ImageNtHeader >= 0 )
          return 0;
        v5 = "RtlStringCchCopyA failed [%x]";
        v6 = 4259;
        goto LABEL_3;
      }
      if ( !v13 && !v12 )
        return (unsigned int)-1073741275;
      AslLogCallPrintf(
        2,
        (unsigned int)"AslpFileQueryExportName",
        4239,
        (unsigned int)"Export directory invalid or invalid image format");
    }
    return (unsigned int)-1073741701;
  }
  v5 = "AslpFileGetImageNtHeader failed [%x]";
  v6 = 4213;
LABEL_3:
  AslLogCallPrintf(1, (unsigned int)"AslpFileQueryExportName", v6, (_DWORD)v5);
  return (unsigned int)ImageNtHeader;
}
