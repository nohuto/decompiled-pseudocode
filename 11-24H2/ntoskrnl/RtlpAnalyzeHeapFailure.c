/*
 * XREFs of RtlpAnalyzeHeapFailure @ 0x1405F025C
 * Callers:
 *     RtlpAllocateHeap @ 0x1405E7EFC (RtlpAllocateHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x1405E890C (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateSplitBlock @ 0x1405E8CD0 (RtlpCreateSplitBlock.c)
 *     RtlpExtendHeap @ 0x1405E9AF4 (RtlpExtendHeap.c)
 *     RtlpFindAndCommitPages @ 0x1405E9D48 (RtlpFindAndCommitPages.c)
 *     RtlpFreeHeap @ 0x1405E9FB0 (RtlpFreeHeap.c)
 *     RtlpSetupExtendedBlock @ 0x1405EAD40 (RtlpSetupExtendedBlock.c)
 *     RtlpPopulateListIndex @ 0x1405F0F44 (RtlpPopulateListIndex.c)
 *     RtlZeroHeap @ 0x1407831B0 (RtlZeroHeap.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x14035B9C4 (RtlpLogHeapFailure.c)
 *     RtlpHeapExceptionFilter @ 0x1405EFF10 (RtlpHeapExceptionFilter.c)
 */

void __fastcall RtlpAnalyzeHeapFailure(ULONG_PTR a1, ULONG_PTR a2)
{
  unsigned __int64 v4; // r9
  unsigned int v5; // r8d
  __int64 v6; // rax
  char v7; // al
  _QWORD **v9; // rdx
  unsigned __int64 v10; // rdi
  _QWORD **v11; // rax
  _QWORD **v12; // rdx
  _QWORD **v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  ULONG_PTR v16; // rax
  int v17; // ecx
  __int16 v18; // dx
  __int64 v19; // rax
  int v20; // ecx
  __int64 v21; // r9
  unsigned __int64 v22; // [rsp+38h] [rbp-20h]
  int v23; // [rsp+48h] [rbp-10h]

  v4 = 0LL;
  v5 = 0;
  if ( (*(_DWORD *)(a1 + 124) & *(_DWORD *)(a2 + 8)) != 0 )
    goto LABEL_33;
  v5 = 10;
  if ( (*(_DWORD *)(a1 + 112) & 0x4000000) == 0
    && *(_BYTE *)(a2 + 11) != (*(_BYTE *)(a2 + 8) ^ (unsigned __int8)(*(_BYTE *)(a2 + 9) ^ *(_BYTE *)(a2 + 10))) )
  {
    goto LABEL_33;
  }
  v5 = 1;
  v6 = *(unsigned __int8 *)(a2 + 14);
  if ( (_BYTE)v6 )
  {
    v4 = (a2 & 0xFFFFFFFFFFFF0000uLL) + ((1 - v6) << 16);
    v22 = v4;
  }
  else
  {
    v4 = a1;
    v22 = a1;
  }
  if ( *(_DWORD *)(v4 + 16) != -1114130 )
    goto LABEL_33;
  v7 = *(_BYTE *)(a2 + 15);
  if ( v7 != 4 )
  {
    v5 = 2;
    if ( a2 < *(_QWORD *)(v4 + 48) || a2 >= *(_QWORD *)(v4 + 72) || *(_QWORD *)(v4 + 40) != a1 )
      goto LABEL_33;
  }
  v5 = 3;
  if ( v7 == 3 )
  {
    v9 = (_QWORD **)(a2 + 16);
    v10 = *(_QWORD *)(a2 + 48);
    if ( (v10 & 0xFFF) != 0 )
      goto LABEL_33;
    if ( v10 < *(_QWORD *)(v4 + 48) )
      goto LABEL_33;
    if ( v10 + *(_QWORD *)(a2 + 56) > *(_QWORD *)(v4 + 72) )
      goto LABEL_33;
    v5 = 4;
    v11 = **(_QWORD ****)(a2 + 24);
    if ( v11 != (_QWORD **)(*v9)[1] )
      goto LABEL_33;
    if ( v11 != v9 )
      goto LABEL_33;
    v5 = 5;
    v12 = v9 + 2;
    v13 = (_QWORD **)*v12[1];
    if ( v13 != (_QWORD **)(*v12)[1] || v13 != v12 )
      goto LABEL_33;
  }
  else
  {
    v5 = 6;
    if ( (*(_WORD *)(a1 + 140) ^ *(_WORD *)(a2 + 16LL * *(unsigned __int16 *)(a2 + 8) + 12)) != *(_WORD *)(a2 + 8) )
      goto LABEL_33;
  }
  v5 = 7;
  v14 = *(unsigned __int16 *)(a1 + 140);
  v15 = *(unsigned __int16 *)(a2 + 12);
  if ( (_WORD)v14 == (_WORD)v15 )
    goto LABEL_29;
  v16 = a2 - 16 * (v14 ^ v15);
  if ( *(_DWORD *)(a1 + 124) )
  {
    v17 = *(_DWORD *)(v16 + 8);
    LOWORD(v23) = v17;
    if ( (v17 & *(_DWORD *)(a1 + 124)) != 0 )
      v23 = *(_DWORD *)(a1 + 136) ^ v17;
    v18 = v23;
    v4 = v22;
    v5 = 7;
  }
  else
  {
    v18 = *(_WORD *)(v16 + 8);
  }
  if ( v18 == (*(_WORD *)(a2 + 12) ^ *(_WORD *)(a1 + 140)) )
  {
LABEL_29:
    v5 = 8;
    if ( (*(_BYTE *)(a2 + 10) & 1) != 0
      || (v19 = **(_QWORD **)(a2 + 24), v19 == *(_QWORD *)(*(_QWORD *)(a2 + 16) + 8LL)) && v19 == a2 + 16 )
    {
      v5 = 9;
    }
  }
LABEL_33:
  if ( *(_DWORD *)(a1 + 124) )
  {
    *(_BYTE *)(a2 + 11) = *(_BYTE *)(a2 + 8) ^ *(_BYTE *)(a2 + 9) ^ *(_BYTE *)(a2 + 10);
    *(_DWORD *)(a2 + 8) ^= *(_DWORD *)(a1 + 136);
  }
  if ( v5 > 5 )
  {
    if ( v5 != 6 && v5 != 7 )
    {
      if ( v5 == 8 )
      {
        v20 = 13;
        goto LABEL_50;
      }
      if ( v5 != 10 )
      {
        v20 = 2;
        goto LABEL_50;
      }
    }
    goto LABEL_49;
  }
  if ( v5 == 5 )
    goto LABEL_40;
  if ( v5 < 2 )
  {
LABEL_49:
    v20 = 3;
    goto LABEL_50;
  }
  if ( v5 != 2 )
  {
    if ( v5 == 3 )
    {
      v20 = 0;
      goto LABEL_50;
    }
LABEL_40:
    v20 = 14;
LABEL_50:
    v21 = v5;
    goto LABEL_51;
  }
  v21 = *(_QWORD *)(v4 + 40);
  v20 = 12;
LABEL_51:
  RtlpLogHeapFailure(v20, a1, a2, v21, 0LL, 0LL);
}
