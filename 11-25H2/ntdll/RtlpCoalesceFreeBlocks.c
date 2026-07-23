/*
 * XREFs of RtlpCoalesceFreeBlocks @ 0x180057A50
 * Callers:
 *     RtlpExtendHeap @ 0x180028BE0 (RtlpExtendHeap.c)
 *     RtlpCoalesceHeap @ 0x180097CE0 (RtlpCoalesceHeap.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x180052E50 (RtlpLogHeapFailure.c)
 *     RtlpAnalyzeHeapFailure @ 0x180058210 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapRemoveListEntry @ 0x180058550 (RtlpHeapRemoveListEntry.c)
 *     DbgPrint @ 0x1800586D0 (DbgPrint.c)
 *     RtlpBreakPointHeap @ 0x18005A8C0 (RtlpBreakPointHeap.c)
 *     RtlpCommitBlock @ 0x1800966E0 (RtlpCommitBlock.c)
 *     RtlpDeCommitFreeBlock @ 0x180096B50 (RtlpDeCommitFreeBlock.c)
 *     RtlCompareMemoryUlong @ 0x180167520 (RtlCompareMemoryUlong.c)
 */

__int64 __fastcall RtlpCoalesceFreeBlocks(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  unsigned __int64 v5; // r10
  _QWORD *v6; // r14
  __int64 v7; // rbx
  __int64 v8; // rbp
  unsigned int v10; // ecx
  __int64 v11; // rbx
  int v12; // edx
  int v13; // edx
  __int64 *v14; // r15
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // r9
  __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rax
  char v21; // al
  SIZE_T v23; // rsi
  SIZE_T v24; // r15
  int v25; // edx
  __int64 *v26; // r15
  __int64 v27; // rsi
  __int64 v28; // rax
  __int64 v29; // r9
  __int64 **v30; // rdx
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // r9
  char v33; // al
  SIZE_T v34; // rsi
  SIZE_T v35; // rbp
  __int64 v36; // rax
  __int64 v37; // r9
  __int64 *v38; // r15
  __int64 v39; // rsi
  __int64 v40; // rax
  __int64 v41; // r9
  __int64 **v42; // rdx
  unsigned __int64 v43; // r9
  unsigned __int64 v44; // rcx
  char v45; // al
  SIZE_T v46; // rsi
  SIZE_T v47; // r15
  __int64 v48; // r9
  __int64 v49; // r9
  __int64 *v50; // r12
  __int64 v51; // r8
  __int64 v52; // r15
  __int64 v53; // rax
  __int64 v54; // r9
  unsigned __int16 *v55; // rcx
  __int64 **v56; // rdx
  unsigned __int64 v57; // rcx
  int v58; // ecx
  char v59; // al
  SIZE_T v60; // rsi
  SIZE_T v61; // r15
  __int64 v62; // r9

  v5 = 16 * (*(unsigned __int16 *)(a2 + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140));
  v6 = (_QWORD *)a3;
  v7 = a2 - v5;
  v8 = a2;
  if ( a2 - v5 != a2 )
  {
    v10 = *(_DWORD *)(a1 + 124);
    if ( ((*(_BYTE *)(v7 + 10) ^ *(_BYTE *)(a1 + 138) & (v10 >> 20)) & 1) == 0 )
    {
      if ( v10 )
      {
        v25 = *(_DWORD *)(v7 + 8) ^ *(_DWORD *)(a1 + 136);
        *(_DWORD *)(v7 + 8) = v25;
        if ( HIBYTE(v25) != ((unsigned __int8)v25 ^ (unsigned __int8)(BYTE1(v25) ^ BYTE2(v25))) )
          RtlpAnalyzeHeapFailure(a1, v7);
      }
      if ( !a4 )
      {
LABEL_38:
        v26 = *(__int64 **)(v7 + 24);
        a3 = v7 + 16;
        v27 = *(_QWORD *)(v7 + 16);
        v28 = *v26;
        v29 = *(_QWORD *)(v27 + 8);
        if ( *v26 == v7 + 16 && v28 == v29 )
        {
          *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v7 + 8);
          v30 = *(__int64 ***)(a1 + 312);
          if ( v30 )
          {
            v31 = *(unsigned __int16 *)(v7 + 8);
            while ( 1 )
            {
              v32 = *((unsigned int *)v30 + 2);
              if ( v31 < v32 )
                break;
              if ( !*v30 )
              {
                LODWORD(v31) = v32 - 1;
                break;
              }
              v30 = (__int64 **)*v30;
            }
            LOBYTE(a3) = 1;
            RtlpHeapRemoveListEntry(a1, (_DWORD)v30, a3, v7 + 16, v31, *(unsigned __int16 *)(v7 + 8));
          }
          *v26 = v27;
          *(_QWORD *)(v27 + 8) = v26;
          if ( (*(_BYTE *)(v7 + 10) & 8) == 0 || (unsigned __int8)RtlpCommitBlock(a1) )
          {
            v33 = *(_BYTE *)(v7 + 10);
            if ( (v33 & 4) != 0 )
            {
              v34 = 16LL * *(unsigned __int16 *)(v7 + 8) - 32;
              if ( (v33 & 2) != 0 && v34 > 4 )
                v34 = 16LL * *(unsigned __int16 *)(v7 + 8) - 36;
              v35 = RtlCompareMemoryUlong((PVOID)(v7 + 32), v34, 0xFEEEFEEE);
              if ( v35 != v34 )
              {
                if ( NtCurrentPeb()->Ldr )
                  DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
                else
                  DbgPrint("HEAP: ");
                DbgPrint(
                  "HEAP: Free Heap block %p modified at %p after it was freed\n",
                  (const void *)v7,
                  (const void *)(v35 + v7 + 32));
                RtlpBreakPointHeap();
              }
            }
            v36 = *(unsigned __int16 *)(v7 + 8);
            v8 = v7;
            *(_BYTE *)(v7 + 10) = 0;
            *(_BYTE *)(v7 + 15) = 0;
            *v6 += v36;
            *(_WORD *)(v7 + 8) = *v6;
            *(_WORD *)(v7 + 16LL * *v6 + 12) = *(_WORD *)v6 ^ *(_WORD *)(a1 + 140);
          }
          else
          {
            LOBYTE(v48) = 1;
            RtlpDeCommitFreeBlock(a1, v7, *(unsigned __int16 *)(v7 + 8), v48);
          }
        }
        else
        {
          RtlpLogHeapFailure(13, a1, a3, v29, v28, 0LL);
        }
        goto LABEL_3;
      }
      v50 = *(__int64 **)(v8 + 24);
      v51 = v8 + 16;
      v52 = *(_QWORD *)(v8 + 16);
      v53 = *v50;
      v54 = *(_QWORD *)(v52 + 8);
      if ( *v50 == v8 + 16 && v53 == v54 )
      {
        v55 = (unsigned __int16 *)(v8 + 8);
        *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v8 + 8);
        v56 = *(__int64 ***)(a1 + 312);
        if ( v56 )
        {
          while ( 1 )
          {
            v57 = *((unsigned int *)v56 + 2);
            if ( *(unsigned __int16 *)(v8 + 8) < v57 )
            {
              v58 = *(unsigned __int16 *)(v8 + 8);
              goto LABEL_93;
            }
            if ( !*v56 )
              break;
            v56 = (__int64 **)*v56;
          }
          v58 = v57 - 1;
LABEL_93:
          LOBYTE(v51) = 1;
          RtlpHeapRemoveListEntry(a1, (_DWORD)v56, v51, v8 + 16, v58, *(unsigned __int16 *)(v8 + 8));
          v55 = (unsigned __int16 *)(v8 + 8);
        }
        *v50 = v52;
        *(_QWORD *)(v52 + 8) = v50;
        if ( (*(_BYTE *)(v8 + 10) & 8) != 0 )
        {
          if ( !(unsigned __int8)RtlpCommitBlock(a1) )
          {
            LOBYTE(v62) = 1;
            RtlpDeCommitFreeBlock(a1, v8, *(unsigned __int16 *)(v8 + 8), v62);
            a4 = 0;
            goto LABEL_38;
          }
          v55 = (unsigned __int16 *)(v8 + 8);
        }
        v59 = *(_BYTE *)(v8 + 10);
        if ( (v59 & 4) != 0 )
        {
          v60 = 16LL * *v55 - 32;
          if ( (v59 & 2) != 0 && v60 > 4 )
            v60 = 16LL * *v55 - 36;
          v61 = RtlCompareMemoryUlong((PVOID)(v8 + 32), v60, 0xFEEEFEEE);
          if ( v61 != v60 )
          {
            if ( NtCurrentPeb()->Ldr )
              DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
            else
              DbgPrint("HEAP: ");
            DbgPrint(
              "HEAP: Free Heap block %p modified at %p after it was freed\n",
              (const void *)v8,
              (const void *)(v61 + v8 + 32));
            RtlpBreakPointHeap();
            a4 = 0;
            goto LABEL_38;
          }
        }
      }
      else
      {
        RtlpLogHeapFailure(13, a1, v51, v54, v53, 0LL);
      }
      a4 = 0;
      goto LABEL_38;
    }
  }
