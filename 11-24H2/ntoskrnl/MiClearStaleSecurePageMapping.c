/*
 * XREFs of MiClearStaleSecurePageMapping @ 0x140C530E8
 * Callers:
 *     MiCreateDescriptorPfns @ 0x140C53184 (MiCreateDescriptorPfns.c)
 * Callees:
 *     MiPteInShadowRange @ 0x140202630 (MiPteInShadowRange.c)
 *     MiSanitizeShadowPxe @ 0x140203820 (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x1402038A0 (MiWritePteShadow.c)
 *     MiDecreaseUsedPtesInPfn @ 0x14021D39C (MiDecreaseUsedPtesInPfn.c)
 *     MiLockAndDecrementShareCount @ 0x14021D444 (MiLockAndDecrementShareCount.c)
 *     MiGetContainingPageTable @ 0x14034E470 (MiGetContainingPageTable.c)
 */

__int64 __fastcall MiClearStaleSecurePageMapping(__int64 *a1)
{
  __int64 v1; // rbx
  int v3; // esi
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // eax
  ULONG_PTR v8; // rbx
  __int64 v9; // r8
  __int64 v10; // r9
  ULONG_PTR v12; // [rsp+38h] [rbp+10h] BYREF

  v1 = CLFS_LSN_NULL_EXT;
  v12 = CLFS_LSN_NULL_EXT;
  v3 = 0;
  if ( MiPteInShadowRange((unsigned __int64)a1) )
  {
    v7 = MiSanitizeShadowPxe(v4, (__int64)&v12, v5);
    v1 = v12;
    v3 = v7;
  }
  *a1 = v1;
  if ( v3 )
    MiWritePteShadow((__int64)a1, v1, v5, v6);
  v8 = 48 * MiGetContainingPageTable((unsigned __int64)a1) - 0x220000000000LL;
  MiDecreaseUsedPtesInPfn(v8, 1uLL);
  return MiLockAndDecrementShareCount(v8, 0LL, v9, v10);
}
