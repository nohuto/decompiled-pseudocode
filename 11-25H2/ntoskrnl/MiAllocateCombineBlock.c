/*
 * XREFs of MiAllocateCombineBlock @ 0x140239A90
 * Callers:
 *     MiSharePages @ 0x140238650 (MiSharePages.c)
 *     MmInitializeImageViewExtensionCfg @ 0x140C43014 (MmInitializeImageViewExtensionCfg.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiAllocatePool @ 0x1402DA740 (MiAllocatePool.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     MiInsertNewCombineBlocks @ 0x140478EDC (MiInsertNewCombineBlocks.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiAllocateCombineBlock(__int64 a1)
{
  __int64 inserted; // rbx
  __int64 v3; // rdx
  _QWORD *v4; // rax
  __int64 *v5; // rcx
  __int64 v6; // rcx
  __int64 Pool; // rax
  void *v9; // rdi

  inserted = 0LL;
  LOBYTE(v3) = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 88));
  v4 = (_QWORD *)(a1 + 72);
  v5 = *(__int64 **)(a1 + 72);
  if ( v5 != (__int64 *)(a1 + 72) )
  {
    inserted = *(_QWORD *)(a1 + 72);
    if ( (_QWORD *)v5[1] != v4 || (v6 = *v5, *(_QWORD *)(v6 + 8) != inserted) )
      __fastfail(3u);
    *v4 = v6;
    *(_QWORD *)(v6 + 8) = v4;
    ++*(_DWORD *)((inserted & 0xFFFFFFFFFFFFF000uLL) + 8);
  }
  MiReleaseSpinLockExclusive(a1 + 88, v3);
  if ( inserted )
    goto LABEL_6;
  Pool = MiAllocatePool(0x112uLL, 0x1000uLL);
  v9 = (void *)Pool;
  if ( Pool )
  {
    *(_DWORD *)(Pool + 8) = 1;
    *(_QWORD *)(Pool + 16) = a1;
    inserted = MiInsertNewCombineBlocks(a1, Pool + 72);
    if ( inserted )
    {
LABEL_6:
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 388));
      return inserted;
    }
    ExFreePoolWithTag(v9, 0);
  }
  return 0LL;
}