LABEL_3:
  v11 = v8 + 16LL * *v6;
  if ( *(_DWORD *)(a1 + 124) )
  {
    v12 = *(_DWORD *)(a1 + 136) ^ *(_DWORD *)(v11 + 8);
    if ( HIBYTE(v12) != ((unsigned __int8)v12 ^ (unsigned __int8)(((unsigned __int16)(*(_WORD *)(a1 + 136) ^ *(_WORD *)(v11 + 8)) >> 8) ^ BYTE2(v12))) )
      RtlpLogHeapFailure(3, a1, v11, 0LL, 0LL, 0LL);
  }
  while ( ((*(_BYTE *)(v11 + 10) ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 20))) & 1) == 0 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      v13 = *(_DWORD *)(v11 + 8) ^ *(_DWORD *)(a1 + 136);
      *(_DWORD *)(v11 + 8) = v13;
      if ( HIBYTE(v13) != ((unsigned __int8)v13 ^ (unsigned __int8)(BYTE1(v13) ^ BYTE2(v13))) )
        RtlpAnalyzeHeapFailure(a1, v11);
    }
    if ( !a4 )
      goto LABEL_11;
    v38 = *(__int64 **)(v8 + 24);
    a3 = v8 + 16;
    v39 = *(_QWORD *)(v8 + 16);
    v40 = *v38;
    v41 = *(_QWORD *)(v39 + 8);
    if ( *v38 != v8 + 16 || v40 != v41 )
    {
      RtlpLogHeapFailure(13, a1, a3, v41, v40, 0LL);
LABEL_72:
      a4 = 0;
      goto LABEL_11;
    }
    *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v8 + 8);
    v42 = *(__int64 ***)(a1 + 312);
    if ( v42 )
    {
      v43 = *(unsigned __int16 *)(v8 + 8);
      while ( 1 )
      {
        v44 = *((unsigned int *)v42 + 2);
        if ( v43 < v44 )
          break;
        if ( !*v42 )
        {
          LODWORD(v43) = v44 - 1;
          break;
        }
        v42 = (__int64 **)*v42;
      }
      LOBYTE(a3) = 1;
      RtlpHeapRemoveListEntry(a1, (_DWORD)v42, a3, v8 + 16, v43, *(unsigned __int16 *)(v8 + 8));
    }
    *v38 = v39;
    *(_QWORD *)(v39 + 8) = v38;
    if ( (*(_BYTE *)(v8 + 10) & 8) == 0 || (unsigned __int8)RtlpCommitBlock(a1) )
    {
      v45 = *(_BYTE *)(v8 + 10);
      if ( (v45 & 4) != 0 )
      {
        v46 = 16LL * *(unsigned __int16 *)(v8 + 8) - 32;
        if ( (v45 & 2) != 0 && v46 > 4 )
          v46 = 16LL * *(unsigned __int16 *)(v8 + 8) - 36;
        v47 = RtlCompareMemoryUlong((PVOID)(v8 + 32), v46, 0xFEEEFEEE);
        if ( v47 != v46 )
        {
          if ( NtCurrentPeb()->Ldr )
            DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
          else
            DbgPrint("HEAP: ");
          DbgPrint(
            "HEAP: Free Heap block %p modified at %p after it was freed\n",
            (const void *)v8,
            (const void *)(v47 + v8 + 32));
          RtlpBreakPointHeap();
          a4 = 0;
          goto LABEL_11;
        }
      }
      goto LABEL_72;
    }
    LOBYTE(v49) = 1;
    RtlpDeCommitFreeBlock(a1, v8, *(unsigned __int16 *)(v8 + 8), v49);
    a4 = 0;
