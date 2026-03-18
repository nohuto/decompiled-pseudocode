/*
 * XREFs of MiGetNextPageColor @ 0x14043D550
 * Callers:
 *     MmAllocateMemoryRanges @ 0x1407EB130 (MmAllocateMemoryRanges.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1407FB6A4 (MiAllocatePartitionPhysicalPages.c)
 *     MiPfPrepareReadList @ 0x1409557EC (MiPfPrepareReadList.c)
 *     MiPfPrepareSequentialReadList @ 0x140956378 (MiPfPrepareSequentialReadList.c)
 *     MiAllocateTopLevelPage @ 0x140A5A2FC (MiAllocateTopLevelPage.c)
 *     MiDoneWithThisPageGetAnother @ 0x140A66AF0 (MiDoneWithThisPageGetAnother.c)
 *     MiAllocateDriverPage @ 0x140A68CD8 (MiAllocateDriverPage.c)
 *     MmAllocateIndependentPagesEx @ 0x140A88F6C (MmAllocateIndependentPagesEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetNextPageColor(__int64 a1)
{
  unsigned int v1; // r8d

  v1 = *(_DWORD *)(a1 + 8);
  return v1 ^ (unsigned __int8)(v1 ^ (_InterlockedExchangeAdd(*(volatile signed __int32 **)a1, 1u)
                                    % (unsigned int)dword_140E2DBC0[HIWORD(v1) & 3]));
}
