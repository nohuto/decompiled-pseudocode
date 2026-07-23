/*
 * XREFs of RtlpCreateSplitBlock @ 0x180058720
 * Callers:
 *     RtlpReAllocateHeap @ 0x18002A860 (RtlpReAllocateHeap.c)
 *     RtlpGrowBlockInPlace @ 0x180059530 (RtlpGrowBlockInPlace.c)
 * Callees:
 *     RtlpHeapAddListEntry @ 0x180038080 (RtlpHeapAddListEntry.c)
 *     RtlpLogHeapFailure @ 0x180052E50 (RtlpLogHeapFailure.c)
 *     RtlpAnalyzeHeapFailure @ 0x180058210 (RtlpAnalyzeHeapFailure.c)
 *     DbgPrint @ 0x1800586D0 (DbgPrint.c)
 *     RtlpInsertFreeBlock @ 0x18005A0B0 (RtlpInsertFreeBlock.c)
 *     RtlpBreakPointHeap @ 0x18005A8C0 (RtlpBreakPointHeap.c)
 *     RtlpCommitBlock @ 0x1800966E0 (RtlpCommitBlock.c)
 *     RtlpDeCommitFreeBlock @ 0x180096B50 (RtlpDeCommitFreeBlock.c)
 *     RtlpFindEntry @ 0x1800BD830 (RtlpFindEntry.c)
 *     RtlCompareMemoryUlong @ 0x180167520 (RtlCompareMemoryUlong.c)
 */

