/*
 * XREFs of RtlpGrowBlockInPlace @ 0x18000D610
 * Callers:
 *     RtlpReAllocateHeap @ 0x18005B780 (RtlpReAllocateHeap.c)
 * Callees:
 *     RtlpZeroBlockFromOffset @ 0x18000D508 (RtlpZeroBlockFromOffset.c)
 *     RtlpBreakPointHeap @ 0x18000D5E4 (RtlpBreakPointHeap.c)
 *     RtlpCreateSplitBlock @ 0x18000DD00 (RtlpCreateSplitBlock.c)
 *     RtlpAnalyzeHeapFailure @ 0x18000F2D0 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapRemoveListEntry @ 0x18000F610 (RtlpHeapRemoveListEntry.c)
 *     DbgPrint @ 0x18000F790 (DbgPrint.c)
 *     RtlpCommitBlock @ 0x180010480 (RtlpCommitBlock.c)
 *     RtlpDeCommitFreeBlock @ 0x180010840 (RtlpDeCommitFreeBlock.c)
 *     RtlpLogHeapFailure @ 0x180056D80 (RtlpLogHeapFailure.c)
 *     RtlCompareMemoryUlong @ 0x180164350 (RtlCompareMemoryUlong.c)
 */

char __fastcall RtlpGrowBlockInPlace(
        _DWORD *BaseAddress,
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
  __int64 **v19; // rdx
  unsigned __int64 v20; // rax
  int v21; // r8d
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
  __int64 v39; // r10
  __int64 v40; // rdx
  unsigned __int16 v41; // dx
  __int64 v42; // rcx
  __int64 v43; // rax
  unsigned __int16 v44; // dx
  unsigned __int64 v45; // rcx
  unsigned __int64 v46; // rdx
  __int64 v47; // r8
  unsigned __int16 v48; // dx
  __int64 v49; // r10
  __int64 v50; // rax
  __int64 v51; // r8
  int v52; // [rsp+20h] [rbp-68h]
  int v53; // [rsp+28h] [rbp-60h]
  __int64 *v54; // [rsp+90h] [rbp+8h]
  char v56; // [rsp+B0h] [rbp+28h]
  __int64 v57; // [rsp+B0h] [rbp+28h]

  v5 = a4;
  v6 = a5;
  if ( a5 > (unsigned int)BaseAddress[37] )
    return 0;
  v10 = BaseAddress[31];
  v56 = *(_BYTE *)(a3 + 10);
  v11 = a3 + 16LL * *(unsigned __int16 *)(a3 + 8);
  if ( ((*(_BYTE *)(v11 + 10) ^ *((_BYTE *)BaseAddress + 138) & (v10 >> 20)) & 1) != 0 )
    return 0;
  if ( v10 )
  {
    v12 = *(_DWORD *)(v11 + 8) ^ BaseAddress[34];
    *(_DWORD *)(v11 + 8) = v12;
    if ( HIBYTE(v12) != ((unsigned __int8)v12 ^ (unsigned __int8)(BYTE1(v12) ^ BYTE2(v12))) )
      RtlpAnalyzeHeapFailure(BaseAddress, v11);
  }
  v13 = *(unsigned __int16 *)(v11 + 8);
  v14 = v13 + *(unsigned __int16 *)(a3 + 8);
  if ( v14 < v6 )
  {
    if ( BaseAddress[31] )
    {
      *(_BYTE *)(v11 + 11) = *(_BYTE *)(v11 + 10) ^ v13 ^ BYTE1(v13);
      *(_DWORD *)(v11 + 8) ^= BaseAddress[34];
      return 0;
    }
    return 0;
  }
  v15 = *(__int64 **)(v11 + 24);
  v16 = *(_QWORD *)(v11 + 16);
  v54 = v15;
  v17 = *v15;
  v18 = *(_QWORD *)(v16 + 8);
  if ( *v15 != v11 + 16 || v17 != v18 )
  {
    RtlpLogHeapFailure(13, (_DWORD)BaseAddress, v11 + 16, v18, v17, 0LL);
    return 0;
  }
  *((_QWORD *)BaseAddress + 24) -= v13;
  v19 = (__int64 **)*((_QWORD *)BaseAddress + 39);
  if ( v19 )
  {
    while ( 1 )
    {
      v20 = *((unsigned int *)v19 + 2);
      if ( *(unsigned __int16 *)(v11 + 8) < v20 )
      {
        v21 = *(unsigned __int16 *)(v11 + 8);
        goto LABEL_14;
      }
      if ( !*v19 )
        break;
      v19 = (__int64 **)*v19;
    }
    v21 = v20 - 1;
LABEL_14:
    v52 = v21;
    LOBYTE(v21) = 1;
    RtlpHeapRemoveListEntry((_DWORD)BaseAddress, (_DWORD)v19, v21, v11 + 16, v52, *(unsigned __int16 *)(v11 + 8));
    v15 = v54;
  }
  *v15 = v16;
  *(_QWORD *)(v16 + 8) = v15;
  if ( (*(_BYTE *)(v11 + 10) & 8) != 0 && !(unsigned __int8)RtlpCommitBlock(BaseAddress) )
  {
    RtlpDeCommitFreeBlock(BaseAddress);
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
    v29 = *(unsigned __int16 *)(a3 + 12) ^ (unsigned __int64)*((unsigned __int16 *)BaseAddress + 70);
  }
  else if ( (v28 & 0x40) != 0 )
  {
    v29 = *(unsigned __int16 *)(a3 + 16LL * (*(_BYTE *)(a3 + 15) & 0x3F) + 12);
  }
  else if ( (v28 & 0x3F) == 0x3F )
  {
    if ( v28 >= 0 )
    {
      if ( BaseAddress[31] )
      {
        LODWORD(v27) = *(_DWORD *)(a3 + 8);
        if ( ((unsigned int)v27 & BaseAddress[31]) != 0 )
          LODWORD(v27) = BaseAddress[34] ^ v27;
      }
    }
    else
    {
      if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(*(_WORD *)(a3 + 8) ^ (unsigned __int16)BaseAddress ^ (a3 >> 4)) )
        v27 = 0LL;
      else
        v27 = *(_QWORD *)(a3
                        - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ *(_DWORD *)(a3 + 8) ^ (unsigned int)BaseAddress ^ (unsigned int)(a3 >> 4)) >> 12));
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
  if ( (v56 & 2) != 0 )
  {
    *(_OWORD *)(a3 + 16 * v6 - 16) = *(_OWORD *)(a3 + 16LL * *(unsigned __int16 *)(a3 + 8) - 16);
    if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) == 0 )
      goto LABEL_40;
    v39 = *(unsigned __int16 *)(a3 + 8);
    v40 = *(unsigned __int16 *)(a3 + 16 * v6 - 14);
    v57 = v39;
    if ( !RtlpGlobalTagHeap || !(_WORD)v40 )
      goto LABEL_105;
    if ( (v40 & 0x8000u) == 0LL )
    {
      if ( (v40 & 0x800) == 0 )
      {
        if ( (unsigned __int16)v40 >= *((_WORD *)BaseAddress + 112) )
          goto LABEL_105;
        v51 = *((_QWORD *)BaseAddress + 29);
        if ( !v51 )
          goto LABEL_105;
        ++*(_DWORD *)(v51 + 72 * v40 + 4);
        v43 = v51 + 72 * v40;
        *(_QWORD *)(v43 + 8) -= v39;
        goto LABEL_104;
      }
      v48 = v40 & 0xF7FF;
      if ( v48 >= *(_WORD *)(RtlpGlobalTagHeap + 224) )
        goto LABEL_105;
      v49 = *(_QWORD *)(RtlpGlobalTagHeap + 232);
      if ( !v49 )
        goto LABEL_105;
      v50 = v48;
      LOWORD(v40) = v48 | 0x800;
      v43 = v49 + 72 * v50;
      v39 = v57;
    }
    else
    {
      v41 = v40 & 0x7FFF;
      if ( v41 >= 0x81u )
        goto LABEL_105;
      v42 = *((_QWORD *)BaseAddress + 41);
      if ( !v42 )
        goto LABEL_105;
      v43 = v42 + 16LL * v41;
      LOWORD(v40) = v41 | 0x8000;
    }
    ++*(_DWORD *)(v43 + 4);
    *(_QWORD *)(v43 + 8) -= v39;
    if ( (v40 & 0x8000u) != 0LL )
    {
      v44 = 0;
      if ( v6 < 0x80 )
        v44 = v6;
      v43 = *((_QWORD *)BaseAddress + 41) + 16LL * v44;
      LOWORD(v40) = v44 | 0x8000;
    }
