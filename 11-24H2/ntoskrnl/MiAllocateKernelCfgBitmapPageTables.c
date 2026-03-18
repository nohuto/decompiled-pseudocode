/*
 * XREFs of MiAllocateKernelCfgBitmapPageTables @ 0x140A3E36C
 * Callers:
 *     MiApplyDriverHotPatch @ 0x1407F0C5C (MiApplyDriverHotPatch.c)
 *     MiMarkKernelImageCfgBits @ 0x140A3DD40 (MiMarkKernelImageCfgBits.c)
 *     MiInitializeKernelCfgImages @ 0x140C59A10 (MiInitializeKernelCfgImages.c)
 * Callees:
 *     MiMakeZeroedPageTables @ 0x1403A582C (MiMakeZeroedPageTables.c)
 *     MiGetPteAddress @ 0x140437550 (MiGetPteAddress.c)
 *     MiReleaseKernelCfgLock @ 0x140A3E41C (MiReleaseKernelCfgLock.c)
 *     MiAcquireKernelCfgLock @ 0x140A3E500 (MiAcquireKernelCfgLock.c)
 */

__int64 __fastcall MiAllocateKernelCfgBitmapPageTables(__int64 a1, int a2, int a3)
{
  __int64 v6; // r9
  int PteAddress; // eax
  int v8; // edx
  unsigned int v9; // edi

  if ( !a3 )
    MiAcquireKernelCfgLock();
  MiGetPteAddress(qword_140E2D718 + ((2 * ((a1 + (unsigned __int64)(unsigned int)(a2 - 1) + 0x800000000000LL) >> 4)) >> 3));
  PteAddress = MiGetPteAddress(qword_140E2D718 + ((2 * ((unsigned __int64)(a1 + v6) >> 4)) >> 3));
  v9 = (unsigned int)MiMakeZeroedPageTables(PteAddress, v8, 1, 18) == 0 ? 0xC000009A : 0;
  if ( !a3 )
    MiReleaseKernelCfgLock();
  return v9;
}
