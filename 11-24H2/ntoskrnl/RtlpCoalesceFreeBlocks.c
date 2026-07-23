/*
 * XREFs of RtlpCoalesceFreeBlocks @ 0x1405E890C
 * Callers:
 *     RtlpDeCommitFreeBlock @ 0x1405E953C (RtlpDeCommitFreeBlock.c)
 *     RtlpExtendHeap @ 0x1405E9AF4 (RtlpExtendHeap.c)
 *     RtlpFreeHeap @ 0x1405E9FB0 (RtlpFreeHeap.c)
 * Callees:
 *     DbgPrint @ 0x140274290 (DbgPrint.c)
 *     RtlpLogHeapFailure @ 0x14035B9C4 (RtlpLogHeapFailure.c)
 *     RtlpAnalyzeHeapFailure @ 0x1405F025C (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapRemoveListEntry @ 0x1405F0E50 (RtlpHeapRemoveListEntry.c)
 *     RtlCompareMemoryUlong @ 0x1406B49B0 (RtlCompareMemoryUlong.c)
 */

__int64 __fastcall RtlpCoalesceFreeBlocks(ULONG_PTR a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // rbp
  unsigned __int64 v5; // r9
  __int64 v7; // rbx
  unsigned int v8; // ecx
  __int64 *v9; // r15
  ULONG_PTR v10; // r8
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // r9
  __int64 **v14; // rdx
  unsigned __int64 v15; // rcx
  int v16; // ecx
  char v17; // al
  SIZE_T v18; // rsi
  SIZE_T v19; // rax
  __int64 v20; // rax
  ULONG_PTR v21; // rbx
  int v22; // edx
  __int64 *v23; // r15
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // r9
  __int64 **v27; // rdx
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // r8
  char v30; // al
  SIZE_T v31; // rsi
  SIZE_T v32; // rax

  v4 = a2;
  v5 = 16 * (*(unsigned __int16 *)(a1 + 140) ^ (unsigned __int64)*(unsigned __int16 *)(a2 + 12));
  v7 = a2 - v5;
  if ( a2 - v5 != a2 )
  {
    v8 = *(_DWORD *)(a1 + 124);
    if ( ((*(_BYTE *)(v7 + 10) ^ *(_BYTE *)(a1 + 138) & (v8 >> 20)) & 1) == 0 )
    {
      if ( v8 )
      {
        *(_DWORD *)(v7 + 8) ^= *(_DWORD *)(a1 + 136);
        if ( *(_BYTE *)(v7 + 11) != (*(_BYTE *)(v7 + 8) ^ (unsigned __int8)(*(_BYTE *)(v7 + 9) ^ *(_BYTE *)(v7 + 10))) )
          RtlpAnalyzeHeapFailure(a1, a2 - v5);
      }
      v9 = *(__int64 **)(v7 + 24);
      v10 = v7 + 16;
      v11 = *(_QWORD *)(v7 + 16);
      v12 = *v9;
      v13 = *(_QWORD *)(v11 + 8);
      if ( *v9 == v13 && v12 == v10 )
      {
        *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v7 + 8);
        v14 = *(__int64 ***)(a1 + 312);
        if ( v14 )
        {
          while ( 1 )
          {
            v15 = *((unsigned int *)v14 + 2);
            if ( *(unsigned __int16 *)(v7 + 8) < v15 )
              break;
            if ( !*v14 )
            {
              v16 = v15 - 1;
              goto LABEL_14;
            }
            v14 = (__int64 **)*v14;
          }
          v16 = *(unsigned __int16 *)(v7 + 8);
LABEL_14:
          LOBYTE(v10) = 1;
          RtlpHeapRemoveListEntry(a1, (_DWORD)v14, v10, v7 + 16, v16, *(unsigned __int16 *)(v7 + 8));
        }
        *v9 = v11;
        *(_QWORD *)(v11 + 8) = v9;
        v17 = *(_BYTE *)(v7 + 10);
        if ( (v17 & 4) != 0 )
        {
          v18 = 16LL * *(unsigned __int16 *)(v7 + 8) - 32;
          if ( (v17 & 2) != 0 && v18 > 4 )
            v18 = 16LL * *(unsigned __int16 *)(v7 + 8) - 36;
          v19 = RtlCompareMemoryUlong((PVOID)(v7 + 32), v18, 0xFEEEFEEE);
          if ( v19 != v18 )
          {
            DbgPrint(
              "HEAP: Free Heap block %p modified at %p after it was freed\n",
              (const void *)v7,
              (const void *)(v19 + v7 + 32));
            if ( (_BYTE)KdDebuggerEnabled )
              __debugbreak();
          }
        }
        v20 = *(unsigned __int16 *)(v7 + 8);
        v4 = v7;
        *(_BYTE *)(v7 + 10) = 0;
        *(_BYTE *)(v7 + 15) = 0;
        *a3 += v20;
        *(_WORD *)(v7 + 8) = *(_WORD *)a3;
        *(_WORD *)(v7 + 16LL * *a3 + 12) = *(_WORD *)a3 ^ *(_WORD *)(a1 + 140);
      }
      else
      {
        RtlpLogHeapFailure(13, a1, v10, v13, v12, 0LL);
      }
    }
  }
  v21 = v4 + 16LL * *a3;
  if ( *(_DWORD *)(a1 + 124) )
  {
    v22 = *(_DWORD *)(a1 + 136) ^ *(_DWORD *)(v21 + 8);
    if ( HIBYTE(v22) != ((unsigned __int8)v22 ^ (unsigned __int8)(((unsigned __int16)(*(_WORD *)(a1 + 136) ^ *(_WORD *)(v21 + 8)) >> 8) ^ BYTE2(v22))) )
      RtlpLogHeapFailure(3, a1, v21, 0LL, 0LL, 0LL);
  }
  while ( ((*(_BYTE *)(v21 + 10) ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 20))) & 1) == 0 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(v21 + 8) ^= *(_DWORD *)(a1 + 136);
      if ( *(_BYTE *)(v21 + 11) != (*(_BYTE *)(v21 + 8) ^ (unsigned __int8)(*(_BYTE *)(v21 + 9) ^ *(_BYTE *)(v21 + 10))) )
        RtlpAnalyzeHeapFailure(a1, v21);
    }
    v23 = *(__int64 **)(v21 + 24);
    v24 = *(_QWORD *)(v21 + 16);
    v25 = *v23;
    v26 = *(_QWORD *)(v24 + 8);
    if ( *v23 == v26 && v25 == v21 + 16 )
    {
      *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v21 + 8);
      v27 = *(__int64 ***)(a1 + 312);
      if ( v27 )
      {
        v28 = *(unsigned __int16 *)(v21 + 8);
        while ( 1 )
        {
          v29 = *((unsigned int *)v27 + 2);
          if ( v28 < v29 )
            break;
          if ( !*v27 )
          {
            LODWORD(v28) = v29 - 1;
            break;
          }
          v27 = (__int64 **)*v27;
        }
        LOBYTE(v29) = 1;
        RtlpHeapRemoveListEntry(a1, (_DWORD)v27, v29, v21 + 16, v28, *(unsigned __int16 *)(v21 + 8));
      }
      *v23 = v24;
      *(_QWORD *)(v24 + 8) = v23;
      v30 = *(_BYTE *)(v21 + 10);
      if ( (v30 & 4) != 0 )
      {
        v31 = 16LL * *(unsigned __int16 *)(v21 + 8) - 32;
        if ( (v30 & 2) != 0 && v31 > 4 )
          v31 = 16LL * *(unsigned __int16 *)(v21 + 8) - 36;
        v32 = RtlCompareMemoryUlong((PVOID)(v21 + 32), v31, 0xFEEEFEEE);
        if ( v32 != v31 )
        {
          DbgPrint(
            "HEAP: Free Heap block %p modified at %p after it was freed\n",
            (const void *)v21,
            (const void *)(v21 + v32 + 32));
          if ( (_BYTE)KdDebuggerEnabled )
            __debugbreak();
        }
      }
      *(_BYTE *)(v4 + 10) = 0;
      *(_BYTE *)(v4 + 15) = 0;
      *a3 += *(unsigned __int16 *)(v21 + 8);
      *(_WORD *)(v4 + 8) = *(_WORD *)a3;
      *(_WORD *)(v4 + 16LL * *a3 + 12) = *(_WORD *)a3 ^ *(_WORD *)(a1 + 140);
      return v4;
    }
    RtlpLogHeapFailure(13, a1, v21 + 16, v26, v25, 0LL);
  }
  return v4;
}
