/*
 * XREFs of AslpFileQueryExportName @ 0x1800A2DD0
 * Callers:
 *     AslpFileGetExportName @ 0x1800A0CAC (AslpFileGetExportName.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1800717F0 (AslLogCallPrintf.c)
 *     RtlStringCchCopyA @ 0x18009EA8C (RtlStringCchCopyA.c)
 *     AslpFileGetImageNtHeader @ 0x1800A13B0 (AslpFileGetImageNtHeader.c)
 *     AslpImageRvaToVa @ 0x1800A36AC (AslpImageRvaToVa.c)
 *     AslpMemorySpanCheckBounds @ 0x1800A379C (AslpMemorySpanCheckBounds.c)
 */

__int64 __fastcall AslpFileQueryExportName(_BYTE *a1, __int64 a2)
{
  int ImageNtHeader; // ebx
  __int64 v5; // rdi
  unsigned int *v6; // rbx
  unsigned int *v7; // r15
  __int64 v8; // r12
  __int64 v9; // rbx
  __int64 v10; // rsi
  __int64 v11; // rbx
  unsigned int *v13; // [rsp+40h] [rbp-58h] BYREF
  __int64 v14; // [rsp+48h] [rbp-50h]
  __int64 v15; // [rsp+50h] [rbp-48h] BYREF
  __int64 v16; // [rsp+58h] [rbp-40h]
  _QWORD v17[2]; // [rsp+60h] [rbp-38h] BYREF
  __int64 v18; // [rsp+70h] [rbp-28h] BYREF
  __int64 v19; // [rsp+78h] [rbp-20h]
  __int64 v20; // [rsp+A0h] [rbp+8h] BYREF

  v20 = 0LL;
  v17[0] = *(_QWORD *)(a2 + 32);
  v17[1] = *(_QWORD *)(a2 + 40);
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  *a1 = 0;
  ImageNtHeader = AslpFileGetImageNtHeader(&v20, a2);
  if ( ImageNtHeader >= 0 )
  {
    v14 = 8LL;
    v5 = v20;
    if ( *(_WORD *)(v20 + 24) == 267 )
    {
      v6 = (unsigned int *)(v20 + 120);
    }
    else
    {
      if ( *(_WORD *)(v20 + 24) != 523 )
        return (unsigned int)-1073741637;
      v6 = (unsigned int *)(v20 + 136);
    }
    v13 = v6;
    v7 = v6;
    if ( (unsigned __int8)AslpMemorySpanCheckBounds(&v13, v17) )
    {
      v8 = a2 + 8;
      v9 = AslpImageRvaToVa(v5, a2 + 8, *v6);
      v15 = v9;
      v10 = v7[1];
      v16 = v10;
      if ( (unsigned __int8)AslpMemorySpanCheckBounds(&v15, v17) )
      {
        v11 = AslpImageRvaToVa(v5, v8, *(unsigned int *)(v9 + 12));
        v18 = v11;
        v19 = 256LL;
        if ( !(unsigned __int8)AslpMemorySpanCheckBounds(&v18, v17) )
        {
          ImageNtHeader = -1073741701;
          AslLogCallPrintf(2LL);
          return (unsigned int)ImageNtHeader;
        }
        ImageNtHeader = RtlStringCchCopyA(a1, 256LL, v11);
        if ( ImageNtHeader >= 0 )
          return 0;
        goto LABEL_2;
      }
      if ( !v10 && !v9 )
        return (unsigned int)-1073741275;
      AslLogCallPrintf(2LL);
    }
    return (unsigned int)-1073741701;
  }
LABEL_2:
  AslLogCallPrintf(1LL);
  return (unsigned int)ImageNtHeader;
}
