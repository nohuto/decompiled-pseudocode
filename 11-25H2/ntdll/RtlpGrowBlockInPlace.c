/*
 * XREFs of RtlpGrowBlockInPlace @ 0x180059530
 * Callers:
 *     RtlpReAllocateHeap @ 0x18002A860 (RtlpReAllocateHeap.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x180052E50 (RtlpLogHeapFailure.c)
 *     RtlpAnalyzeHeapFailure @ 0x180058210 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapRemoveListEntry @ 0x180058550 (RtlpHeapRemoveListEntry.c)
 *     DbgPrint @ 0x1800586D0 (DbgPrint.c)
 *     RtlpCreateSplitBlock @ 0x180058720 (RtlpCreateSplitBlock.c)
 *     RtlpBreakPointHeap @ 0x18005A8C0 (RtlpBreakPointHeap.c)
 *     RtlpCommitBlock @ 0x1800966E0 (RtlpCommitBlock.c)
 *     RtlpDeCommitFreeBlock @ 0x180096B50 (RtlpDeCommitFreeBlock.c)
 *     RtlpZeroBlockFromOffset @ 0x1800EE7D8 (RtlpZeroBlockFromOffset.c)
 *     RtlCompareMemoryUlong @ 0x180167520 (RtlCompareMemoryUlong.c)
 */