char __fastcall RtlpCreateSplitBlock(__int64 a1, __int64 a2, __int64 a3, char a4, char a5, __int16 a6, __int64 a7)
{
  int v7; // r12d
  __int64 v9; // rsi
  __int64 v10; // rcx
  unsigned __int64 v11; // rdi
  __int64 v12; // rbp
  unsigned __int64 v13; // rdi
  int *v14; // r14
  unsigned __int64 v15; // r14
  _QWORD **v16; // r8
  __int64 *v17; // rcx
  unsigned __int64 v18; // rax
  int v19; // r13d
  int v20; // eax
  _DWORD *v21; // rsi
  __int64 *v22; // r12
  _QWORD *v23; // rdi
  __int64 v24; // r15
  _QWORD *v25; // rax
  int v26; // edx
  __int16 v27; // bp
  __int64 v28; // r8
  int v29; // edx
  __int16 v30; // bp
  __int64 v31; // rax
  __int64 v32; // rdi
  unsigned int v33; // edx
  __int64 v34; // r9
  int v35; // ecx
  unsigned int v36; // ecx
  unsigned int v37; // eax
  int v38; // ecx
  int v39; // eax
  __int64 *v40; // rax
  _QWORD *v41; // r15
  __int64 *v42; // rdi
  unsigned __int64 v43; // rcx
  unsigned __int64 v44; // rax
  int v45; // edx
  unsigned int v46; // r14d
  __int64 v47; // rax
  __int64 v48; // r12
  __int64 v49; // rbp
  int v51; // ecx
  __int16 v52; // r13
  _QWORD *i; // r15
  int v54; // edx
  __int16 v55; // bp
  int v56; // edx
  __int64 *v57; // r9
  __int64 *v58; // r8
  __int64 v59; // r13
  __int64 v60; // rax
  __int64 *v61; // r15
  unsigned __int64 v62; // rax
  unsigned __int64 v63; // rcx
  unsigned int v64; // r10d
  int v65; // edx
  unsigned int v66; // r11d
  __int64 v67; // rax
  __int64 *v68; // rax
  __int64 *v69; // rax
  __int64 *v70; // rdx
  int v71; // r8d
  _DWORD *v72; // rdx
  char v73; // al
  SIZE_T v74; // r14
  SIZE_T v75; // r12
  _DWORD *v76; // r8
  unsigned __int64 v77; // rdx
  _QWORD **v78; // rdi
  _QWORD *v79; // r8
  __int64 *v80; // rax
  _QWORD *v81; // r15
  __int64 *v82; // rdi
  unsigned __int64 v83; // rcx
  unsigned __int64 v84; // rax
  int v85; // edx
  unsigned int v86; // r14d
  __int64 v87; // rax
  __int64 v88; // r12
  __int64 v89; // rbp
  int v90; // ecx
  int v91; // eax
  __int64 v92; // r9
  int v93; // edx
  __int16 v94; // r13
  unsigned __int64 v95; // rbp
  _QWORD **v96; // rdi
  _QWORD *v97; // r8
  int v98; // ecx
  int v99; // eax
  __int64 *v100; // rax
  _QWORD *v101; // rdi
  __int64 v102; // rdx
  unsigned __int64 v103; // rcx
  unsigned __int64 v104; // r8
  _DWORD *v105; // r8
  unsigned __int64 v106; // rdx
  _QWORD **v107; // rdi
  _QWORD *Entry; // r8
  __int64 *v109; // rax
  _QWORD *v110; // rdi
  unsigned __int64 v111; // rax
  int v112; // ecx
  int v113; // eax
  __int64 **v114; // [rsp+30h] [rbp-68h]
  __int64 *v115; // [rsp+38h] [rbp-60h]
  __int64 *v116; // [rsp+40h] [rbp-58h]
  __int64 v117; // [rsp+A0h] [rbp+8h]
  unsigned __int16 v118; // [rsp+A8h] [rbp+10h]
  unsigned __int16 v120; // [rsp+B8h] [rbp+20h]
  __int16 v121; // [rsp+B8h] [rbp+20h]
  unsigned __int16 v122; // [rsp+B8h] [rbp+20h]
  int v123; // [rsp+C8h] [rbp+30h]

  v7 = 0;
  *(_BYTE *)(a3 + 15) = 0;
  *(_BYTE *)(a3 + 10) = a4;
  v9 = a3;
  *(_WORD *)(a3 + 12) = *(_WORD *)(a1 + 140) ^ a6;
  v10 = *(_QWORD *)(a2 + 40);
  if ( v10 == a2 )
  {
    LOBYTE(v11) = 0;
  }
  else
  {
    v11 = ((unsigned __int64)(a3 - a2) >> 16) + 1;
    if ( v11 >= 0xFE )
      RtlpLogHeapFailure(3, v10, a3, a2, 0LL, 0LL);
  }
  v12 = a7;
  *(_BYTE *)(v9 + 14) = v11;
  v13 = v9 + 16 * a7;
  *(_BYTE *)(v9 + 11) = 0;
  *(_WORD *)(v9 + 8) = a7;
  v14 = (int *)(v13 + 8);
  while ( ((*(_BYTE *)(v13 + 10) ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 20))) & 1) == 0 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      v56 = *v14 ^ *(_DWORD *)(a1 + 136);
      *v14 = v56;
      if ( HIBYTE(v56) != ((unsigned __int8)v56 ^ (unsigned __int8)(BYTE2(v56) ^ BYTE1(v56))) )
        RtlpAnalyzeHeapFailure(a1, v13);
    }
    v57 = *(__int64 **)(v13 + 24);
    v58 = (__int64 *)(v13 + 16);
    v59 = *(_QWORD *)(v13 + 16);
    v115 = v57;
    v60 = *v57;
    if ( *v57 != v13 + 16 || v60 != *(_QWORD *)(v59 + 8) )
    {
      RtlpLogHeapFailure(13, a1, (__int64)v58, *(_QWORD *)(v59 + 8), v60, 0LL);
      v14 = (int *)(v13 + 8);
      goto LABEL_124;
    }
    *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)v14;
    v61 = *(__int64 **)(a1 + 312);
    if ( v61 )
    {
      v62 = *(unsigned __int16 *)v14;
      v118 = *(_WORD *)v14;
      while ( 1 )
      {
        v63 = *((unsigned int *)v61 + 2);
        if ( v62 < v63 )
        {
          v64 = v62;
          v65 = v63 - 1;
          goto LABEL_98;
        }
        if ( !*v61 )
          break;
        v61 = (__int64 *)*v61;
        v62 = *(unsigned __int16 *)v14;
      }
      v65 = v63 - 1;
      v64 = v63 - 1;
LABEL_98:
      v12 = a7;
      v66 = v64 - *((_DWORD *)v61 + 6);
      v123 = v66;
      v67 = 2 * v66;
      if ( !*((_DWORD *)v61 + 3) )
        v67 = v66;
      v117 = 8 * v67;
      v114 = (__int64 **)(8 * v67 + v61[6]);
      v68 = *v114;
      --*((_DWORD *)v61 + 4);
      if ( v64 == v65 )
        --*((_DWORD *)v61 + 5);
      if ( v68 == v58 )
      {
        v69 = (__int64 *)v61[4];
        if ( !*v61 )
          LODWORD(v63) = v65;
        v70 = (__int64 *)*v58;
        v116 = (__int64 *)*v58;
        if ( v64 >= (unsigned int)v63 )
        {
          if ( v70 == v69 )
          {
            *v114 = 0LL;
            v72 = (_DWORD *)(v61[5] + 4 * ((unsigned __int64)v66 >> 5));
            goto LABEL_112;
          }
          *v114 = v70;
        }
        else
        {
          if ( v70 == v69 )
            goto LABEL_111;
          v71 = *((_DWORD *)v70 - 2);
          if ( *(_DWORD *)(a1 + 124) )
          {
            v71 ^= *(_DWORD *)(a1 + 136);
            v121 = v71;
            if ( HIBYTE(v71) != ((unsigned __int8)v71 ^ (unsigned __int8)(BYTE1(v71) ^ BYTE2(v71))) )
            {
              RtlpLogHeapFailure(3, a1, (__int64)(v70 - 2), 0LL, 0LL, 0LL);
              LOWORD(v71) = v121;
              v57 = v115;
              v70 = v116;
              v66 = v123;
            }
          }
          if ( v118 != (unsigned __int16)v71 )
          {
LABEL_111:
            *(_QWORD *)(v117 + v61[6]) = 0LL;
            v72 = (_DWORD *)(v61[5] + 4 * ((unsigned __int64)v66 >> 5));
LABEL_112:
            *v72 &= ~(1 << (v66 & 0x1F));
            goto LABEL_113;
          }
          *(_QWORD *)(v117 + v61[6]) = v70;
        }
      }
    }
