/*
 * XREFs of RtlpInitializeHeapSegment @ 0x1405EA5CC
 * Callers:
 *     RtlpCreateHeap @ 0x1404D0784 (RtlpCreateHeap.c)
 *     RtlpExtendHeap @ 0x1405E9AF4 (RtlpExtendHeap.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x14035B9C4 (RtlpLogHeapFailure.c)
 *     RtlpHpHeapCheckCommitLimit @ 0x1404467BC (RtlpHpHeapCheckCommitLimit.c)
 *     RtlpCreateUCREntry @ 0x1405E93F0 (RtlpCreateUCREntry.c)
 *     RtlpInsertFreeBlock @ 0x1405EA8C0 (RtlpInsertFreeBlock.c)
 *     ZwAllocateVirtualMemory @ 0x1406A76B0 (ZwAllocateVirtualMemory.c)
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
  unsigned __int64 v8; // rsi
  __int64 v11; // rax
  __int64 v12; // r14
  char *v13; // r8
  signed __int64 v14; // r14
  ULONG_PTR v15; // rbp
  unsigned __int64 v16; // rcx
  int v17; // r10d
  __int64 v18; // rdx
  __int128 v19; // rax
  _BYTE *v20; // rsi
  int v21; // r12d
  _BYTE *v22; // r15
  __int16 v23; // cx
  ULONG_PTR v24; // rdx
  unsigned __int64 v25; // r14
  ULONG_PTR v27; // r8
  ULONG_PTR *v28; // rdi
  __int64 *v29; // rax
  ULONG_PTR RegionSize[2]; // [rsp+30h] [rbp-38h] BYREF

  v8 = a8;
  RegionSize[0] = 0LL;
  v11 = a8 - a6;
  if ( a8 - a6 > 0xFFFFF000 )
    return 0;
  v12 = a3 + 15;
  v13 = BaseAddress;
  v14 = v12 & 0xFFFFFFFFFFFFFFF0uLL;
  v15 = v14 + a2;
  v16 = v14 + a2 + 80;
  a8 = v11 / 4096;
  v17 = v11 / 4096;
  if ( v16 >= (unsigned __int64)BaseAddress )
  {
    if ( v16 < v8 )
    {
      v18 = *(_QWORD *)(a1 + 576) - *(_QWORD *)(a1 + 672);
      RegionSize[0] = (v15 - (_QWORD)BaseAddress + 4111) & 0xFFFFFFFFFFFFF000uLL;
      if ( (unsigned int)RtlpHpHeapCheckCommitLimit(RegionSize[0], v18, a1, (unsigned __int64 *)(a1 + 376))
        && ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)&BaseAddress, 0LL, RegionSize, 0x1000u, 4u) >= 0 )
      {
        v13 = &BaseAddress[RegionSize[0]];
        v17 = a8;
        BaseAddress += RegionSize[0];
        goto LABEL_7;
      }
      ++*(_DWORD *)(a1 + 640);
    }
    return 0;
  }
LABEL_7:
  *(_BYTE *)(a2 + 10) = 1;
  *(_BYTE *)(a2 + 15) = 1;
  v19 = (__int64)(v8 - (_QWORD)v13);
  v20 = (_BYTE *)(a2 + 8);
  *(_WORD *)(a2 + 8) = v14 >> 4;
  v21 = v19 + (WORD4(v19) & 0xFFF);
  v22 = (_BYTE *)(a2 + 11);
  *(_BYTE *)(a2 + 11) = 0;
  v23 = *(_WORD *)(a1 + 140);
  *(_DWORD *)(a2 + 20) = a5;
  *(_QWORD *)(a2 + 40) = a1;
  *(_WORD *)(a2 + 12) = v23;
  *(_DWORD *)(a2 + 16) = -1114130;
  *(_QWORD *)(a2 + 48) = a6;
  *(_QWORD *)(a2 + 64) = v15;
  *(_DWORD *)(a2 + 56) = v17;
  *(_DWORD *)(a2 + 80) = 0;
  *((_QWORD *)&v19 + 1) = (unsigned int)(v17 << 12);
  *(_QWORD *)(a2 + 72) = a6 + *((_QWORD *)&v19 + 1);
  *(_QWORD *)(a1 + 576) += *((_QWORD *)&v19 + 1);
  *(_QWORD *)(a1 + 568) += *((_QWORD *)&v19 + 1);
  *(_QWORD *)(a2 + 104) = a2 + 96;
  *(_QWORD *)(a2 + 96) = a2 + 96;
  *(_BYTE *)(a2 + 14) = *(_QWORD *)(a2 + 40) != a2;
  *(_WORD *)(v15 + 12) = *(_WORD *)(a1 + 140) ^ *(_WORD *)(a2 + 8);
  v24 = *(_QWORD *)(a2 + 40);
  if ( v24 == a2 )
  {
    LOBYTE(v25) = 0;
  }
  else
  {
    v25 = ((unsigned __int64)v14 >> 16) + 1;
    if ( v25 >= 0xFE )
    {
      RtlpLogHeapFailure(3, v24, v15, a2, 0LL, 0LL);
      v13 = BaseAddress;
      v20 = (_BYTE *)(a2 + 8);
      v22 = (_BYTE *)(a2 + 11);
    }
  }
  *(_BYTE *)(v15 + 14) = v25;
  RtlpCreateUCREntry(a1, a2, (__int64)(v13 - 48), v21 & 0xFFFFF000, v15, (__int64 *)RegionSize);
  if ( *(_DWORD *)(a1 + 124) )
  {
    *v22 = *v20 ^ v20[1] ^ v20[2];
    *(_DWORD *)v20 ^= *(_DWORD *)(a1 + 136);
  }
  if ( RegionSize[0] )
    RtlpInsertFreeBlock(a1, v15, RegionSize[0]);
  v27 = a1 + 288;
  v28 = (ULONG_PTR *)(a2 + 24);
  v29 = *(__int64 **)(a1 + 296);
  if ( *v29 == a1 + 288 )
  {
    *v28 = v27;
    v28[1] = (ULONG_PTR)v29;
    *v29 = (__int64)v28;
    *(_QWORD *)(a1 + 296) = v28;
  }
  else
  {
    RtlpLogHeapFailure(13, 0LL, v27, 0LL, *v29, 0LL);
  }
  ++*(_DWORD *)(a1 + 608);
  return 1;
}