char __fastcall RtlpGrowBlockInPlace(
        __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5)
{
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // rbp
  unsigned int v10; // ecx
  unsigned __int64 v11; // rdi
  int v12; // edx
  __int64 v13; // rcx
  unsigned __int64 v14; // r15
  __int64 *v15; // r8
  __int64 v16; // r13
  __int64 v17; // rax
  __int64 v18; // r9
  __int64 v19; // rdx
  unsigned __int64 v20; // rax
  unsigned int v21; // r8d
  char v22; // al
  SIZE_T v23; // r14
  SIZE_T v24; // r13
  char v25; // r13
  __int16 v26; // r11
  __int64 v27; // rdx
  char v28; // cl
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rdi
  __int64 v31; // r9
  __int64 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // r10
  __int64 v35; // rcx
  __int64 v36; // rcx
  unsigned __int64 v37; // rax
  unsigned __int64 *v38; // r8
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v42; // r10
  __int64 v43; // rdx
  unsigned __int16 v44; // dx
  __int64 v45; // rcx
  __int64 v46; // rax
  unsigned __int16 v47; // dx
  unsigned __int64 v48; // rcx
  unsigned __int64 v49; // rdx
  __int64 v50; // r8
  unsigned __int16 v51; // dx
  __int64 v52; // r10
  __int64 v53; // rax
  __int64 v54; // r9
  __int64 v55; // r8
  __int64 *v56; // [rsp+90h] [rbp+8h]
  char v58; // [rsp+B0h] [rbp+28h]
  __int64 v59; // [rsp+B0h] [rbp+28h]

  v5 = a4;
  v6 = a5;
  if ( a5 > *(unsigned int *)(a1 + 148) )
    return 0;
  v10 = *(_DWORD *)(a1 + 124);
  v58 = *(_BYTE *)(a3 + 10);
  v11 = a3 + 16LL * *(unsigned __int16 *)(a3 + 8);
  if ( ((*(_BYTE *)(v11 + 10) ^ *(_BYTE *)(a1 + 138) & (v10 >> 20)) & 1) != 0 )
    return 0;
  if ( v10 )
  {
    v12 = *(_DWORD *)(v11 + 8) ^ *(_DWORD *)(a1 + 136);
    *(_DWORD *)(v11 + 8) = v12;
    if ( HIBYTE(v12) != ((unsigned __int8)v12 ^ (unsigned __int8)(BYTE1(v12) ^ BYTE2(v12))) )
      RtlpAnalyzeHeapFailure(a1, v11);
  }
  v13 = *(unsigned __int16 *)(v11 + 8);
  v14 = v13 + *(unsigned __int16 *)(a3 + 8);
  if ( v14 < v6 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_BYTE *)(v11 + 11) = *(_BYTE *)(v11 + 10) ^ v13 ^ BYTE1(v13);
      *(_DWORD *)(v11 + 8) ^= *(_DWORD *)(a1 + 136);
      return 0;
    }
    return 0;
  }
  v15 = *(__int64 **)(v11 + 24);
  v16 = *(_QWORD *)(v11 + 16);
  v56 = v15;
  v17 = *v15;
  v18 = *(_QWORD *)(v16 + 8);
  if ( *v15 != v11 + 16 || v17 != v18 )
  {
    RtlpLogHeapFailure(13, a1, v11 + 16, v18, v17, 0LL);
    return 0;
  }
  *(_QWORD *)(a1 + 192) -= v13;
  v19 = *(_QWORD *)(a1 + 312);
  if ( v19 )
  {
    while ( 1 )
    {
      v20 = *(unsigned int *)(v19 + 8);
      if ( *(unsigned __int16 *)(v11 + 8) < v20 )
      {
        v21 = *(unsigned __int16 *)(v11 + 8);
        goto LABEL_14;
      }
      if ( !*(_QWORD *)v19 )
        break;
      v19 = *(_QWORD *)v19;
    }
    v21 = v20 - 1;
LABEL_14:
    RtlpHeapRemoveListEntry(a1, v19, 1, (__int64 *)(v11 + 16), v21, *(unsigned __int16 *)(v11 + 8));
    v15 = v56;
  }
  *v15 = v16;
  *(_QWORD *)(v16 + 8) = v15;
  if ( (*(_BYTE *)(v11 + 10) & 8) != 0 && !(unsigned __int8)RtlpCommitBlock(a1) )
  {
    LOBYTE(v54) = 1;
    RtlpDeCommitFreeBlock(a1, v11, *(unsigned __int16 *)(v11 + 8), v54);
    return 0;
  }
  v22 = *(_BYTE *)(v11 + 10);
  if ( (v22 & 4) != 0 )
  {
    v23 = 16LL * *(unsigned __int16 *)(v11 + 8) - 32;
    if ( (v22 & 2) != 0 && v23 > 4 )
      v23 = 16LL * *(unsigned __int16 *)(v11 + 8) - 36;
    v24 = RtlCompareMemoryUlong((PVOID)(v11 + 32), v23, 0xFEEEFEEE);
    if ( v24 != v23 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint(
        "HEAP: Free Heap block %p modified at %p after it was freed\n",
        (const void *)v11,
        (const void *)(v24 + v11 + 32));
      RtlpBreakPointHeap();
    }
    v5 = a4;
  }
  v25 = *(_BYTE *)(v11 + 10);
  v26 = 0;
  LOWORD(v27) = *(_WORD *)(a3 + 8);
  v28 = *(_BYTE *)(a3 + 15);
  if ( v28 == 5 )
  {
    v29 = *(unsigned __int16 *)(a3 + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
  }
  else if ( (v28 & 0x40) != 0 )
  {
    v29 = *(unsigned __int16 *)(a3 + 16LL * (*(_BYTE *)(a3 + 15) & 0x3F) + 12);
  }
  else if ( (v28 & 0x3F) == 0x3F )
  {
    if ( v28 >= 0 )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        LODWORD(v27) = *(_DWORD *)(a3 + 8);
        if ( ((unsigned int)v27 & *(_DWORD *)(a1 + 124)) != 0 )
          LODWORD(v27) = *(_DWORD *)(a1 + 136) ^ v27;
      }
    }
    else
    {
      if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(*(_WORD *)(a3 + 8) ^ a1 ^ (a3 >> 4)) )
        v27 = 0LL;
      else
        v27 = *(_QWORD *)(a3
                        - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ *(_DWORD *)(a3 + 8) ^ (unsigned int)a1 ^ (unsigned int)(a3 >> 4)) >> 12));
      LOWORD(v27) = *(_WORD *)(v27 + 36);
    }
    v29 = *(_QWORD *)(a3 + 16LL * (unsigned __int16)v27);
  }
  else
  {
    v29 = *(_BYTE *)(a3 + 15) & 0x3F;
  }
  v30 = 16LL * *(unsigned __int16 *)(a3 + 8) - v29;
  v31 = 0LL;
  if ( v14 - v6 > 2 )
    v31 = v14 - v6;
  else
    v6 = v14;
  if ( (v58 & 2) != 0 )
  {
    *(_OWORD *)(a3 + 16 * v6 - 16) = *(_OWORD *)(a3 + 16LL * *(unsigned __int16 *)(a3 + 8) - 16);
    if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) == 0 )
      goto LABEL_40;
    v42 = *(unsigned __int16 *)(a3 + 8);
    v43 = *(unsigned __int16 *)(a3 + 16 * v6 - 14);
    v59 = v42;
    if ( !RtlpGlobalTagHeap || !(_WORD)v43 )
      goto LABEL_108;
    if ( (v43 & 0x8000u) == 0LL )
    {
      if ( (v43 & 0x800) == 0 )
      {
        if ( (unsigned __int16)v43 >= *(_WORD *)(a1 + 224) )
          goto LABEL_108;
        v55 = *(_QWORD *)(a1 + 232);
        if ( !v55 )
          goto LABEL_108;
        ++*(_DWORD *)(v55 + 72 * v43 + 4);
        v46 = v55 + 72 * v43;
        *(_QWORD *)(v46 + 8) -= v42;
        goto LABEL_107;
      }
      v51 = v43 & 0xF7FF;
      if ( v51 >= *(_WORD *)(RtlpGlobalTagHeap + 224) )
        goto LABEL_108;
      v52 = *(_QWORD *)(RtlpGlobalTagHeap + 232);
      if ( !v52 )
        goto LABEL_108;
      v53 = v51;
      LOWORD(v43) = v51 | 0x800;
      v46 = v52 + 72 * v53;
      v42 = v59;
    }
    else
    {
      v44 = v43 & 0x7FFF;
      if ( v44 >= 0x81u )
        goto LABEL_108;
      v45 = *(_QWORD *)(a1 + 328);
      if ( !v45 )
        goto LABEL_108;
      v46 = v45 + 16LL * v44;
      LOWORD(v43) = v44 | 0x8000;
    }
    ++*(_DWORD *)(v46 + 4);
    *(_QWORD *)(v46 + 8) -= v42;
    if ( (v43 & 0x8000u) != 0LL )
    {
      v47 = 0;
      if ( v6 < 0x80 )
        v47 = v6;
      v46 = *(_QWORD *)(a1 + 328) + 16LL * v47;
      LOWORD(v43) = v47 | 0x8000;
    }