LABEL_11:
    v14 = *(__int64 **)(v11 + 24);
    v15 = *(_QWORD *)(v11 + 16);
    v16 = *v14;
    v17 = *(_QWORD *)(v15 + 8);
    if ( *v14 == v11 + 16 && v16 == v17 )
    {
      *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v11 + 8);
      v18 = *(_QWORD *)(a1 + 312);
      if ( v18 )
      {
        v19 = *(unsigned __int16 *)(v11 + 8);
        while ( 1 )
        {
          v20 = *(unsigned int *)(v18 + 8);
          if ( v19 < v20 )
            break;
          a3 = *(_QWORD *)v18;
          if ( !*(_QWORD *)v18 )
          {
            LODWORD(v19) = v20 - 1;
            break;
          }
          v18 = *(_QWORD *)v18;
        }
        LOBYTE(a3) = 1;
        RtlpHeapRemoveListEntry(a1, v18, a3, v11 + 16, v19, *(unsigned __int16 *)(v11 + 8));
      }
      *v14 = v15;
      *(_QWORD *)(v15 + 8) = v14;
      if ( (*(_BYTE *)(v11 + 10) & 8) == 0 || (unsigned __int8)RtlpCommitBlock(a1) )
      {
        v21 = *(_BYTE *)(v11 + 10);
        if ( (v21 & 4) != 0 )
        {
          v23 = 16LL * *(unsigned __int16 *)(v11 + 8) - 32;
          if ( (v21 & 2) != 0 && v23 > 4 )
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
              (const void *)(v11 + v24 + 32));
            if ( NtCurrentPeb()->BeingDebugged )
            {
              __debugbreak();
              RtlpHeapInvalidBreakPoint = 0;
            }
          }
        }
        *(_BYTE *)(v8 + 10) = 0;
        *(_BYTE *)(v8 + 15) = 0;
        *v6 += *(unsigned __int16 *)(v11 + 8);
        *(_WORD *)(v8 + 8) = *v6;
        *(_WORD *)(v8 + 16LL * *v6 + 12) = *(_WORD *)v6 ^ *(_WORD *)(a1 + 140);
        return v8;
      }
      LOBYTE(v37) = 1;
      RtlpDeCommitFreeBlock(a1, v11, *(unsigned __int16 *)(v11 + 8), v37);
    }
    else
    {
      RtlpLogHeapFailure(13, a1, v11 + 16, v17, v16, 0LL);
    }
  }
  return v8;
}
