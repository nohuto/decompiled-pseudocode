/*
 * XREFs of MiExtendMemoryBlocks @ 0x1407E94C4
 * Callers:
 *     MiHonorExistingHotMemoryFlights @ 0x1407E9584 (MiHonorExistingHotMemoryFlights.c)
 * Callees:
 *     MiAllocateMemoryBlock @ 0x1407E8F90 (MiAllocateMemoryBlock.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiExtendMemoryBlocks(__int64 a1)
{
  unsigned int v2; // edx
  __int64 MemoryBlock; // rdi
  unsigned int v4; // edx
  __int64 v5; // rdi

  v2 = dword_140E2EC10 + *(_DWORD *)MmPhysicalMemoryBlock;
  if ( v2 <= dword_140E2EC10 )
    return 3221225626LL;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 160) + 16LL) < v2 )
  {
    MemoryBlock = MiAllocateMemoryBlock((unsigned int *)MmPhysicalMemoryBlock, v2, 0);
    if ( !MemoryBlock )
      return 3221225626LL;
    ExFreePoolWithTag(*(PVOID *)(a1 + 160), 0);
    *(_QWORD *)(a1 + 160) = MemoryBlock;
  }
  v4 = dword_140E2EC14 + *(_DWORD *)qword_140E38C20;
  if ( v4 > dword_140E2EC14 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 168) + 16LL) >= v4 )
      return 0LL;
    v5 = MiAllocateMemoryBlock((unsigned int *)qword_140E38C20, v4, 1);
    if ( v5 )
    {
      ExFreePoolWithTag(*(PVOID *)(a1 + 168), 0);
      *(_QWORD *)(a1 + 168) = v5;
      return 0LL;
    }
  }
  return 3221225626LL;
}
