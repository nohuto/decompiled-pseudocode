/*
 * XREFs of MiCopyTopLevelMappings @ 0x1403FDDF4
 * Callers:
 *     MmInSwapProcess @ 0x1402F1540 (MmInSwapProcess.c)
 *     MiCreateNewProcessTopLevelMappings @ 0x1403FDD48 (MiCreateNewProcessTopLevelMappings.c)
 * Callees:
 *     MiMakeValidPte @ 0x14020EF10 (MiMakeValidPte.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14024DAC0 (MiMapPageInHyperSpaceWorker.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x14037CB60 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiCopyPtes @ 0x1403FDCB0 (MiCopyPtes.c)
 *     MiShadowTopLevelPxes @ 0x1403FE210 (MiShadowTopLevelPxes.c)
 */

ULONG_PTR __fastcall MiCopyTopLevelMappings(__int64 a1, __int64 a2)
{
  unsigned __int64 ValidPte; // rax
  unsigned __int64 v5; // rdi
  ULONG_PTR v6; // rbx
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // r9
  ULONG_PTR *v9; // rdi
  ULONG_PTR result; // rax

  ValidPte = MiMakeValidPte(0LL, a2, -1879048188);
  v5 = ((unsigned __int64)qword_140E38918 >> 39) & 0x1FF;
  v6 = ValidPte & 0xFFFFFFFFFFFFFEFFuLL;
  v7 = MiMapPageInHyperSpaceWorker(a2, 0LL, 0x80000000);
  MiCopyPtes((_QWORD *)(v7 + 2048), 0xFFFFF6FB7DBED800uLL, (unsigned int)(v5 - 255));
  MiShadowTopLevelPxes(a1, 0xFFFFF6FB7DBED800uLL, 256LL);
  v8 = (((unsigned __int64)qword_140E2F050 >> 39) & 0x1FF) + 1;
  MiCopyPtes(
    (_QWORD *)(v7 + 8 * v8),
    8 * v8 - 0x90482413000LL,
    512 - ((((unsigned __int64)qword_140E2F050 >> 39) & 0x1FF) + 1));
  v9 = (ULONG_PTR *)(v7 + 3944);
  *(_QWORD *)(v7 + 3944) = CLFS_LSN_NULL_EXT;
  if ( _bittest64(&MiFlags, 0x24u) && (v6 & 0x20) == 0 && (unsigned __int64)v9 >= 0xFFFFF6C000000000uLL )
    MiCheckLinearProtectedPteAccessedBit(v7 + 3944, v6, 128);
  *v9 = v6;
  result = CLFS_LSN_NULL_EXT;
  *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
  *(_QWORD *)(((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = CLFS_LSN_NULL_EXT;
  return result;
}
