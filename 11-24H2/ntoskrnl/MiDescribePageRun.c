/*
 * XREFs of MiDescribePageRun @ 0x1407E99CC
 * Callers:
 *     MiAllocateInitialMemoryBlocks @ 0x1407E9474 (MiAllocateInitialMemoryBlocks.c)
 *     MiCreateNodeLists @ 0x1407E9860 (MiCreateNodeLists.c)
 * Callees:
 *     MiPageToNode @ 0x140221770 (MiPageToNode.c)
 *     MiPageToChannel @ 0x140258D54 (MiPageToChannel.c)
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     MiRestrictRangeToNode @ 0x1403FC38C (MiRestrictRangeToNode.c)
 */

__int64 __fastcall MiDescribePageRun(__int64 a1, ULONG_PTR a2, ULONG_PTR a3)
{
  ULONG_PTR v3; // rbx
  ULONG_PTR i; // rbp
  ULONG_PTR v6; // r14
  __int64 Pool; // rax
  __int64 v8; // rdi
  __int64 *v9; // rax

  v3 = a2;
  for ( i = a2 + a3; v3 != i; a3 = i - v3 )
  {
    v6 = MiRestrictRangeToNode(v3, a3);
    Pool = MiAllocatePool(0x40uLL, 0x28uLL, 1867410765);
    v8 = Pool;
    if ( !Pool )
      return 3221225626LL;
    *(_QWORD *)(Pool + 16) = v3;
    *(_QWORD *)(Pool + 24) = v6;
    *(_BYTE *)(Pool + 36) = MiPageToChannel(v3);
    *(_DWORD *)(v8 + 32) = MiPageToNode(v3);
    v9 = *(__int64 **)(a1 + 8);
    if ( *v9 != a1 )
      __fastfail(3u);
    *(_QWORD *)v8 = a1;
    v3 += v6;
    *(_QWORD *)(v8 + 8) = v9;
    *v9 = v8;
    *(_QWORD *)(a1 + 8) = v8;
    ++*(_DWORD *)(a1 + 16);
  }
  return 0LL;
}
