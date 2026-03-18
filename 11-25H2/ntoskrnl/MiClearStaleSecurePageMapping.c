/*
 * XREFs of MiClearStaleSecurePageMapping @ 0x140C3FD28
 * Callers:
 *     MiCreateDescriptorPfns @ 0x140C3FDC4 (MiCreateDescriptorPfns.c)
 * Callees:
 *     MiDecreaseUsedPtesInPfn @ 0x1402274AC (MiDecreaseUsedPtesInPfn.c)
 *     MiLockAndDecrementShareCount @ 0x140227554 (MiLockAndDecrementShareCount.c)
 *     MiPteInShadowRange @ 0x1402480C0 (MiPteInShadowRange.c)
 *     MiGetContainingPageTable @ 0x1402C3750 (MiGetContainingPageTable.c)
 *     MiSanitizeShadowPxe @ 0x1403FDBDC (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x1403FDC5C (MiWritePteShadow.c)
 */

__int64 __fastcall MiClearStaleSecurePageMapping(ULONG_PTR *a1)
{
  ULONG_PTR v1; // rbx
  int v3; // esi
  ULONG_PTR v4; // rbx

  v1 = CLFS_LSN_NULL_EXT;
  v3 = 0;
  if ( MiPteInShadowRange((unsigned __int64)a1) )
  {
    v1 = CLFS_LSN_NULL_EXT;
    v3 = MiSanitizeShadowPxe();
  }
  *a1 = v1;
  if ( v3 )
    MiWritePteShadow();
  v4 = 48 * MiGetContainingPageTable((unsigned __int64)a1) - 0x220000000000LL;
  MiDecreaseUsedPtesInPfn(v4, 1uLL);
  return MiLockAndDecrementShareCount(v4, 0);
}
