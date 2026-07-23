/*
 * XREFs of MiAllocateCombineBlock @ 0x140345874
 * Callers:
 *     MiSharePages @ 0x140343830 (MiSharePages.c)
 *     MmInitializeImageViewExtensionCfg @ 0x140C5641C (MmInitializeImageViewExtensionCfg.c)
 * Callees:
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     MiInsertNewCombineBlocks @ 0x14047566C (MiInsertNewCombineBlocks.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiAllocateCombineBlock(__int64 a1)
{
  __int64 inserted; // rbx
  KIRQL v3; // dl
  _QWORD *v4; // rax
  __int64 *v5; // rcx
  __int64 v6; // rcx
  __int64 Pool; // rax
  void *v9; // rdi

  inserted = 0LL;
  v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 88));
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
  MiReleaseSpinLockExclusive((_DWORD *)(a1 + 88), v3);
  if ( inserted )
    goto LABEL_6;
  Pool = MiAllocatePool(0x112uLL, 0x1000uLL, 1836405581);
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
