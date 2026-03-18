/*
 * XREFs of MiCopyTopLevelMappings @ 0x140393D4C
 * Callers:
 *     MmInSwapProcess @ 0x140338A94 (MmInSwapProcess.c)
 *     MiCreateNewProcessTopLevelMappings @ 0x140393CA0 (MiCreateNewProcessTopLevelMappings.c)
 * Callees:
 *     MiMapPageInHyperSpaceWorker @ 0x14021F1A0 (MiMapPageInHyperSpaceWorker.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140232A20 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiMakeValidPte @ 0x1402383C0 (MiMakeValidPte.c)
 *     MiShadowTopLevelPxes @ 0x140393EB0 (MiShadowTopLevelPxes.c)
 *     MiCopyPtes @ 0x14039437C (MiCopyPtes.c)
 */

ULONG_PTR __fastcall MiCopyTopLevelMappings(__int64 a1, __int64 a2)
{
  ULONG_PTR v4; // rbx
  unsigned __int64 v5; // rsi
  ULONG_PTR *v6; // rdi
  ULONG_PTR result; // rax

  v4 = MiMakeValidPte(0LL, a2, -1879048188) & 0xFFFFFFFFFFFFFEFFuLL;
  v5 = MiMapPageInHyperSpaceWorker(a2, 0LL, 0x80000000LL);
  MiCopyPtes(v5 + 2048);
  MiShadowTopLevelPxes(a1, 0xFFFFF6FB7DBED800uLL, 256LL);
  MiCopyPtes(v5 + 8 * ((((unsigned __int64)qword_140E2F290 >> 39) & 0x1FF) + 1));
  v6 = (ULONG_PTR *)(v5 + 3944);
  *(_QWORD *)(v5 + 3944) = CLFS_LSN_NULL_EXT;
  if ( _bittest64(&MiFlags, 0x24u) && (v4 & 0x20) == 0 && (unsigned __int64)v6 >= 0xFFFFF6C000000000uLL )
    MiCheckLinearProtectedPteAccessedBit(v5 + 3944, v4, 128);
  *v6 = v4;
  result = CLFS_LSN_NULL_EXT;
  *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
  *(_QWORD *)(((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = CLFS_LSN_NULL_EXT;
  return result;
}
