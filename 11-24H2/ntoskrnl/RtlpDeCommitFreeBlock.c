/*
 * XREFs of RtlpDeCommitFreeBlock @ 0x1405E953C
 * Callers:
 *     RtlpFreeHeap @ 0x1405E9FB0 (RtlpFreeHeap.c)
 * Callees:
 *     DbgPrint @ 0x140274290 (DbgPrint.c)
 *     RtlpLogHeapFailure @ 0x14035B9C4 (RtlpLogHeapFailure.c)
 *     RtlpCoalesceFreeBlocks @ 0x1405E890C (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateUCREntry @ 0x1405E93F0 (RtlpCreateUCREntry.c)
 *     RtlpInsertFreeBlock @ 0x1405EA8C0 (RtlpInsertFreeBlock.c)
 *     RtlpInsertUCRBlock @ 0x1405EABE8 (RtlpInsertUCRBlock.c)
 *     RtlpRemoveUCRBlock @ 0x1405EACB0 (RtlpRemoveUCRBlock.c)
 *     RtlpUpdateHeapRates @ 0x1405EB098 (RtlpUpdateHeapRates.c)
 *     RtlpHeapHandleError @ 0x1405F056C (RtlpHeapHandleError.c)
 *     ZwFreeVirtualMemory @ 0x1406A7770 (ZwFreeVirtualMemory.c)
 */

