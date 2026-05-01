/*
 * XREFs of AslpFileGetVersionBlockFromResourceRoot @ 0x1800A22D0
 * Callers:
 *     AslpFileGetCrcChecksumBoot @ 0x1800A0A34 (AslpFileGetCrcChecksumBoot.c)
 *     AslpFileGetVersionBlockImageOnly @ 0x1800A253C (AslpFileGetVersionBlockImageOnly.c)
 * Callees:
 *     AslLogCallPrintf @ 0x180071658 (AslLogCallPrintf.c)
 *     AslpFileGetImageNtHeader @ 0x1800A16A0 (AslpFileGetImageNtHeader.c)
 *     AslpImageRvaToVa @ 0x1800A399C (AslpImageRvaToVa.c)
 *     AslpMemoryCheckBounds @ 0x1800A3A14 (AslpMemoryCheckBounds.c)
 */

__int64 __fastcall AslpFileGetVersionBlockFromResourceRoot(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v5; // rsi
  unsigned __int64 v7; // rbx
  unsigned __int64 v11; // r11
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r11
  __int64 v17; // r11
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r11
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r11
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // r11
  unsigned int *v27; // r14
  int ImageNtHeader; // ebx
  __int64 v29; // rcx
  __int64 v30; // rax
  unsigned __int16 *v31; // rcx
  __int64 v32; // [rsp+70h] [rbp+18h] BYREF

  v4 = *(_QWORD *)(a4 + 32);
  v5 = *(_QWORD *)(a4 + 40);
  v7 = *(unsigned __int16 *)(a3 + 14);
  v32 = 0LL;
  v11 = 0LL;
  v12 = a3 + 8LL * *(unsigned __int16 *)(a3 + 12) + 16;
  v13 = 16LL;
  while ( v11 < v7 )
  {
    if ( !(unsigned __int8)AslpMemoryCheckBounds(v12, 8LL, v4, v5) )
      goto LABEL_6;
    v13 = (unsigned int)(v14 + 8);
    if ( *(_WORD *)v12 == (_WORD)v14 + 8 )
      goto LABEL_8;
    v12 += v14;
    v11 = v15 + 1;
  }
  if ( v11 == v7 )
    return 3221225609LL;
LABEL_8:
  v17 = *(unsigned int *)(v12 + 4);
  if ( (int)v17 < 0 )
  {
    LODWORD(v17) = v17 & 0x7FFFFFFF;
    if ( !(unsigned __int8)AslpMemoryCheckBounds(a3 + v17, v13, v4, v5) )
      goto LABEL_6;
    if ( *(_WORD *)(v20 + 14) || *(_WORD *)(v20 + 12) )
    {
      if ( !(unsigned __int8)AslpMemoryCheckBounds(v20 + 16, 8LL, v18, v19) )
        goto LABEL_6;
      v23 = *(unsigned int *)(v12 + 4);
      if ( (int)v23 >= 0 )
        goto LABEL_18;
      LODWORD(v23) = v23 & 0x7FFFFFFF;
      if ( !(unsigned __int8)AslpMemoryCheckBounds(a3 + v23, 16LL, v21, v22) )
        goto LABEL_6;
      if ( *(_WORD *)(v26 + 14) || *(_WORD *)(v26 + 12) )
      {
        if ( !(unsigned __int8)AslpMemoryCheckBounds(v26 + 16, 8LL, v24, v25) )
          goto LABEL_6;
LABEL_18:
        v13 = 16LL;
        goto LABEL_19;
      }
    }
    return 3221225609LL;
  }
LABEL_19:
  v27 = (unsigned int *)(a3 + *(unsigned int *)(v12 + 4));
  if ( !(unsigned __int8)AslpMemoryCheckBounds(v27, v13, v4, v5) )
    goto LABEL_6;
  ImageNtHeader = AslpFileGetImageNtHeader(&v32, a4);
  if ( ImageNtHeader >= 0 )
  {
    if ( (unsigned __int8)AslpMemoryCheckBounds(v32, 8LL, v4, v5) )
    {
      v30 = AslpImageRvaToVa(v29, a4 + 8, *v27);
      if ( (unsigned __int8)AslpMemoryCheckBounds(v30, 38LL, v4, v5) )
      {
        *a1 = v31;
        *a2 = *v31;
        return 0LL;
      }
LABEL_6:
      AslLogCallPrintf(1LL);
      return 3221226030LL;
    }
    ImageNtHeader = -1073741266;
  }
  AslLogCallPrintf(1LL);
  return (unsigned int)ImageNtHeader;
}
