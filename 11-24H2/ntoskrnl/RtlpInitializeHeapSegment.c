/*
 * XREFs of RtlpInitializeHeapSegment @ 0x1405ED010
 * Callers:
 *     RtlpCreateHeap @ 0x1404D7334 (RtlpCreateHeap.c)
 *     RtlpExtendHeap @ 0x1405EC560 (RtlpExtendHeap.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x1402B2E04 (RtlpLogHeapFailure.c)
 *     RtlpHpHeapCheckCommitLimit @ 0x14045135C (RtlpHpHeapCheckCommitLimit.c)
 *     RtlpCreateUCREntry @ 0x1405EBE80 (RtlpCreateUCREntry.c)
 *     RtlpInsertFreeBlock @ 0x1405ED2D8 (RtlpInsertFreeBlock.c)
 *     ZwAllocateVirtualMemory @ 0x1406A6710 (ZwAllocateVirtualMemory.c)
 */

char __fastcall RtlpInitializeHeapSegment(
        ULONG_PTR a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        char *BaseAddress,
        unsigned __int64 a8)
{
  unsigned __int64 v8; // rdi
  __int64 v10; // rax
  __int64 v12; // r14
  char *v13; // r8
  signed __int64 v14; // r14
  int v15; // r9d
  ULONG_PTR v16; // rbp
  unsigned __int64 v17; // rcx
  __int64 v18; // rdx
  __int128 v19; // rax
  _BYTE *v20; // rdi
  _BYTE *v21; // r15
  __int64 v22; // r12
  __int16 v23; // cx
  __int64 v24; // rcx
  ULONG_PTR v25; // rdx
  unsigned __int64 v26; // r14
  ULONG_PTR v28; // r8
  ULONG_PTR *v29; // rsi
  __int64 *v30; // rax
  ULONG_PTR RegionSize[2]; // [rsp+30h] [rbp-38h] BYREF

  v8 = a8;
  RegionSize[0] = 0LL;
  v10 = a8 - a6;
  if ( a8 - a6 > 0xFFFFF000 )
    return 0;
  v12 = a3 + 15;
  v13 = BaseAddress;
  v14 = v12 & 0xFFFFFFFFFFFFFFF0uLL;
  a8 = v10 / 4096;
  v15 = v10 / 4096;
  v16 = v14 + a2;
  v17 = v14 + a2 + 80;
  if ( v17 >= (unsigned __int64)BaseAddress )
  {
    if ( v17 < v8 )
    {
      v18 = *(_QWORD *)(a1 + 576) - *(_QWORD *)(a1 + 664);
      RegionSize[0] = (v16 - (_QWORD)BaseAddress + 4111) & 0xFFFFFFFFFFFFF000uLL;
      if ( (unsigned int)RtlpHpHeapCheckCommitLimit(RegionSize[0], v18, a1, (unsigned __int64 *)(a1 + 376))
        && ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)&BaseAddress, 0LL, RegionSize, 0x1000u, 4u) >= 0 )
      {
        v13 = &BaseAddress[RegionSize[0]];
        v15 = a8;
        BaseAddress += RegionSize[0];
        goto LABEL_7;
      }
      ++*(_DWORD *)(a1 + 632);
    }
    return 0;
  }
LABEL_7:
  *(_BYTE *)(a2 + 10) = 1;
  *(_BYTE *)(a2 + 15) = 1;
  v19 = (__int64)(v8 - (_QWORD)v13);
  v20 = (_BYTE *)(a2 + 8);
  *(_WORD *)(a2 + 8) = v14 >> 4;
  v21 = (_BYTE *)(a2 + 11);
  *(_BYTE *)(a2 + 11) = 0;
  v22 = v19 / 4096;
  v23 = *(_WORD *)(a1 + 140);
  *(_DWORD *)(a2 + 20) = a5;
  *(_WORD *)(a2 + 12) = v23;
  *(_QWORD *)(a2 + 40) = a1;
  *(_DWORD *)(a2 + 16) = -1114130;
  *(_QWORD *)(a2 + 48) = a6;
  *(_QWORD *)(a2 + 64) = v16;
  *(_DWORD *)(a2 + 56) = v15;
  *(_DWORD *)(a2 + 80) = 0;
  v24 = (unsigned int)(v15 << 12);
  *(_QWORD *)(a2 + 72) = a6 + v24;
  *(_QWORD *)(a1 + 576) += v24;
  *(_QWORD *)(a1 + 568) += v24;
  *(_QWORD *)(a2 + 104) = a2 + 96;
  *(_QWORD *)(a2 + 96) = a2 + 96;
  *(_BYTE *)(a2 + 14) = *(_QWORD *)(a2 + 40) != a2;
  *(_WORD *)(v16 + 12) = *(_WORD *)(a2 + 8) ^ *(_WORD *)(a1 + 140);
  v25 = *(_QWORD *)(a2 + 40);
  if ( v25 == a2 )
  {
    LOBYTE(v26) = 0;
  }
  else
  {
    v26 = ((unsigned __int64)v14 >> 16) + 1;
    if ( v26 >= 0xFE )
    {
      RtlpLogHeapFailure(3, v25, v16, a2, 0LL, 0LL);
      v13 = BaseAddress;
      v20 = (_BYTE *)(a2 + 8);
      v21 = (_BYTE *)(a2 + 11);
    }
  }
  *(_BYTE *)(v16 + 14) = v26;
  RtlpCreateUCREntry(a1, a2, (__int64)(v13 - 48), (unsigned int)((_DWORD)v22 << 12), v16, (__int64 *)RegionSize);
  if ( *(_DWORD *)(a1 + 124) )
  {
    *v21 = *v20 ^ v20[1] ^ v20[2];
    *(_DWORD *)v20 ^= *(_DWORD *)(a1 + 136);
  }
  if ( RegionSize[0] )
    RtlpInsertFreeBlock(a1, v16, RegionSize[0]);
  v28 = a1 + 288;
  v29 = (ULONG_PTR *)(a2 + 24);
  v30 = *(__int64 **)(a1 + 296);
  if ( *v30 == a1 + 288 )
  {
    *v29 = v28;
    v29[1] = (ULONG_PTR)v30;
    *v30 = (__int64)v29;
    *(_QWORD *)(a1 + 296) = v29;
  }
  else
  {
    RtlpLogHeapFailure(13, 0LL, v28, 0LL, *v30, 0LL);
  }
  ++*(_DWORD *)(a1 + 600);
  return 1;
}
