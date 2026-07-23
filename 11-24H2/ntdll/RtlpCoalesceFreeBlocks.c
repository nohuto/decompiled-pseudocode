/*
 * XREFs of RtlpCoalesceFreeBlocks @ 0x18000EB10
 * Callers:
 *     RtlpExtendHeap @ 0x18000CB60 (RtlpExtendHeap.c)
 *     RtlpDeCommitFreeBlock @ 0x180010840 (RtlpDeCommitFreeBlock.c)
 *     RtlpFreeHeap @ 0x18005A020 (RtlpFreeHeap.c)
 *     RtlpCoalesceHeap @ 0x180106F80 (RtlpCoalesceHeap.c)
 * Callees:
 *     RtlpBreakPointHeap @ 0x18000D5E4 (RtlpBreakPointHeap.c)
 *     RtlpAnalyzeHeapFailure @ 0x18000F2D0 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapRemoveListEntry @ 0x18000F610 (RtlpHeapRemoveListEntry.c)
 *     DbgPrint @ 0x18000F790 (DbgPrint.c)
 *     RtlpCommitBlock @ 0x180010480 (RtlpCommitBlock.c)
 *     RtlpDeCommitFreeBlock @ 0x180010840 (RtlpDeCommitFreeBlock.c)
 *     RtlpLogHeapFailure @ 0x180056D80 (RtlpLogHeapFailure.c)
 *     RtlCompareMemoryUlong @ 0x180164350 (RtlCompareMemoryUlong.c)
 */