LABEL_113:
    *v57 = v59;
    *(_QWORD *)(v59 + 8) = v57;
    if ( (*(_BYTE *)(v13 + 10) & 8) == 0 || (unsigned __int8)RtlpCommitBlock(a1) )
    {
      if ( a5 )
      {
        v73 = *(_BYTE *)(v13 + 10);
        if ( (v73 & 4) != 0 )
        {
          v74 = 16LL * *(unsigned __int16 *)(v13 + 8) - 32;
          if ( (v73 & 2) != 0 && v74 > 4 )
            v74 = 16LL * *(unsigned __int16 *)(v13 + 8) - 36;
          v75 = RtlCompareMemoryUlong((PVOID)(v13 + 32), v74, 0xFEEEFEEE);
          if ( v75 != v74 )
          {
            if ( NtCurrentPeb()->Ldr )
              DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
            else
              DbgPrint("HEAP: ");
            DbgPrint(
              "HEAP: Free Heap block %p modified at %p after it was freed\n",
              (const void *)v13,
              (const void *)(v75 + v13 + 32));
            RtlpBreakPointHeap();
          }
        }
      }
      *(_BYTE *)(v9 + 10) = *(_BYTE *)(v13 + 10);
      v95 = *(unsigned __int16 *)(v13 + 8) + v12;
      if ( v95 > 0xFF00 )
      {
        RtlpInsertFreeBlock(a1, v9);
        return 1;
      }
      *(_WORD *)(v9 + 8) = v95;
      *(_WORD *)(v9 + 16 * v95 + 12) = *(_WORD *)(a1 + 140) ^ v95;
      *(_BYTE *)(v9 + 15) = 0;
      if ( a5 )
      {
        *(_BYTE *)(v9 + 10) &= 0xF0u;
        if ( (*(_BYTE *)(a1 + 112) & 0x40) != 0 )
        {
          v105 = (_DWORD *)(v9 + 32);
          v106 = (16 * (unsigned __int64)(unsigned __int16)v95 - 32) >> 2;
          if ( v106 )
          {
            if ( ((unsigned __int8)v105 & 4) != 0 )
            {
              --v106;
              *v105 = -17891602;
              v105 = (_DWORD *)(v9 + 36);
            }
            memset64(v105, 0xFEEEFEEEFEEEFEEEuLL, v106 >> 1);
            if ( (v106 & 1) != 0 )
              v105[v106 - 1] = -17891602;
          }
          *(_BYTE *)(v9 + 10) |= 4u;
        }
        v107 = (_QWORD **)(a1 + 336);
        if ( *(_QWORD *)(a1 + 312) )
          Entry = (_QWORD *)RtlpFindEntry(a1, (unsigned __int16)v95);
        else
          Entry = *v107;
        if ( v107 != Entry )
        {
          v112 = *(_DWORD *)(a1 + 124);
          do
          {
            if ( v112 )
            {
              v113 = *((_DWORD *)Entry - 2);
              v112 = *(_DWORD *)(a1 + 124);
              if ( (v112 & v113) != 0 )
                LOWORD(v113) = *(_WORD *)(a1 + 136) ^ v113;
            }
            else
            {
              LOWORD(v113) = *((_WORD *)Entry - 4);
            }
            if ( (unsigned __int16)v95 <= (unsigned __int64)(unsigned __int16)v113 )
              break;
            Entry = (_QWORD *)*Entry;
          }
          while ( v107 != Entry );
        }
        v109 = (__int64 *)Entry[1];
        v110 = (_QWORD *)(v9 + 16);
        if ( (_QWORD *)*v109 == Entry )
        {
          *v110 = Entry;
          *(_QWORD *)(v9 + 24) = v109;
          *v109 = (__int64)v110;
          Entry[1] = v110;
        }
        else
        {
          RtlpLogHeapFailure(13, 0LL, (__int64)Entry, 0LL, *v109, 0LL);
        }
        *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(v9 + 8);
        v102 = *(_QWORD *)(a1 + 312);
        if ( !v102 )
          goto LABEL_55;
        v103 = *(unsigned __int16 *)(v9 + 8);
        while ( 1 )
        {
          v111 = *(unsigned int *)(v102 + 8);
          if ( v103 < v111 )
            goto LABEL_195;
          if ( !*(_QWORD *)v102 )
            break;
          v102 = *(_QWORD *)v102;
        }
        LODWORD(v103) = v111 - 1;
      }
      else
      {
        *(_BYTE *)(v9 + 10) = 0;
        v96 = (_QWORD **)(a1 + 336);
        if ( *(_QWORD *)(a1 + 312) )
          v97 = (_QWORD *)RtlpFindEntry(a1, (unsigned __int16)v95);
        else
          v97 = *v96;
        if ( v96 != v97 )
        {
          v98 = *(_DWORD *)(a1 + 124);
          do
          {
            if ( v98 )
            {
              v99 = *((_DWORD *)v97 - 2);
              v98 = *(_DWORD *)(a1 + 124);
              if ( (v98 & v99) != 0 )
                LOWORD(v99) = *(_WORD *)(a1 + 136) ^ v99;
            }
            else
            {
              LOWORD(v99) = *((_WORD *)v97 - 4);
            }
            if ( (unsigned __int16)v95 <= (unsigned __int64)(unsigned __int16)v99 )
              break;
            v97 = (_QWORD *)*v97;
          }
          while ( v96 != v97 );
        }
        v100 = (__int64 *)v97[1];
        v101 = (_QWORD *)(v9 + 16);
        if ( (_QWORD *)*v100 == v97 )
        {
          *v101 = v97;
          *(_QWORD *)(v9 + 24) = v100;
          *v100 = (__int64)v101;
          v97[1] = v101;
        }
        else
        {
          RtlpLogHeapFailure(13, 0LL, (__int64)v97, 0LL, *v100, 0LL);
        }
        *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(v9 + 8);
        v102 = *(_QWORD *)(a1 + 312);
        if ( !v102 )
          goto LABEL_55;
        v103 = *(unsigned __int16 *)(v9 + 8);
        while ( 1 )
        {
          v104 = *(unsigned int *)(v102 + 8);
          if ( v103 < v104 )
            goto LABEL_195;
          if ( !*(_QWORD *)v102 )
            break;
          v102 = *(_QWORD *)v102;
        }
        LODWORD(v103) = v104 - 1;
      }
LABEL_195:
      RtlpHeapAddListEntry(a1, v102, 1, v9 + 16, v103, *(unsigned __int16 *)(v9 + 8));
      goto LABEL_55;
    }
    LOBYTE(v92) = 1;
    RtlpDeCommitFreeBlock(a1, v13, *(unsigned __int16 *)(v13 + 8), v92);