unsigned __int64 __fastcall RtlpDeCommitFreeBlock(ULONG_PTR a1, _WORD *a2, unsigned __int64 a3)
{
  char v3; // di
  bool v4; // zf
  __int64 v5; // r14
  __int64 v6; // rbx
  char v7; // r15
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  __int64 v10; // r8
  _WORD *v11; // r13
  __int64 v12; // r14
  __int64 v13; // rsi
  _WORD *v14; // r12
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  _QWORD *i; // rcx
  _QWORD *v19; // r12
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rcx
  unsigned __int64 v24; // rcx
  ULONG_PTR v25; // rcx
  unsigned __int64 result; // rax
  char *v27; // r15
  __int64 v28; // rsi
  ULONG_PTR v29; // rsi
  bool v30; // cc
  ULONG_PTR v31; // rdx
  char *v32; // rdx
  __int64 v33; // rcx
  unsigned __int64 v34; // rcx
  ULONG_PTR v35; // rcx
  char *v36; // r15
  __int64 v37; // rsi
  ULONG_PTR v38; // rsi
  ULONG_PTR v39; // rdx
  __int64 v40; // r8
  PVOID BaseAddress; // [rsp+30h] [rbp-20h] BYREF
  __int64 v42; // [rsp+38h] [rbp-18h]
  __int64 v43; // [rsp+40h] [rbp-10h]
  unsigned __int64 v44; // [rsp+48h] [rbp-8h] BYREF
  ULONG_PTR RegionSize; // [rsp+90h] [rbp+40h] BYREF
  __int64 v46; // [rsp+A0h] [rbp+50h] BYREF

  v46 = a3;
  v3 = 0;
  v4 = RtlpHeapKey == *(_QWORD *)(a1 + 360);
  v5 = (__int64)a2;
  v6 = a1;
  v44 = 0LL;
  v42 = 0LL;
  v7 = 0;
  if ( !v4 || a3 < *(_QWORD *)(a1 + 176) )
    return RtlpInsertFreeBlock(a1, a2, a3);
  v8 = a3 + *(_QWORD *)(a1 + 192);
  if ( v8 < *(_QWORD *)(a1 + 184) || v8 < *(_QWORD *)(a1 + 576) >> (*(_BYTE *)(a1 + 696) + 4) )
  {
    a2 = (_WORD *)v5;
    goto LABEL_73;
  }
  v11 = (_WORD *)RtlpCoalesceFreeBlocks(a1, v5, &v46);
  if ( *(_BYTE *)(v5 + 14) )
  {
    v9 = (unsigned __int64)*(unsigned __int8 *)(v5 + 14) << 16;
    v12 = (v5 & 0xFFFFFFFFFFFF0000uLL) - v9 + 0x10000;
  }
  else
  {
    v12 = v6;
  }
  v13 = v46;
  v14 = &v11[8 * v46];
  if ( *((_BYTE *)v14 + 15) == 3 )
  {
    RtlpRemoveUCRBlock(v9, v14 + 8, v10, 1LL);
    v15 = *((_QWORD *)v14 + 7);
    v42 = *((_QWORD *)v14 + 6);
    v43 = v15;
    --*(_DWORD *)(v12 + 84);
    *(_DWORD *)(v12 + 80) -= *((_QWORD *)v14 + 7) >> 12;
    v16 = *(_QWORD *)(v6 + 576) + *((_QWORD *)v14 + 7);
    --*(_DWORD *)(v6 + 612);
    *(_QWORD *)(v6 + 576) = v16;
    v17 = *((_QWORD *)v14 + 7);
    if ( v17 >= 0xFF000 )
      *(_QWORD *)(v6 + 584) -= v17;
    v13 += (*((_QWORD *)v14 + 7) >> 4) + 64LL;
    v7 = 1;
    v46 = v13;
  }
  else
  {
    v43 = 0LL;
  }
  if ( *(_WORD *)(v6 + 140) != v11[6] )
  {
    v32 = (char *)(((unsigned __int64)v11 + 4159) & 0xFFFFFFFFFFFFF000uLL);
    BaseAddress = v32;
    if ( v32 == (char *)(v11 + 40) )
    {
      v32 += 4096;
      BaseAddress = v32;
    }
    v33 = 8 * v13;
    if ( !v7 )
      v33 -= 16LL;
    v34 = (unsigned __int64)&v11[v33] & 0xFFFFFFFFFFFFF000uLL;
    if ( v34 < (unsigned __int64)v32 )
    {
      if ( RtlpHeapErrorHandlerThreshold >= 1 && v7 )
      {
        DbgPrint("(!TrailingUCR)");
        RtlpHeapHandleError();
      }
      goto LABEL_26;
    }
    v35 = v34 - (_QWORD)v32;
    RegionSize = v35;
    if ( *((_BYTE *)v14 + 15) == 3 )
    {
      if ( !v35 )
        goto LABEL_57;
    }
    else if ( !v35 || v35 < *(_QWORD *)(v6 + 176) )
    {
LABEL_26:
      a3 = v13;
LABEL_27:
      a2 = v11;
LABEL_73:
      a1 = v6;
      return RtlpInsertFreeBlock(a1, a2, a3);
    }
    ++*(_DWORD *)(v6 + 620);
    if ( ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x4000u) < 0 )
      goto LABEL_29;
LABEL_57:
    if ( !v7 )
    {
      v36 = (char *)BaseAddress + RegionSize;
      v37 = 8 * v13;
      *(_WORD *)((char *)BaseAddress + RegionSize + 12) = *(_WORD *)(v6 + 140);
      if ( &v11[v37] == (_WORD *)((char *)BaseAddress + RegionSize) )
      {
        if ( *(_DWORD *)(v6 + 124) )
        {
          v36[11] = v36[8] ^ v36[9] ^ v36[10];
          *((_DWORD *)v36 + 2) ^= *(_DWORD *)(v6 + 136);
        }
      }
      else
      {
        v36[15] = 0;
        v36[10] = 0;
        v38 = ((unsigned __int64)v11 + v37 * 2 - RegionSize - (_QWORD)BaseAddress) >> 4;
        v30 = RtlpHeapErrorHandlerThreshold < 1;
        *((_WORD *)v36 + 4) = v38;
        if ( !v30 && (unsigned __int16)v38 <= 1u )
        {
          DbgPrint("(LONG)FreeEntry->Size > 1");
          RtlpHeapHandleError();
        }
        v36[11] = 0;
        v39 = *(_QWORD *)(v12 + 40);
        if ( v39 != v12 )
        {
          if ( ((unsigned __int64)&v36[-v12] >> 16) + 1 >= 0xFE )
            RtlpLogHeapFailure(3, v39, (ULONG_PTR)v36, v12, 0LL, 0LL);
          v3 = ((unsigned int)((_DWORD)v36 - v12) >> 16) + 1;
        }
        v40 = *((unsigned __int16 *)v36 + 4);
        v36[14] = v3;
        RtlpInsertFreeBlock(v6, v36, v40);
      }
    }
    RtlpCreateUCREntry(v6, v12, (__int64)BaseAddress - 48, RegionSize, (unsigned __int64)v11, (__int64 *)&v44);
    a3 = v44;
    goto LABEL_27;
  }
  BaseAddress = v11;
  for ( i = *(_QWORD **)(v12 + 96); (_QWORD *)(v12 + 96) != i; i = (_QWORD *)*i )
  {
    v19 = i - 2;
    if ( (_WORD *)(i[2] + i[3]) == v11 )
      goto LABEL_19;
  }
  v19 = 0LL;