LABEL_107:
    ++*(_DWORD *)v46;
    v26 = v43;
    *(_QWORD *)(v46 + 8) += v6;
LABEL_108:
    *(_WORD *)(a3 + 16 * v6 - 14) = v26;
    goto LABEL_40;
  }
  if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
  {
    v32 = *(unsigned __int16 *)(a3 + 8);
    v33 = *(unsigned __int8 *)(a3 + 11);
    if ( RtlpGlobalTagHeap )
    {
      if ( *(_BYTE *)(a3 + 11) )
      {
        if ( (unsigned __int16)v33 < *(_WORD *)(a1 + 224) )
        {
          v34 = *(_QWORD *)(a1 + 232);
          if ( v34 )
          {
            v35 = 9 * v33;
            LOBYTE(v26) = *(_BYTE *)(a3 + 11);
            ++*(_DWORD *)(v34 + 8 * v35 + 4);
            *(_QWORD *)(v34 + 8 * v35 + 8) -= v32;
            ++*(_DWORD *)(v34 + 8 * v35);
            *(_QWORD *)(v34 + 8 * v35 + 8) += v6;
          }
        }
      }
    }
    *(_BYTE *)(a3 + 11) = v26;
  }
LABEL_40:
  *(_WORD *)(a3 + 8) = v6;
  v36 = 16 * v6;
  v37 = 16 * v6 - v5;
  if ( v31 )
  {
    v38 = (unsigned __int64 *)(v36 + a3);
    if ( v37 >= 0x3F )
    {
      *v38 = v37;
      *(_BYTE *)(a3 + 15) = 63;
    }
    else
    {
      *(_BYTE *)(a3 + 15) = v37;
    }
    v39 = *(unsigned __int8 *)(a3 + 14);
    if ( (_BYTE)v39 )
      v40 = (a3 & 0xFFFFFFFFFFFF0000uLL) - (v39 << 16) + 0x10000;
    else
      v40 = a1;
    RtlpCreateSplitBlock(a1, v40, (__int64)v38, v25, (*(_DWORD *)(a1 + 112) & 0x40) != 0, v6, v31);
  }
  else
  {
    *(_BYTE *)(a3 + 10) |= v25;
    if ( v37 >= 0x3F )
    {
      *(_QWORD *)(v36 + a3) = v37;
      *(_BYTE *)(a3 + 15) = 63;
    }
    else
    {
      *(_BYTE *)(a3 + 15) = v37;
    }
    *(_WORD *)(a3 + 16LL * *(unsigned __int16 *)(a3 + 8) + 12) = *(_WORD *)(a1 + 140) ^ *(_WORD *)(a3 + 8);
  }
  if ( (a2 & 8) != 0 )
  {
    if ( v5 < v30 )
      v30 = v5;
    RtlpZeroBlockFromOffset(a1, a3 + 16, v30);
    goto LABEL_48;
  }
  if ( (*(_BYTE *)(a1 + 112) & 0x40) != 0 )
  {
    v48 = v30 & 3;
    if ( (v30 & 3) != 0 )
      v48 = 4 - v48;
    if ( v5 > v48 + v30 && ((v5 - v48 - v30) & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
    {
      v49 = ((v5 - v48 - v30) & 0xFFFFFFFFFFFFFFFCuLL) >> 2;
      v50 = v48 + v30 + a3 + 16;
      if ( v49 )
      {
        if ( (v50 & 4) == 0 )
          goto LABEL_88;
        *(_DWORD *)v50 = -1163005939;
        if ( --v49 )
        {
          v50 += 4LL;
LABEL_88:
          memset64((void *)v50, 0xBAADF00DBAADF00DuLL, v49 >> 1);
          if ( (v49 & 1) != 0 )
            *(_DWORD *)(v50 + 4 * v49 - 4) = -1163005939;
        }
      }
    }
  }
LABEL_48:
  if ( (*(_BYTE *)(a1 + 112) & 0x20) != 0 )
    *(__m128i *)(a3 + v5 + 16) = _mm_load_si128((const __m128i *)&_xmm_abababababababababababababababab);
  *(_BYTE *)(a3 + 10) = (a2 >> 4) ^ (*(_BYTE *)(a3 + 10) ^ (a2 >> 4)) & 0x1F;
  return 1;
}
