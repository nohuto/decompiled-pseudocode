/*
 * XREFs of MiClearStaleSecurePageMapping @ 0x140C50F58
 * Callers:
 *     MiCreateDescriptorPfns @ 0x140C50FF4 (MiCreateDescriptorPfns.c)
 * Callees:
 *     MiSanitizeShadowPxe @ 0x140233C54 (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x140233CD4 (MiWritePteShadow.c)
 *     MiPteInShadowRange @ 0x1402863E0 (MiPteInShadowRange.c)
 *     MiGetContainingPageTable @ 0x1402ECE30 (MiGetContainingPageTable.c)
 *     MiDecreaseUsedPtesInPfn @ 0x14039EEFC (MiDecreaseUsedPtesInPfn.c)
 *     MiLockAndDecrementShareCount @ 0x14039EFA4 (MiLockAndDecrementShareCount.c)
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