__int64 __fastcall RtlpCoalesceFreeBlocks(_DWORD *BaseAddress, __int64 a2, _QWORD *a3, char a4)
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
  _QWORD *v18; // rdx
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
  __int64 *v37; // r15
  __int64 v38; // rsi
  __int64 v39; // rax
  __int64 v40; // r9
  __int64 **v41; // rdx
  unsigned __int64 v42; // r9
  unsigned __int64 v43; // rcx
  char v44; // al
  SIZE_T v45; // rsi
  SIZE_T v46; // r15
  __int64 *v47; // r12
  int v48; // r8d
  __int64 v49; // r15
  __int64 v50; // rax
  __int64 v51; // r9
  unsigned __int16 *v52; // rcx
  __int64 **v53; // rdx
  unsigned __int64 v54; // rcx
  int v55; // ecx
  char v56; // al
  SIZE_T v57; // rsi
  SIZE_T v58; // r15

  v5 = 16 * (*(unsigned __int16 *)(a2 + 12) ^ (unsigned __int64)*((unsigned __int16 *)BaseAddress + 70));
  v6 = a3;
  v7 = a2 - v5;
  v8 = a2;
  if ( a2 - v5 != a2 )
  {
    v10 = BaseAddress[31];
    if ( ((*(_BYTE *)(v7 + 10) ^ *((_BYTE *)BaseAddress + 138) & (v10 >> 20)) & 1) == 0 )
    {
      if ( v10 )
      {
        v25 = *(_DWORD *)(v7 + 8) ^ BaseAddress[34];
        *(_DWORD *)(v7 + 8) = v25;
        if ( HIBYTE(v25) != ((unsigned __int8)v25 ^ (unsigned __int8)(BYTE1(v25) ^ BYTE2(v25))) )
          RtlpAnalyzeHeapFailure(BaseAddress, v7);
      }
      if ( !a4 )
      {
LABEL_38:
        v26 = *(__int64 **)(v7 + 24);
        LODWORD(a3) = v7 + 16;
        v27 = *(_QWORD *)(v7 + 16);
        v28 = *v26;
        v29 = *(_QWORD *)(v27 + 8);
        if ( *v26 == v7 + 16 && v28 == v29 )
        {
          *((_QWORD *)BaseAddress + 24) -= *(unsigned __int16 *)(v7 + 8);
          v30 = (__int64 **)*((_QWORD *)BaseAddress + 39);
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
            RtlpHeapRemoveListEntry(
              (_DWORD)BaseAddress,
              (_DWORD)v30,
              (_DWORD)a3,
              v7 + 16,
              v31,
              *(unsigned __int16 *)(v7 + 8));
          }
          *v26 = v27;
          *(_QWORD *)(v27 + 8) = v26;
          if ( (*(_BYTE *)(v7 + 10) & 8) == 0 || (unsigned __int8)RtlpCommitBlock(BaseAddress) )
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
            *(_WORD *)(v7 + 16LL * *v6 + 12) = *(_WORD *)v6 ^ *((_WORD *)BaseAddress + 70);
          }
          else
          {
            RtlpDeCommitFreeBlock(BaseAddress);
          }
        }
        else
        {
          RtlpLogHeapFailure(13, (_DWORD)BaseAddress, (_DWORD)a3, v29, v28, 0LL);
        }
        goto LABEL_3;
      }
      v47 = *(__int64 **)(v8 + 24);
      v48 = v8 + 16;
      v49 = *(_QWORD *)(v8 + 16);
      v50 = *v47;
      v51 = *(_QWORD *)(v49 + 8);
      if ( *v47 == v8 + 16 && v50 == v51 )
      {
        v52 = (unsigned __int16 *)(v8 + 8);
        *((_QWORD *)BaseAddress + 24) -= *(unsigned __int16 *)(v8 + 8);
        v53 = (__int64 **)*((_QWORD *)BaseAddress + 39);
        if ( v53 )
        {
          while ( 1 )
          {
            v54 = *((unsigned int *)v53 + 2);
            if ( *(unsigned __int16 *)(v8 + 8) < v54 )
            {
              v55 = *(unsigned __int16 *)(v8 + 8);
              goto LABEL_93;
            }
            if ( !*v53 )
              break;
            v53 = (__int64 **)*v53;
          }
          v55 = v54 - 1;
LABEL_93:
          LOBYTE(v48) = 1;
          RtlpHeapRemoveListEntry((_DWORD)BaseAddress, (_DWORD)v53, v48, v8 + 16, v55, *(unsigned __int16 *)(v8 + 8));
          v52 = (unsigned __int16 *)(v8 + 8);
        }
        *v47 = v49;
        *(_QWORD *)(v49 + 8) = v47;
        if ( (*(_BYTE *)(v8 + 10) & 8) != 0 )
        {
          if ( !(unsigned __int8)RtlpCommitBlock(BaseAddress) )
          {
            RtlpDeCommitFreeBlock(BaseAddress);
            a4 = 0;
            goto LABEL_38;
          }
          v52 = (unsigned __int16 *)(v8 + 8);
        }
        v56 = *(_BYTE *)(v8 + 10);
        if ( (v56 & 4) != 0 )
        {
          v57 = 16LL * *v52 - 32;
          if ( (v56 & 2) != 0 && v57 > 4 )
            v57 = 16LL * *v52 - 36;
          v58 = RtlCompareMemoryUlong((PVOID)(v8 + 32), v57, 0xFEEEFEEE);
          if ( v58 != v57 )
          {
            if ( NtCurrentPeb()->Ldr )
              DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
            else
              DbgPrint("HEAP: ");
            DbgPrint(
              "HEAP: Free Heap block %p modified at %p after it was freed\n",
              (const void *)v8,
              (const void *)(v58 + v8 + 32));
            RtlpBreakPointHeap();
            a4 = 0;
            goto LABEL_38;
          }
        }
      }
      else
      {
        RtlpLogHeapFailure(13, (_DWORD)BaseAddress, v48, v51, v50, 0LL);
      }
      a4 = 0;
      goto LABEL_38;
    }
  }
