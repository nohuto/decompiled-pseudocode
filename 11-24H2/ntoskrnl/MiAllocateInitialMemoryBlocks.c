/*
 * XREFs of MiAllocateInitialMemoryBlocks @ 0x1407E9474
 * Callers:
 *     MiAcquireRemoveMemoryResources @ 0x14066D8F4 (MiAcquireRemoveMemoryResources.c)
 *     MiAcquireAddMemoryResources @ 0x1407E8B78 (MiAcquireAddMemoryResources.c)
 * Callees:
 *     MiAllocateMemoryBlock @ 0x1407E9560 (MiAllocateMemoryBlock.c)
 *     MiDescribePageRun @ 0x1407E99CC (MiDescribePageRun.c)
 *     MiHonorExistingHotMemoryFlights @ 0x1407E9B54 (MiHonorExistingHotMemoryFlights.c)
 */

__int64 __fastcall MiAllocateInitialMemoryBlocks(__int64 a1)
{
  _QWORD *v2; // rax
  __int64 *v3; // rcx
  __int64 v4; // rdx
  __int64 MemoryBlock; // rax
  unsigned int v6; // edi
  __int64 result; // rax
  unsigned int v8; // r9d
  __int64 v9; // rdx
  __int64 v10; // rax
  int v11; // eax

  *(_QWORD *)(a1 + 80) = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 88) = *(_QWORD *)(a1 + 32);
  v2 = (_QWORD *)(a1 + 64);
  v3 = (__int64 *)(a1 + 112);
  v4 = *v3;
  if ( *(__int64 **)(*v3 + 8) != v3 )
    __fastfail(3u);
  *v2 = v4;
  v2[1] = v3;
  *(_QWORD *)(v4 + 8) = v2;
  *v3 = (__int64)v2;
  *(_DWORD *)(a1 + 128) = 1;
  if ( *(_DWORD *)MmPhysicalMemoryBlock == -1 )
    return 3221225626LL;
  MemoryBlock = MiAllocateMemoryBlock(MmPhysicalMemoryBlock, (unsigned int)(*(_DWORD *)MmPhysicalMemoryBlock + 1), 0LL);
  v6 = 0;
  *(_QWORD *)(a1 + 160) = MemoryBlock;
  if ( !MemoryBlock )
    return 3221225626LL;
  result = MiDescribePageRun(a1 + 136, *(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 32));
  if ( (int)result < 0 )
    return result;
  v8 = *(_DWORD *)(a1 + 152);
  v9 = v8 + *(_DWORD *)qword_140E38D60;
  if ( (unsigned int)v9 <= v8 )
    return 3221225626LL;
  v10 = MiAllocateMemoryBlock(qword_140E38D60, v9, 1LL);
  *(_QWORD *)(a1 + 168) = v10;
  if ( !v10 )
    return 3221225626LL;
  if ( (*(_DWORD *)(a1 + 40) & 2) != 0 )
    return 0LL;
  v11 = MiHonorExistingHotMemoryFlights(a1);
  if ( v11 < 0 )
    return (unsigned int)v11;
  return v6;
}