LABEL_124:
    if ( v7 )
      return 0;
    v7 = 1;
  }
  v15 = (unsigned __int16)v12;
  *(_WORD *)(v13 + 12) = *(_WORD *)(a1 + 140) ^ v12;
  *(_BYTE *)(v9 + 15) = 0;
  if ( a5 )
  {
    *(_BYTE *)(v9 + 10) &= 0xF0u;
    if ( (*(_BYTE *)(a1 + 112) & 0x40) != 0 )
    {
      v76 = (_DWORD *)(v9 + 32);
      v77 = (16 * (unsigned __int64)(unsigned __int16)v12 - 32) >> 2;
      if ( v77 )
      {
        if ( ((unsigned __int8)v76 & 4) != 0 )
        {
          --v77;
          *v76 = -17891602;
          v76 = (_DWORD *)(v9 + 36);
        }
        memset64(v76, 0xFEEEFEEEFEEEFEEEuLL, v77 >> 1);
        if ( (v77 & 1) != 0 )
          v76[v77 - 1] = -17891602;
      }
      *(_BYTE *)(v9 + 10) |= 4u;
    }
    v78 = (_QWORD **)(a1 + 336);
    if ( *(_QWORD *)(a1 + 312) )
      v79 = (_QWORD *)RtlpFindEntry(a1, (unsigned __int16)v12);
    else
      v79 = *v78;
    if ( v78 != v79 )
    {
      v90 = *(_DWORD *)(a1 + 124);
      do
      {
        if ( v90 )
        {
          v91 = *((_DWORD *)v79 - 2);
          v90 = *(_DWORD *)(a1 + 124);
          if ( (v90 & v91) != 0 )
            LOWORD(v91) = *(_WORD *)(a1 + 136) ^ v91;
        }
        else
        {
          LOWORD(v91) = *((_WORD *)v79 - 4);
        }
        if ( (unsigned __int16)v12 <= (unsigned __int64)(unsigned __int16)v91 )
          break;
        v79 = (_QWORD *)*v79;
      }
      while ( v78 != v79 );
    }
    v80 = (__int64 *)v79[1];
    v81 = (_QWORD *)(v9 + 16);
    if ( (_QWORD *)*v80 == v79 )
    {
      *v81 = v79;
      *(_QWORD *)(v9 + 24) = v80;
      *v80 = (__int64)v81;
      v79[1] = v81;
    }
    else
    {
      RtlpLogHeapFailure(13, 0LL, (__int64)v79, 0LL, *v80, 0LL);
    }
    *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(v9 + 8);
    v82 = *(__int64 **)(a1 + 312);
    if ( !v82 )
      goto LABEL_55;
    v83 = *(unsigned __int16 *)(v9 + 8);
    while ( 1 )
    {
      v84 = *((unsigned int *)v82 + 2);
      if ( v83 < v84 )
        break;
      if ( !*v82 )
      {
        v85 = v84 - 1;
        LODWORD(v83) = v84 - 1;
        goto LABEL_150;
      }
      v82 = (__int64 *)*v82;
    }
    v85 = v84 - 1;
LABEL_150:
    v86 = v83 - *((_DWORD *)v82 + 6);
    v122 = *(_WORD *)(v9 + 8);
    v87 = v82[6];
    v88 = 2 * v86;
    if ( !*((_DWORD *)v82 + 3) )
      v88 = v86;
    ++*((_DWORD *)v82 + 4);
    v89 = *(_QWORD *)(v87 + 8 * v88);
    if ( (_DWORD)v83 == v85 )
      ++*((_DWORD *)v82 + 5);
    if ( !v89 )
      goto LABEL_155;
    v93 = *(_DWORD *)(v89 - 8);
    if ( *(_DWORD *)(a1 + 124) )
    {
      v93 ^= *(_DWORD *)(a1 + 136);
      v94 = v93;
      if ( HIBYTE(v93) != ((unsigned __int8)v93 ^ (unsigned __int8)(BYTE1(v93) ^ BYTE2(v93))) )
      {
        RtlpLogHeapFailure(3, a1, v89 - 16, 0LL, 0LL, 0LL);
        LOWORD(v93) = v94;
      }
    }
    if ( v122 - (unsigned __int16)v93 <= 0 )
    {
LABEL_155:
      *(_QWORD *)(v82[6] + 8 * v88) = v81;
      if ( !v89 )
        *(_DWORD *)(v82[5] + 4 * ((unsigned __int64)v86 >> 5)) |= 1 << (v86 & 0x1F);
    }
    goto LABEL_55;
  }
  *(_BYTE *)(v9 + 10) = 0;
  v16 = (_QWORD **)(a1 + 336);
  v17 = *(__int64 **)(a1 + 312);
  if ( !v17 )
  {
    v23 = *v16;
    goto LABEL_33;
  }
  while ( 1 )
  {
    v18 = *((unsigned int *)v17 + 2);
    if ( (unsigned __int16)v12 < v18 )
    {
      v19 = (unsigned __int16)v12;
      goto LABEL_12;
    }
    if ( !*v17 )
      break;
    v17 = (__int64 *)*v17;
  }
  v19 = v18 - 1;