LABEL_3:
  v11 = v8 + 16LL * *v6;
  if ( BaseAddress[31] )
  {
    v12 = BaseAddress[34] ^ *(_DWORD *)(v11 + 8);
    if ( HIBYTE(v12) != ((unsigned __int8)v12 ^ (unsigned __int8)(((unsigned __int16)(*((_WORD *)BaseAddress + 68) ^ *(_WORD *)(v11 + 8)) >> 8) ^ BYTE2(v12))) )
      RtlpLogHeapFailure(3, (_DWORD)BaseAddress, v11, 0, 0LL, 0LL);
  }
  while ( ((*(_BYTE *)(v11 + 10) ^ (unsigned __int8)(*((_BYTE *)BaseAddress + 138) & (BaseAddress[31] >> 20))) & 1) == 0 )
  {
    if ( BaseAddress[31] )
    {
      v13 = *(_DWORD *)(v11 + 8) ^ BaseAddress[34];
      *(_DWORD *)(v11 + 8) = v13;
      if ( HIBYTE(v13) != ((unsigned __int8)v13 ^ (unsigned __int8)(BYTE1(v13) ^ BYTE2(v13))) )
        RtlpAnalyzeHeapFailure(BaseAddress, v11);
    }
    if ( !a4 )
      goto LABEL_11;
    v37 = *(__int64 **)(v8 + 24);
    LODWORD(a3) = v8 + 16;
    v38 = *(_QWORD *)(v8 + 16);
    v39 = *v37;
    v40 = *(_QWORD *)(v38 + 8);
    if ( *v37 != v8 + 16 || v39 != v40 )
    {
      RtlpLogHeapFailure(13, (_DWORD)BaseAddress, (_DWORD)a3, v40, v39, 0LL);
LABEL_72:
      a4 = 0;
      goto LABEL_11;
    }
    *((_QWORD *)BaseAddress + 24) -= *(unsigned __int16 *)(v8 + 8);
    v41 = (__int64 **)*((_QWORD *)BaseAddress + 39);
    if ( v41 )
    {
      v42 = *(unsigned __int16 *)(v8 + 8);
      while ( 1 )
      {
        v43 = *((unsigned int *)v41 + 2);
        if ( v42 < v43 )
          break;
        if ( !*v41 )
        {
          LODWORD(v42) = v43 - 1;
          break;
        }
        v41 = (__int64 **)*v41;
      }
      LOBYTE(a3) = 1;
      RtlpHeapRemoveListEntry((_DWORD)BaseAddress, (_DWORD)v41, (_DWORD)a3, v8 + 16, v42, *(unsigned __int16 *)(v8 + 8));
    }
    *v37 = v38;
    *(_QWORD *)(v38 + 8) = v37;
    if ( (*(_BYTE *)(v8 + 10) & 8) == 0 || (unsigned __int8)RtlpCommitBlock(BaseAddress) )
    {
      v44 = *(_BYTE *)(v8 + 10);
      if ( (v44 & 4) != 0 )
      {
        v45 = 16LL * *(unsigned __int16 *)(v8 + 8) - 32;
        if ( (v44 & 2) != 0 && v45 > 4 )
          v45 = 16LL * *(unsigned __int16 *)(v8 + 8) - 36;
        v46 = RtlCompareMemoryUlong((PVOID)(v8 + 32), v45, 0xFEEEFEEE);
        if ( v46 != v45 )
        {
          if ( NtCurrentPeb()->Ldr )
            DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
          else
            DbgPrint("HEAP: ");
          DbgPrint(
            "HEAP: Free Heap block %p modified at %p after it was freed\n",
            (const void *)v8,
            (const void *)(v46 + v8 + 32));
          RtlpBreakPointHeap();
          a4 = 0;
          goto LABEL_11;
        }
      }
      goto LABEL_72;
    }
    RtlpDeCommitFreeBlock(BaseAddress);
    a4 = 0;
LABEL_11:
    v14 = *(__int64 **)(v11 + 24);
    v15 = *(_QWORD *)(v11 + 16);
    v16 = *v14;
    v17 = *(_QWORD *)(v15 + 8);
    if ( *v14 == v11 + 16 && v16 == v17 )
    {
      *((_QWORD *)BaseAddress + 24) -= *(unsigned __int16 *)(v11 + 8);
      v18 = (_QWORD *)*((_QWORD *)BaseAddress + 39);
      if ( v18 )
      {
        v19 = *(unsigned __int16 *)(v11 + 8);
        while ( 1 )
        {
          v20 = *((unsigned int *)v18 + 2);
          if ( v19 < v20 )
            break;
          a3 = (_QWORD *)*v18;
          if ( !*v18 )
          {
            LODWORD(v19) = v20 - 1;
            break;
          }
          v18 = (_QWORD *)*v18;
        }
        LOBYTE(a3) = 1;
        RtlpHeapRemoveListEntry(
          (_DWORD)BaseAddress,
          (_DWORD)v18,
          (_DWORD)a3,
          v11 + 16,
          v19,
          *(unsigned __int16 *)(v11 + 8));
      }
      *v14 = v15;
      *(_QWORD *)(v15 + 8) = v14;
      if ( (*(_BYTE *)(v11 + 10) & 8) == 0 || (unsigned __int8)RtlpCommitBlock(BaseAddress) )
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
        *(_WORD *)(v8 + 16LL * *v6 + 12) = *(_WORD *)v6 ^ *((_WORD *)BaseAddress + 70);
        return v8;
      }
      RtlpDeCommitFreeBlock(BaseAddress);
    }
    else
    {
      RtlpLogHeapFailure(13, (_DWORD)BaseAddress, v11 + 16, v17, v16, 0LL);
    }
  }
  return v8;
}
