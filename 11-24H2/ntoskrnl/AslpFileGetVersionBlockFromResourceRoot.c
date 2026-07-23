/*
 * XREFs of AslpFileGetVersionBlockFromResourceRoot @ 0x14080F25C
 * Callers:
 *     AslpFileGetCrcChecksumBoot @ 0x14080DA84 (AslpFileGetCrcChecksumBoot.c)
 *     AslpFileGetVersionBlockImageOnly @ 0x14080F4C8 (AslpFileGetVersionBlockImageOnly.c)
 * Callees:
 *     AslpMemoryCheckBounds @ 0x140697B18 (AslpMemoryCheckBounds.c)
 *     AslpFileGetImageNtHeader @ 0x14080E6E4 (AslpFileGetImageNtHeader.c)
 *     AslpImageRvaToVa @ 0x140810584 (AslpImageRvaToVa.c)
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
 */

__int64 __fastcall AslpFileGetVersionBlockFromResourceRoot(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rsi
  unsigned __int64 v7; // rbx
  unsigned __int64 v11; // r11
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r11
  int v16; // r8d
  const char *v17; // r9
  __int64 v19; // r11
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // r9
  __int64 v22; // r11
  unsigned __int64 v23; // r8
  unsigned __int64 v24; // r9
  __int64 v25; // r11
  unsigned __int64 v26; // r8
  unsigned __int64 v27; // r9
  __int64 v28; // r11
  unsigned int *v29; // r14
  int ImageNtHeader; // ebx
  __int64 v31; // rcx
  unsigned __int64 v32; // rax
  unsigned __int16 *v33; // rcx
  unsigned __int64 v34; // [rsp+70h] [rbp+18h] BYREF

  v4 = *(_QWORD *)(a4 + 32);
  v5 = *(_QWORD *)(a4 + 40);
  v7 = *(unsigned __int16 *)(a3 + 14);
  v34 = 0LL;
  v11 = 0LL;
  v12 = a3 + 8LL * *(unsigned __int16 *)(a3 + 12) + 16;
  v13 = 16LL;
  while ( v11 < v7 )
  {
    if ( !AslpMemoryCheckBounds(v12, 8uLL, v4, v5) )
    {
      v16 = 2153;
      goto LABEL_7;
    }
    v13 = (unsigned int)(v14 + 8);
    if ( *(_WORD *)v12 == (_WORD)v14 + 8 )
      goto LABEL_10;
    v12 += v14;
    v11 = v15 + 1;
  }
  if ( v11 == v7 )
    return 3221225609LL;
LABEL_10:
  v19 = *(unsigned int *)(v12 + 4);
  if ( (int)v19 >= 0 )
    goto LABEL_25;
  LODWORD(v19) = v19 & 0x7FFFFFFF;
  if ( !AslpMemoryCheckBounds(a3 + v19, v13, v4, v5) )
  {
    v17 = "Found resource directory out of image bounds";
    v16 = 2180;
    goto LABEL_8;
  }
  if ( !*(_WORD *)(v22 + 14) && !*(_WORD *)(v22 + 12) )
    return 3221225609LL;
  if ( !AslpMemoryCheckBounds(v22 + 16, 8uLL, v20, v21) )
  {
    v16 = 2190;
LABEL_7:
    v17 = "Found resource directory entry out of image bounds";
LABEL_8:
    AslLogCallPrintf(1, (unsigned int)"AslpFileGetVersionBlockFromResourceRoot", v16, (_DWORD)v17);
    return 3221226030LL;
  }
  v25 = *(unsigned int *)(v12 + 4);
  if ( (int)v25 >= 0 )
    goto LABEL_24;
  LODWORD(v25) = v25 & 0x7FFFFFFF;
  if ( !AslpMemoryCheckBounds(a3 + v25, 0x10uLL, v23, v24) )
  {
    v17 = "Found resource directory out of image bounds";
    v16 = 2201;
    goto LABEL_8;
  }
  if ( !*(_WORD *)(v28 + 14) && !*(_WORD *)(v28 + 12) )
    return 3221225609LL;
  if ( !AslpMemoryCheckBounds(v28 + 16, 8uLL, v26, v27) )
  {
    v16 = 2211;
    goto LABEL_7;
  }
LABEL_24:
  v13 = 16LL;
LABEL_25:
  v29 = (unsigned int *)(a3 + *(unsigned int *)(v12 + 4));
  if ( !AslpMemoryCheckBounds((unsigned __int64)v29, v13, v4, v5) )
  {
    v17 = "Found resource data entry out of image bounds";
    v16 = 2225;
    goto LABEL_8;
  }
  ImageNtHeader = AslpFileGetImageNtHeader(&v34, a4);
  if ( ImageNtHeader < 0 )
    goto LABEL_33;
  if ( !AslpMemoryCheckBounds(v34, 8uLL, v4, v5) )
  {
    ImageNtHeader = -1073741266;
LABEL_33:
    AslLogCallPrintf(
      1,
      (unsigned int)"AslpFileGetVersionBlockFromResourceRoot",
      2235,
      (unsigned int)"AslpFileGetImageNtHeader failed to get image headers or headers are out of bounds [%x]");
    return (unsigned int)ImageNtHeader;
  }
  v32 = AslpImageRvaToVa(v31, a4 + 8, *v29);
  if ( !AslpMemoryCheckBounds(v32, 0x26uLL, v4, v5) )
  {
    v17 = "Found version block root but it was out of image bounds";
    v16 = 2241;
    goto LABEL_8;
  }
  *a1 = v33;
  *a2 = *v33;
  return 0LL;
}