LABEL_12:
  v20 = *((_DWORD *)v17 + 6);
  v21 = v17 + 3;
  v22 = v17;
  while ( 2 )
  {
    v23 = (_QWORD *)v22[4];
    v24 = (unsigned int)(v19 - v20);
    v25 = (_QWORD *)v23[1];
    if ( v23 != v25 )
    {
      v26 = *((_DWORD *)v25 - 2);
      if ( *(_DWORD *)(a1 + 124) )
      {
        v26 ^= *(_DWORD *)(a1 + 136);
        v27 = v26;
        if ( HIBYTE(v26) != ((unsigned __int8)v26 ^ (unsigned __int8)(BYTE1(v26) ^ BYTE2(v26))) )
        {
          RtlpLogHeapFailure(3, a1, (__int64)(v25 - 2), 0LL, 0LL, 0LL);
          LOWORD(v26) = v27;
        }
      }
      if ( (int)(v15 - (unsigned __int16)v26) <= 0 )
      {
        v28 = *v23 - 16LL;
        v29 = *(_DWORD *)(v28 + 8);
        if ( *(_DWORD *)(a1 + 124) )
        {
          v29 ^= *(_DWORD *)(a1 + 136);
          v30 = v29;
          if ( HIBYTE(v29) != ((unsigned __int8)v29 ^ (unsigned __int8)(BYTE1(v29) ^ BYTE2(v29))) )
          {
            RtlpLogHeapFailure(3, a1, v28, 0LL, 0LL, 0LL);
            LOWORD(v29) = v30;
          }
        }
        if ( (int)(v15 - (unsigned __int16)v29) <= 0 )
        {
          v23 = (_QWORD *)*v23;
          break;
        }
        if ( !*v22 && v19 == *((_DWORD *)v22 + 2) - 1 )
        {
          if ( *((_DWORD *)v22 + 3) )
            v24 = (unsigned int)(2 * v24);
          for ( i = *(_QWORD **)(v22[6] + 8 * v24); v23 != i; i = (_QWORD *)*i )
          {
            v54 = *((_DWORD *)i - 2);
            if ( *(_DWORD *)(a1 + 124) )
            {
              v54 ^= *(_DWORD *)(a1 + 136);
              v55 = v54;
              if ( HIBYTE(v54) != ((unsigned __int8)v54 ^ (unsigned __int8)(BYTE1(v54) ^ BYTE2(v54))) )
              {
                RtlpLogHeapFailure(3, a1, (__int64)(i - 2), 0LL, 0LL, 0LL);
                LOWORD(v54) = v55;
              }
            }
            if ( (int)(v15 - (unsigned __int16)v54) <= 0 )
            {
              v23 = i;
              goto LABEL_31;
            }
          }
        }
        else
        {
          v31 = v22[5];
          v32 = (unsigned int)v24 >> 5;
          v33 = *(_DWORD *)(v31 + 4 * v32) & (-1 << (v24 & 0x1F));
          v34 = v31 + 4 * v32;
          if ( v33 )
          {
LABEL_25:
            if ( (_WORD)v33 )
            {
              if ( (_BYTE)v33 )
                v35 = (unsigned __int8)RtlpBitsClearLow[(unsigned __int8)v33];
              else
                v35 = (unsigned __int8)RtlpBitsClearLow[BYTE1(v33)] + 8;
            }
            else if ( (v33 & 0xFF0000) != 0 )
            {
              v35 = (unsigned __int8)RtlpBitsClearLow[BYTE2(v33)] + 16;
            }
            else
            {
              v35 = (unsigned __int8)RtlpBitsClearLow[(unsigned __int64)v33 >> 24] + 24;
            }
            v36 = 32 * v32 + v35;
            v37 = 2 * v36;
            if ( !*((_DWORD *)v22 + 3) )
              v37 = v36;
            v23 = *(_QWORD **)(v22[6] + 8LL * v37);
            break;
          }
          while ( (unsigned int)v32 <= ((unsigned int)(*((_DWORD *)v22 + 2) - *v21) >> 5) - 1 )
          {
            v33 = *(_DWORD *)(v34 + 4);
            v34 += 4LL;
            LODWORD(v32) = v32 + 1;
            if ( v33 )
              goto LABEL_25;
          }
        }
LABEL_46:
        v22 = (__int64 *)*v22;
        v19 = *((_DWORD *)v22 + 6);
        v21 = v22 + 3;
        v20 = v19;
        continue;
      }
    }
    break;
  }
