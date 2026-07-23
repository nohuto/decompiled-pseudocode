/*
 * XREFs of RtlpCoalesceHeap @ 0x180106F80
 * Callers:
 *     RtlpExtendHeap @ 0x18000CB60 (RtlpExtendHeap.c)
 *     RtlCompactHeap @ 0x180106E40 (RtlCompactHeap.c)
 * Callees:
 *     RtlpCoalesceFreeBlocks @ 0x18000EB10 (RtlpCoalesceFreeBlocks.c)
 *     RtlpAnalyzeHeapFailure @ 0x18000F2D0 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapRemoveListEntry @ 0x18000F610 (RtlpHeapRemoveListEntry.c)
 *     RtlpInsertFreeBlock @ 0x18000FC70 (RtlpInsertFreeBlock.c)
 *     RtlpCommitBlock @ 0x180010480 (RtlpCommitBlock.c)
 *     RtlpDeCommitFreeBlock @ 0x180010840 (RtlpDeCommitFreeBlock.c)
 *     RtlpLogHeapFailure @ 0x180056D80 (RtlpLogHeapFailure.c)
 */

unsigned __int64 __fastcall RtlpCoalesceHeap(_QWORD *BaseAddress)
{
  __int64 *v1; // rbp
  unsigned __int64 v2; // rdi
  __int64 *v3; // r14
  __int64 v5; // rsi
  __int64 *v6; // r10
  __int64 *v7; // r12
  bool v8; // zf
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rdx
  __int64 *v14; // r13
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  unsigned int v19; // ecx
  unsigned __int64 v20; // [rsp+60h] [rbp+8h] BYREF

  v1 = BaseAddress + 42;
  v2 = 0LL;
  v3 = (__int64 *)BaseAddress[43];
  if ( BaseAddress + 42 == v3 )
    return v2;
  do
  {
    v5 = (__int64)(v3 - 2);
    v6 = v3;
    v7 = v3;
    if ( *((_DWORD *)BaseAddress + 31) )
    {
      *(_DWORD *)(v5 + 8) ^= *((_DWORD *)BaseAddress + 34);
      if ( *(_BYTE *)(v5 + 11) != (*(_BYTE *)(v5 + 8) ^ (unsigned __int8)(*(_BYTE *)(v5 + 9) ^ *(_BYTE *)(v5 + 10))) )
      {
        RtlpAnalyzeHeapFailure((unsigned __int64)BaseAddress, (unsigned __int64)(v3 - 2));
        v6 = v3;
      }
    }
    v8 = (*(_BYTE *)(v5 + 10) & 8) == 0;
    v9 = *(unsigned __int16 *)(v5 + 8);
    v3 = (__int64 *)*v3;
    v20 = v9;
    if ( !v8 )
    {
      v14 = *(__int64 **)(v5 + 24);
      v15 = v3[1];
      v16 = *v14;
      if ( (__int64 *)*v14 != v7 || v16 != v15 )
      {
        RtlpLogHeapFailure(13, (__int64)BaseAddress, (__int64)v6, v15, v16, 0LL);
        goto LABEL_29;
      }
      BaseAddress[24] -= v9;
      v17 = BaseAddress[39];
      if ( v17 )
      {
        while ( 1 )
        {
          v18 = *(unsigned int *)(v17 + 8);
          if ( *(unsigned __int16 *)(v5 + 8) < v18 )
          {
            v19 = *(unsigned __int16 *)(v5 + 8);
            goto LABEL_24;
          }
          if ( !*(_QWORD *)v17 )
            break;
          v17 = *(_QWORD *)v17;
        }
        v19 = v18 - 1;
LABEL_24:
        RtlpHeapRemoveListEntry((__int64)BaseAddress, v17, 1, v6, v19, *(unsigned __int16 *)(v5 + 8));
      }
      *v14 = (__int64)v3;
      v3[1] = (__int64)v14;
      if ( (*(_BYTE *)(v5 + 10) & 8) != 0 )
        RtlpCommitBlock(BaseAddress, v5);
      v11 = *(unsigned __int16 *)(v5 + 8);
      v12 = v5;
      goto LABEL_28;
    }
    v10 = RtlpCoalesceFreeBlocks(BaseAddress, v5, &v20, 1);
    v11 = v20;
    v12 = v10;
    if ( v20 != v9 )
    {
      if ( v10 != v5 && (*(_WORD *)(v10 + 8) < 0x100u || *((_WORD *)BaseAddress + 70) != *(_WORD *)(v10 + 12)) )
      {
        RtlpInsertFreeBlock((unsigned __int64)BaseAddress, v10, v20);
        goto LABEL_29;
      }
LABEL_28:
      RtlpDeCommitFreeBlock(BaseAddress, v12, v11, 1);
LABEL_29:
      v3 = (__int64 *)v1[1];
      continue;
    }
    if ( !v2 || *(_WORD *)(v2 + 8) < *(_WORD *)(v10 + 8) )
      v2 = v10;
    if ( *((_DWORD *)BaseAddress + 31) )
    {
      *(_BYTE *)(v10 + 11) = *(_BYTE *)(v10 + 8) ^ *(_BYTE *)(v10 + 9) ^ *(_BYTE *)(v10 + 10);
      *(_DWORD *)(v10 + 8) ^= *((_DWORD *)BaseAddress + 34);
    }
  }
  while ( v1 != v3 );
  if ( v2 )
  {
    if ( *((_DWORD *)BaseAddress + 31) )
    {
      *(_DWORD *)(v2 + 8) ^= *((_DWORD *)BaseAddress + 34);
      if ( *(_BYTE *)(v2 + 11) != (*(_BYTE *)(v2 + 8) ^ (unsigned __int8)(*(_BYTE *)(v2 + 9) ^ *(_BYTE *)(v2 + 10))) )
        RtlpAnalyzeHeapFailure((unsigned __int64)BaseAddress, v2);
    }
  }
  return v2;
}
