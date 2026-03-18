/*
 * XREFs of MiGetNextPageColor @ 0x1404432AC
 * Callers:
 *     MmAllocateMemoryRanges @ 0x1407DB290 (MmAllocateMemoryRanges.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1407EB814 (MiAllocatePartitionPhysicalPages.c)
 *     MiPfPrepareReadList @ 0x1409C90BC (MiPfPrepareReadList.c)
 *     MiPfPrepareSequentialReadList @ 0x1409C9C58 (MiPfPrepareSequentialReadList.c)
 *     MiAllocateTopLevelPage @ 0x140A480DC (MiAllocateTopLevelPage.c)
 *     MiAllocateDriverPage @ 0x140A69E40 (MiAllocateDriverPage.c)
 *     MiDoneWithThisPageGetAnother @ 0x140A6ED60 (MiDoneWithThisPageGetAnother.c)
 *     MmAllocateIndependentPagesEx @ 0x140A8508C (MmAllocateIndependentPagesEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetNextPageColor(__int64 a1)
{
  unsigned int v1; // r8d

  v1 = *(_DWORD *)(a1 + 8);
  return v1 ^ (unsigned __int8)(v1 ^ (_InterlockedExchangeAdd(*(volatile signed __int32 **)a1, 1u)
                                    % (unsigned int)dword_140E2D980[HIWORD(v1) & 3]));
}
