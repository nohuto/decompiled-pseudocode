/*
 * XREFs of MiCopyTopLevelMappings @ 0x14038D368
 * Callers:
 *     MmInSwapProcess @ 0x1402DFEE4 (MmInSwapProcess.c)
 *     MiCreateNewProcessTopLevelMappings @ 0x14038D2BC (MiCreateNewProcessTopLevelMappings.c)
 * Callees:
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiMakeValidPte @ 0x140212550 (MiMakeValidPte.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14024BEF0 (MiMapPageInHyperSpaceWorker.c)
 *     MiShadowTopLevelPxes @ 0x14038D4CC (MiShadowTopLevelPxes.c)
 *     MiCopyPtes @ 0x14038D998 (MiCopyPtes.c)
 */

ULONG_PTR __fastcall MiCopyTopLevelMappings(__int64 a1, __int64 a2)
{
  ULONG_PTR v4; // rbx
  unsigned __int64 v5; // rsi
  ULONG_PTR *v6; // rdi
  ULONG_PTR result; // rax

  v4 = MiMakeValidPte(0LL, a2, -1879048188) & 0xFFFFFFFFFFFFFEFFuLL;
  v5 = MiMapPageInHyperSpaceWorker(a2, 0LL, 0x80000000);
  MiCopyPtes(v5 + 2048);
  MiShadowTopLevelPxes(a1, 0xFFFFF6FB7DBED800uLL, 256LL);
  MiCopyPtes(v5 + 8 * ((((unsigned __int64)qword_140E2F3D0 >> 39) & 0x1FF) + 1));
  v6 = (ULONG_PTR *)(v5 + 3944);
  *(_QWORD *)(v5 + 3944) = CLFS_LSN_NULL_EXT;
  if ( _bittest64(&MiFlags, 0x24u) && (v4 & 0x20) == 0 && (unsigned __int64)v6 >= 0xFFFFF6C000000000uLL )
    MiCheckLinearProtectedPteAccessedBit(v5 + 3944, v4, 128LL);
  *v6 = v4;
  result = CLFS_LSN_NULL_EXT;
  *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
  *(_QWORD *)(((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = CLFS_LSN_NULL_EXT;
  return result;
}