LABEL_31:
  if ( !v23 )
    goto LABEL_46;
  v9 = a3;
  v16 = (_QWORD **)(a1 + 336);
LABEL_33:
  if ( v16 != v23 )
  {
    v38 = *(_DWORD *)(a1 + 124);
    do
    {
      if ( v38 )
      {
        v39 = *((_DWORD *)v23 - 2);
        v38 = *(_DWORD *)(a1 + 124);
        if ( (v38 & v39) != 0 )
          LOWORD(v39) = *(_WORD *)(a1 + 136) ^ v39;
      }
      else
      {
        LOWORD(v39) = *((_WORD *)v23 - 4);
      }
      if ( v15 <= (unsigned __int16)v39 )
        break;
      v23 = (_QWORD *)*v23;
    }
    while ( v16 != v23 );
  }
  v40 = (__int64 *)v23[1];
  v41 = (_QWORD *)(v9 + 16);
  if ( (_QWORD *)*v40 == v23 )
  {
    *v41 = v23;
    *(_QWORD *)(v9 + 24) = v40;
    *v40 = (__int64)v41;
    v23[1] = v41;
  }
  else
  {
    RtlpLogHeapFailure(13, 0LL, (__int64)v23, 0LL, *v40, 0LL);
  }
  *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(v9 + 8);
  v42 = *(__int64 **)(a1 + 312);
  if ( v42 )
  {
    v43 = *(unsigned __int16 *)(v9 + 8);
    while ( 1 )
    {
      v44 = *((unsigned int *)v42 + 2);
      if ( v43 < v44 )
      {
        v45 = v44 - 1;
        goto LABEL_48;
      }
      if ( !*v42 )
        break;
      v42 = (__int64 *)*v42;
    }
    v45 = v44 - 1;
    LODWORD(v43) = v44 - 1;
LABEL_48:
    v46 = v43 - *((_DWORD *)v42 + 6);
    v120 = *(_WORD *)(v9 + 8);
    v47 = v42[6];
    v48 = 2 * v46;
    if ( !*((_DWORD *)v42 + 3) )
      v48 = v46;
    ++*((_DWORD *)v42 + 4);
    v49 = *(_QWORD *)(v47 + 8 * v48);
    if ( (_DWORD)v43 == v45 )
      ++*((_DWORD *)v42 + 5);
    if ( !v49 )
      goto LABEL_53;
    v51 = *(_DWORD *)(v49 - 8);
    if ( *(_DWORD *)(a1 + 124) )
    {
      v51 ^= *(_DWORD *)(a1 + 136);
      v52 = v51;
      if ( HIBYTE(v51) != ((unsigned __int8)v51 ^ (unsigned __int8)(BYTE1(v51) ^ BYTE2(v51))) )
      {
        RtlpLogHeapFailure(3, a1, v49 - 16, 0LL, 0LL, 0LL);
        LOWORD(v51) = v52;
      }
    }
    if ( v120 - (unsigned __int16)v51 <= 0 )
    {
LABEL_53:
      *(_QWORD *)(v42[6] + 8 * v48) = v41;
      if ( !v49 )
        *(_DWORD *)(v42[5] + 4 * ((unsigned __int64)v46 >> 5)) |= 1 << (v46 & 0x1F);
    }
  }
LABEL_55:
  if ( *(_DWORD *)(a1 + 124) )
  {
    *(_BYTE *)(v9 + 11) = *(_BYTE *)(v9 + 8) ^ *(_BYTE *)(v9 + 9) ^ *(_BYTE *)(v9 + 10);
    *(_DWORD *)(v9 + 8) ^= *(_DWORD *)(a1 + 136);
  }
  return 1;
}
