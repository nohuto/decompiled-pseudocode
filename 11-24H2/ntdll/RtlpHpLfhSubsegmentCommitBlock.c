/*
 * XREFs of RtlpHpLfhSubsegmentCommitBlock @ 0x18006BF70
 * Callers:
 *     RtlpHpMetadataAlloc @ 0x18003D230 (RtlpHpMetadataAlloc.c)
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlpHpSegReAlloc @ 0x18005CF10 (RtlpHpSegReAlloc.c)
 *     RtlpHpTagAllocateHeap @ 0x180083CE0 (RtlpHpTagAllocateHeap.c)
 *     RtlpHpReallocMove @ 0x18009EFF0 (RtlpHpReallocMove.c)
 *     RtlpHpAllocateHeapSlow @ 0x18009FA50 (RtlpHpAllocateHeapSlow.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpLfhContextUpdateFreeCommitCount @ 0x18006BE00 (RtlpHpLfhContextUpdateFreeCommitCount.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpSegPageRangeCommit @ 0x18006C560 (RtlpHpSegPageRangeCommit.c)
 *     RtlpHpLfhSubsegmentDecBlockCounts @ 0x1800CD8B0 (RtlpHpLfhSubsegmentDecBlockCounts.c)
 *     ZwSetInformationVirtualMemory @ 0x180163640 (ZwSetInformationVirtualMemory.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentCommitBlock(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  char v3; // cl
  int v5; // r15d
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 v9; // rdx
  signed __int16 *v10; // rbx
  signed __int16 *v11; // r12
  int v12; // edi
  int v13; // r13d
  signed __int16 v14; // ax
  signed __int16 v15; // tt
  char v17; // cl
  __int64 v18; // r10
  int v19; // r15d
  unsigned int v20; // r13d
  __int64 v21; // r15
  unsigned __int64 v22; // rbx
  int v23; // edi
  char v24; // cl
  __int64 v25; // rdx
  __int64 v26; // r10
  signed __int16 *v27; // r9
  signed __int16 *v28; // r11
  int v29; // edi
  int v30; // r8d
  signed __int16 v31; // dx
  bool v32; // zf
  signed __int16 v33; // ax
  unsigned __int64 v34; // rdi
  char v35; // al
  unsigned int v36; // [rsp+30h] [rbp-58h]
  __int64 v37; // [rsp+38h] [rbp-50h]
  _MEMORY_RANGE_ENTRY VirtualAddresses; // [rsp+40h] [rbp-48h] BYREF
  int v40; // [rsp+98h] [rbp+10h] BYREF
  unsigned int VmInformation; // [rsp+A0h] [rbp+18h] BYREF
  int v42; // [rsp+A8h] [rbp+20h] BYREF

  VmInformation = a3;
  v3 = *(_BYTE *)(a2 + 38);
  v40 = 0;
  v5 = 0;
  v6 = a3 >> 12 >> v3;
  v7 = *(unsigned __int8 *)(a2 + 24);
  v36 = (unsigned __int16)qword_1801CCEC8 ^ *(unsigned __int16 *)(a2 + 40) ^ (unsigned __int16)(a2 >> 12);
  v8 = 2 * v6;
  v9 = ((a3 + v36 - 1) >> 12 >> v3) - (unsigned int)v6 + 1;
  v10 = (signed __int16 *)(2 * v6 + a2 + 8 * v7);
  _m_prefetchw(v10);
  v11 = &v10[v9];
  LODWORD(v37) = 0;
  v12 = 0;
  v13 = -1;
  if ( v10 >= v11 )
    return 0LL;
  do
  {
    while ( 1 )
    {
      v14 = *v10;
      while ( v14 > 0 )
      {
        v15 = v14;
        v14 = _InterlockedCompareExchange16(v10, v14 + 1, v14);
        if ( v15 == v14 )
          goto LABEL_5;
      }
      if ( v5 )
        break;
      v5 = 1;
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a2 + 56));
    }
    if ( v14 )
    {
      ++v12;
      v37 = v8 >> 1;
      if ( v13 == -1 )
        v13 = v8 >> 1;
    }
    else
    {
      --v12;
    }
    *v10 = v14 + 1;
LABEL_5:
    ++v10;
    v8 += 2LL;
  }
  while ( v10 < v11 );
  if ( v12 )
    RtlpHpLfhContextUpdateFreeCommitCount(a1, a2, (v12 << 12 << *(_BYTE *)(a2 + 38)) / 4096);
  if ( v13 == -1 )
  {
    if ( v5 )
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a2 + 56));
    return 0LL;
  }
  v17 = *(_BYTE *)(a2 + 38);
  v18 = *(_QWORD *)a1;
  v19 = ((_DWORD)v37 - v13 + 1) << 12;
  v20 = v13 << 12 << v17;
  v21 = (unsigned int)(v19 << v17);
  v22 = a2 + v20;
  if ( (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 24)) == RtlpHpSegLfhVsCommit )
  {
    v42 = 0;
    v23 = RtlpHpSegPageRangeCommit(v18, 0, (__int64)&v42);
    if ( v23 >= 0 )
      v40 = v42 << 12;
  }
  else
  {
    v23 = ((__int64 (__fastcall *)(_QWORD, unsigned __int64, _QWORD, int *))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 24)))(
            *(_QWORD *)a1,
            a2 + v20,
            (unsigned int)v21,
            &v40);
  }
  if ( v23 >= 0 )
  {
    v24 = *(_BYTE *)(a2 + 38);
    v25 = v20 >> 12 >> v24;
    v26 = 2 * v25;
    v27 = (signed __int16 *)(2 * v25 + a2 + 8LL * *(unsigned __int8 *)(a2 + 24));
    _m_prefetchw(v27);
    v28 = &v27[(((unsigned int)v21 + v20 - 1) >> 12 >> v24) - (unsigned int)v25 + 1];
    v29 = -1;
    v30 = 0;
    if ( v27 >= v28 )
      goto LABEL_32;
    do
    {
      v31 = *v27;
      while ( v31 > 0 )
      {
        v33 = _InterlockedCompareExchange16(v27, v31 + 1, v31);
        v32 = v31 == v33;
        v31 = v33;
        if ( v32 )
          goto LABEL_28;
      }
      if ( v31 )
      {
        ++v30;
        if ( v29 == -1 )
          v29 = v26 >> 1;
      }
      else
      {
        --v30;
      }
      *v27 = v31 + 1;
LABEL_28:
      ++v27;
      v26 += 2LL;
    }
    while ( v27 < v28 );
    if ( v30 )
      RtlpHpLfhContextUpdateFreeCommitCount(a1, a2, (v30 << 12 << *(_BYTE *)(a2 + 38)) / 4096);
    if ( v29 == -1 )
LABEL_32:
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a2 + 56));
    v34 = v21 + v22;
    v35 = 3;
    if ( !v40 )
      v35 = 2;
    if ( (RtlpHpLfhPerfFlags & 2) != 0 )
    {
      if ( (v35 & 1) != 0 )
      {
        VirtualAddresses.NumberOfBytes = (unsigned int)v21;
        VirtualAddresses.VirtualAddress = (PVOID)(a2 + v20);
        VmInformation = 1;
        ZwSetInformationVirtualMemory(
          (HANDLE)0xFFFFFFFFFFFFFFFFLL,
          VmPrefetchInformation,
          1uLL,
          &VirtualAddresses,
          &VmInformation,
          4u);
      }
      for ( ; v22 < v34; v22 += 4096LL )
        ;
    }
    return 0LL;
  }
  RtlpHpLfhSubsegmentDecBlockCounts(a1, a2, VmInformation, v36);
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a2 + 56));
  return (unsigned int)v23;
}
