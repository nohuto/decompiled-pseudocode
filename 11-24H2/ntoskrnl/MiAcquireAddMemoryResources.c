/*
 * XREFs of MiAcquireAddMemoryResources @ 0x1407E8B78
 * Callers:
 *     MiAddPhysicalMemory @ 0x1407E8C3C (MiAddPhysicalMemory.c)
 * Callees:
 *     MiIsAnyPartOfRangeInHugePfn @ 0x140671E30 (MiIsAnyPartOfRangeInHugePfn.c)
 *     MiAddRangeToPartitionTree @ 0x14068AA6C (MiAddRangeToPartitionTree.c)
 *     MiSplitPfnBitMapsForPartitionHierarchy @ 0x14068C5C4 (MiSplitPfnBitMapsForPartitionHierarchy.c)
 *     MiAllocateInitialMemoryBlocks @ 0x1407E9474 (MiAllocateInitialMemoryBlocks.c)
 *     MiUpdateMirrorBitmaps @ 0x140ABBD20 (MiUpdateMirrorBitmaps.c)
 */

__int64 __fastcall MiAcquireAddMemoryResources(__int64 a1)
{
  int v2; // edi
  int IsAnyPartOfRangeInHugePfn; // eax
  int v4; // ecx
  bool v5; // zf
  __int64 result; // rax

  v2 = 0;
  IsAnyPartOfRangeInHugePfn = MiIsAnyPartOfRangeInHugePfn(*(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 32));
  v4 = *(_DWORD *)(a1 + 40) & 0x10000;
  if ( (*(_DWORD *)(a1 + 40) & 0x20000) != 0 )
  {
    v2 = 1;
    if ( v4 )
      goto LABEL_10;
  }
  else if ( v4 )
  {
    if ( IsAnyPartOfRangeInHugePfn )
    {
      v5 = *(_QWORD *)(a1 + 48) == (_QWORD)&MiSystemPartition;
      goto LABEL_9;
    }
    return 3221225496LL;
  }
  if ( IsAnyPartOfRangeInHugePfn )
    return 3221225496LL;
  v5 = v2 == 0;
LABEL_9:
  if ( !v5 )
  {
LABEL_10:
    if ( !(unsigned int)MiAddRangeToPartitionTree(
                          (unsigned __int64 *)(a1 + 104),
                          *(_QWORD *)(a1 + 16),
                          *(_QWORD *)(a1 + 32),
                          0) )
      return 3221225626LL;
  }
  result = MiAllocateInitialMemoryBlocks(a1);
  if ( (int)result < 0 )
    return result;
  if ( (unsigned int)MiSplitPfnBitMapsForPartitionHierarchy(
                       *(_QWORD *)(a1 + 48),
                       *(_QWORD *)(a1 + 16),
                       *(_QWORD *)(a1 + 32)) )
    return (unsigned int)MiUpdateMirrorBitmaps(*(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 32)) == 0 ? 0xC000009A : 0;
  return 3221225626LL;
}
