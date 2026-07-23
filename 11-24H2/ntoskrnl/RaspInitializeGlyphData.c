/*
 * XREFs of RaspInitializeGlyphData @ 0x14045DA88
 * Callers:
 *     RaspLoadGlyphData @ 0x14069CC10 (RaspLoadGlyphData.c)
 * Callees:
 *     FioFwReadBytesAtOffset @ 0x14045DF18 (FioFwReadBytesAtOffset.c)
 *     RaspAllocateMemory @ 0x14045EBE4 (RaspAllocateMemory.c)
 *     RaspFreeMemory @ 0x14045EC60 (RaspFreeMemory.c)
 *     FioFwReadUshortAtOffset @ 0x1404F6034 (FioFwReadUshortAtOffset.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall RaspInitializeGlyphData(__int64 a1, int a2, __int64 *a3, __int64 a4)
{
  __int16 v4; // si
  unsigned __int16 v8; // r10
  __int16 v9; // r12
  int v10; // ecx
  __int64 v11; // r14
  unsigned int v12; // eax
  __int64 v13; // rdx
  unsigned int v14; // r8d
  __int64 v15; // rbx
  __int64 v16; // r9
  __int16 v17; // r15
  __int64 v18; // rdx
  __int16 v19; // di
  __int64 v20; // r9
  __int16 v21; // r13
  __int64 Memory; // rax
  __int64 v24; // rcx
  __int64 v25; // rdx
  unsigned __int16 v26; // r12
  size_t v27; // rbp
  char *v28; // rax
  char *v29; // rsi
  char *v30; // rbp
  char *v31; // rsi
  unsigned int v32; // edi
  unsigned int v33; // edi
  char *v34; // rsi
  __int64 v35; // rbx
  unsigned int v36; // edi
  __int64 v37; // rax
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // r12
  __int64 v41; // r11
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // r10
  __int64 v45; // rdx
  __int64 v46; // rdx
  char *v47; // rsi
  unsigned int v48; // edi
  __int16 v49; // r15
  char *v50; // rbx
  char v51; // dl
  __int16 v52; // si
  __int64 v53; // rcx
  __int64 v54; // r12
  _DWORD *v55; // rbx
  char v56; // cl
  unsigned __int16 v57; // [rsp+20h] [rbp-68h]
  signed int v58; // [rsp+24h] [rbp-64h]
  __int16 v59; // [rsp+28h] [rbp-60h]
  __int64 v60; // [rsp+30h] [rbp-58h]
  __int64 v62; // [rsp+90h] [rbp+8h]

  v4 = 0;
  v59 = 0;
  v57 = 0;
  v8 = 0;
  v9 = 0;
  if ( !a1 )
    return 3221225473LL;
  v10 = *(_DWORD *)(a1 + 60);
  if ( !v10 )
    return 3221225473LL;
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL);
  v12 = v10 + a2;
  v13 = (unsigned int)(v10 + a2 + 2);
  v14 = *(_DWORD *)(v11 + 8);
  if ( (unsigned int)v13 > v14 )
    LOWORD(v15) = 0;
  else
    LOWORD(v15) = __ROR2__(*(_WORD *)(v12 + *(_QWORD *)v11), 8);
  v16 = (unsigned int)(v13 + 2);
  if ( (unsigned int)v16 > v14 )
    v17 = 0;
  else
    v17 = __ROR2__(*(_WORD *)(v13 + *(_QWORD *)v11), 8);
  v18 = (unsigned int)(v13 + 4);
  if ( (unsigned int)v18 > v14 )
    v19 = 0;
  else
    v19 = __ROR2__(*(_WORD *)(v16 + *(_QWORD *)v11), 8);
  v20 = (unsigned int)(v16 + 4);
  if ( (unsigned int)v20 > v14 )
    v21 = 0;
  else
    v21 = __ROR2__(*(_WORD *)(v18 + *(_QWORD *)v11), 8);
  if ( (int)v18 + 4 <= v14 )
  {
    v4 = __ROR2__(*(_WORD *)(v20 + *(_QWORD *)v11), 8);
    v59 = v4;
  }
  if ( (v15 & 0x8000u) != 0LL )
    return 3221225485LL;
  if ( !(_WORD)v15 )
  {
    Memory = RaspAllocateMemory(66LL, a4);
    if ( Memory )
    {
      *(_DWORD *)(Memory + 6) = v19;
      *(_DWORD *)(Memory + 10) = v21;
      *(_DWORD *)(Memory + 14) = v4;
      *(_WORD *)Memory = 0;
      *(_DWORD *)(Memory + 2) = v17;
      *(_QWORD *)(Memory + 18) = (unsigned int)v17;
      *a3 = Memory;
      return 0LL;
    }
    return 3221225626LL;
  }
  v24 = (unsigned int)(v20 + 2 * (__int16)v15);
  v25 = (unsigned int)(v24 + 2);
  if ( (unsigned int)v25 <= v14 )
    v9 = __ROR2__(*(_WORD *)(v24 + *(_QWORD *)v11), 8);
  v26 = v9 + 1;
  if ( (int)v24 + 4 <= v14 )
  {
    v8 = __ROR2__(*(_WORD *)(v25 + *(_QWORD *)v11), 8);
    v57 = v8;
  }
  v58 = v26;
  v60 = 4LL * v26 + 8;
  v27 = v26 + 66LL + v8 + 2 * (v60 + (__int16)v15);
  v28 = (char *)RaspAllocateMemory(v27, a4);
  v29 = v28;
  if ( !v28 )
    return 3221225626LL;
  memset_0(v28, 0, v27);
  v30 = v29;
  *(_DWORD *)(v29 + 6) = v19;
  *(_DWORD *)(v29 + 10) = v21;
  *(_DWORD *)(v29 + 14) = v59;
  *(_WORD *)v29 = v15;
  *(_DWORD *)(v29 + 2) = v17;
  *(_DWORD *)(v29 + 18) = v17;
  *((_WORD *)v29 + 11) = v57;
  *((_WORD *)v29 + 12) = v26;
  v31 = v29 + 66;
  v32 = *(_DWORD *)(a1 + 60) + a2 + 10;
  *(_QWORD *)(v30 + 26) = v31;
  v15 = (unsigned __int16)v15;
  do
  {
    FioFwReadUshortAtOffset(v11, v32, v31);
    v32 += 2;
    v31 += 2;
    --v15;
  }
  while ( v15 );
  v33 = v32 + 2;
  *(_QWORD *)(v30 + 34) = v31;
  FioFwReadBytesAtOffset(v11, v33, v57, v31);
  v34 = &v31[v57];
  v35 = v26;
  v36 = v57 + v33;
  *(_QWORD *)(v30 + 42) = v34;
  v37 = RaspAllocateMemory(v26, a4);
  v62 = v37;
  v40 = v37;
  if ( !v37 )
  {
    RaspFreeMemory(v30, a4, v38, v39);
    return 3221225626LL;
  }
  FioFwReadBytesAtOffset(v11, v36, (unsigned int)v58, v37);
  LODWORD(v41) = 0;
  v42 = 0LL;
  v43 = 0LL;
  if ( v58 )
  {
    do
    {
      v44 = (unsigned int)v42;
      v45 = (__int16)v43;
      LOWORD(v43) = v43 + 1;
      *(_BYTE *)(v45 + *(_QWORD *)(v30 + 42)) = *(_BYTE *)((unsigned int)v42 + v40);
      if ( (*(_BYTE *)((unsigned int)v42 + v40) & 8) != 0 )
      {
        v42 = (unsigned int)(v42 + 1);
        if ( *(_BYTE *)(v42 + v40) )
        {
          v41 = *(unsigned __int8 *)(v42 + v40);
          do
          {
            v46 = (__int16)v43;
            LOWORD(v43) = v43 + 1;
            *(_BYTE *)(v46 + *(_QWORD *)(v30 + 42)) = *(_BYTE *)(v44 + v40);
            --v41;
          }
          while ( v41 );
        }
      }
      v42 = (unsigned int)(v42 + 1);
    }
    while ( (__int16)v43 < v58 );
  }
  v47 = &v34[v35];
  v48 = v42 + v36;
  *(_QWORD *)(v30 + 50) = v47;
  v49 = v41;
  if ( v58 )
  {
    while ( 1 )
    {
      v50 = &v47[4 * v49];
      *(_DWORD *)v50 = v41;
      v51 = *(_BYTE *)(v49 + *(_QWORD *)(v30 + 42));
      if ( (v51 & 2) != 0 )
        break;
      if ( (v51 & 0x10) == 0 )
      {
        FioFwReadUshortAtOffset(v11, v48, &v47[4 * v49]);
        v48 += 2;
LABEL_45:
        LODWORD(v41) = 0;
      }
      if ( ++v49 >= v58 )
      {
        v40 = v62;
        goto LABEL_48;
      }
    }
    FioFwReadBytesAtOffset(v11, v48++, 1LL, &v47[4 * v49]);
    if ( (*(_BYTE *)(v49 + *(_QWORD *)(v30 + 42)) & 0x10) == 0 )
      *(_DWORD *)v50 = -*(_DWORD *)v50;
    goto LABEL_45;
  }
LABEL_48:
  v52 = v41;
  v53 = *(_QWORD *)(v30 + 50) + v60;
  *(_QWORD *)(v30 + 58) = v53;
  if ( !v58 )
    goto LABEL_58;
  v54 = v53;
  do
  {
    v55 = (_DWORD *)(v54 + 4LL * v52);
    *v55 = v41;
    v56 = *(_BYTE *)(v52 + *(_QWORD *)(v30 + 42));
    if ( (v56 & 4) != 0 )
    {
      FioFwReadBytesAtOffset(v11, v48++, 1LL, v54 + 4LL * v52);
      if ( (*(_BYTE *)(v52 + *(_QWORD *)(v30 + 42)) & 0x20) == 0 )
        *v55 = -*v55;
    }
    else
    {
      if ( (v56 & 0x20) != 0 )
        goto LABEL_56;
      FioFwReadUshortAtOffset(v11, v48, v54 + 4LL * v52);
      v48 += 2;
    }
    LODWORD(v41) = 0;
LABEL_56:
    ++v52;
  }
  while ( v52 < v58 );
  v40 = v62;
LABEL_58:
  *a3 = (__int64)v30;
  RaspFreeMemory(v40, a4, v42, v43);
  return 0LL;
}
