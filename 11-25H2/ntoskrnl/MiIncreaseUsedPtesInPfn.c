/*
 * XREFs of MiIncreaseUsedPtesInPfn @ 0x1402D1090
 * Callers:
 *     MiInitializePfn @ 0x14024CD40 (MiInitializePfn.c)
 *     MiBuildForkPte @ 0x1402CCF80 (MiBuildForkPte.c)
 *     MiHandleForkTransitionPte @ 0x1402CF714 (MiHandleForkTransitionPte.c)
 *     MiWriteSharedDemandZeroPte @ 0x1402CFFF4 (MiWriteSharedDemandZeroPte.c)
 *     MiDuplicateCloneLeaf @ 0x1402D08F8 (MiDuplicateCloneLeaf.c)
 *     MiWriteUselessChildPte @ 0x1402D0FFC (MiWriteUselessChildPte.c)
 *     MiBuildForkPageTable @ 0x1402D13B0 (MiBuildForkPageTable.c)
 *     MiInitializeDummyPages @ 0x140C3E5B0 (MiInitializeDummyPages.c)
 *     MxCreatePfnsForPtes @ 0x140C41600 (MxCreatePfnsForPtes.c)
 *     MiFillGapPtes @ 0x140C43B10 (MiFillGapPtes.c)
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
