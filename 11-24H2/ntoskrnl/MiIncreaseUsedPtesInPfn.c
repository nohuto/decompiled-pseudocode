/*
 * XREFs of MiIncreaseUsedPtesInPfn @ 0x1403916FC
 * Callers:
 *     MiInitializePfn @ 0x14024B260 (MiInitializePfn.c)
 *     MiHandleForkTransitionPte @ 0x1402678C4 (MiHandleForkTransitionPte.c)
 *     MiBuildForkPte @ 0x1402687D0 (MiBuildForkPte.c)
 *     MiWriteSharedDemandZeroPte @ 0x14026A080 (MiWriteSharedDemandZeroPte.c)
 *     MiDuplicateCloneLeaf @ 0x14038FAFC (MiDuplicateCloneLeaf.c)
 *     MiWriteUselessChildPte @ 0x140391668 (MiWriteUselessChildPte.c)
 *     MiBuildForkPageTable @ 0x14049DFAC (MiBuildForkPageTable.c)
 *     MiInitializeDummyPages @ 0x140C51970 (MiInitializeDummyPages.c)
 *     MxCreatePfnsForPtes @ 0x140C549C0 (MxCreatePfnsForPtes.c)
 *     MiFillGapPtes @ 0x140C56F20 (MiFillGapPtes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIncreaseUsedPtesInPfn(__int64 a1, int a2)
{
  __int64 v2; // r8
  unsigned int v3; // r8d

  if ( (*(_DWORD *)(a1 + 36) & 0x4000000) != 0 )
    v2 = HIDWORD(*(_QWORD *)a1);
  else
    v2 = *(_QWORD *)(a1 + 16) >> 16;
  v3 = a2 + (v2 & 0x3FF);
  if ( (*(_DWORD *)(a1 + 36) & 0x4000000) != 0 )
    *(_QWORD *)a1 = ((unsigned __int64)v3 << 32) ^ (*(_QWORD *)a1 ^ ((unsigned __int64)v3 << 32)) & 0xFFFFFC00FFFFFFFFuLL;
  else
    *(_QWORD *)(a1 + 16) = ((unsigned __int64)v3 << 16) ^ (*(_QWORD *)(a1 + 16) ^ ((unsigned __int64)v3 << 16)) & 0xFFFFFFFFFC00FFFFuLL;
  return v3;
}