LABEL_19:
  if ( RtlpHeapErrorHandlerThreshold >= 1 && !v19 )
  {
    DbgPrint("(UCRBlock != NULL)");
    RtlpHeapHandleError();
  }
  v20 = 8 * v13;
  if ( !v7 )
    v20 -= 16LL;
  RegionSize = ((unsigned __int64)&v11[v20] & 0xFFFFFFFFFFFFF000uLL) - (_QWORD)v11;
  if ( !RegionSize )
  {
    if ( RtlpHeapErrorHandlerThreshold >= 1 )
    {
      if ( v7 )
      {
        DbgPrint("(!TrailingUCR)");
        RtlpHeapHandleError();
      }
    }
    goto LABEL_26;
  }
  if ( ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x4000u) < 0 )
  {
LABEL_29:
    RtlpUpdateHeapRates(v6, 3LL);
    if ( v7 )
    {
      RtlpCreateUCREntry(v23, v12, v42 - 48, v43, (unsigned __int64)v11, &v46);
      v13 = v46;
    }
    goto LABEL_26;
  }
  ++*(_DWORD *)(v6 + 620);
  v24 = v19[5];
  if ( v24 >= 0xFF000 )
    *(_QWORD *)(v6 + 584) -= v24;
  RtlpRemoveUCRBlock(v24, v19, v21, v22);
  v19[5] += RegionSize;
  RtlpInsertUCRBlock(v6, v19);
  *(_DWORD *)(v12 + 80) += RegionSize >> 12;
  v25 = RegionSize;
  *(_QWORD *)(v6 + 576) -= RegionSize;
  result = v19[5];
  if ( result >= 0xFF000 )
    *(_QWORD *)(v6 + 584) += result;
  if ( !v7 )
  {
    result = *(unsigned __int16 *)(v6 + 140);
    v27 = (char *)BaseAddress + v25;
    v28 = 8 * v13;
    *(_WORD *)((char *)BaseAddress + v25 + 12) = result;
    if ( &v11[v28] != (_WORD *)((char *)BaseAddress + RegionSize) )
    {
      v27[15] = 0;
      v27[10] = 0;
      v29 = (v28 * 2 - RegionSize) >> 4;
      v30 = RtlpHeapErrorHandlerThreshold < 1;
      *((_WORD *)v27 + 4) = v29;
      if ( !v30 && (unsigned __int16)v29 <= 1u )
      {
        DbgPrint("((LONG)FreeEntry->Size > 1)");
        RtlpHeapHandleError();
      }
      v27[11] = 0;
      v31 = *(_QWORD *)(v12 + 40);
      if ( v31 != v12 )
      {
        if ( ((unsigned __int64)&v27[-v12] >> 16) + 1 >= 0xFE )
          RtlpLogHeapFailure(3, v31, (ULONG_PTR)v27, v12, 0LL, 0LL);
        v3 = ((unsigned int)((_DWORD)v27 - v12) >> 16) + 1;
      }
      a3 = *((unsigned __int16 *)v27 + 4);
      a2 = v27;
      v27[14] = v3;
      goto LABEL_73;
    }
    if ( *(_DWORD *)(v6 + 124) )
    {
      v27[11] = v27[8] ^ v27[9] ^ v27[10];
      result = *(unsigned int *)(v6 + 136);
      *((_DWORD *)v27 + 2) ^= result;
    }
  }
  return result;
}