LABEL_104:
    ++*(_DWORD *)v43;
    v26 = v40;
    *(_QWORD *)(v43 + 8) += v6;
LABEL_105:
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
        if ( (unsigned __int16)v33 < *((_WORD *)BaseAddress + 112) )
        {
          v34 = *((_QWORD *)BaseAddress + 29);
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
    if ( v37 >= 0x3F )
    {
      *(_QWORD *)(v36 + a3) = v37;
      *(_BYTE *)(a3 + 15) = 63;
    }
    else
    {
      *(_BYTE *)(a3 + 15) = v37;
    }
    LOWORD(v53) = v6;
    RtlpCreateSplitBlock(BaseAddress, (BaseAddress[28] & 0x40) != 0, v53, v31);
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
    *(_WORD *)(a3 + 16LL * *(unsigned __int16 *)(a3 + 8) + 12) = *((_WORD *)BaseAddress + 70) ^ *(_WORD *)(a3 + 8);
  }
  if ( (a2 & 8) != 0 )
  {
    if ( v5 < v30 )
      v30 = v5;
    RtlpZeroBlockFromOffset((__int64)BaseAddress, a3 + 16, v30);
    goto LABEL_46;
  }
  if ( (BaseAddress[28] & 0x40) != 0 )
  {
    v45 = v30 & 3;
    if ( (v30 & 3) != 0 )
      v45 = 4 - v45;
    if ( v5 > v45 + v30 && ((v5 - v45 - v30) & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
    {
      v46 = ((v5 - v45 - v30) & 0xFFFFFFFFFFFFFFFCuLL) >> 2;
      v47 = v45 + v30 + a3 + 16;
      if ( v46 )
      {
        if ( (v47 & 4) == 0 )
          goto LABEL_85;
        *(_DWORD *)v47 = -1163005939;
        if ( --v46 )
        {
          v47 += 4LL;
LABEL_85:
          memset64((void *)v47, 0xBAADF00DBAADF00DuLL, v46 >> 1);
          if ( (v46 & 1) != 0 )
            *(_DWORD *)(v47 + 4 * v46 - 4) = -1163005939;
        }
      }
    }
  }
LABEL_46:
  if ( (BaseAddress[28] & 0x20) != 0 )
    *(__m128i *)(a3 + v5 + 16) = _mm_load_si128((const __m128i *)&_xmm_abababababababababababababababab);
  *(_BYTE *)(a3 + 10) = (a2 >> 4) ^ (*(_BYTE *)(a3 + 10) ^ (a2 >> 4)) & 0x1F;
  return 1;
}
