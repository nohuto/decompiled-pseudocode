/*
 * XREFs of MiAllocateKernelCfgBitmapPageTables @ 0x140A3A04C
 * Callers:
 *     MiApplyDriverHotPatch @ 0x1407E0DBC (MiApplyDriverHotPatch.c)
 *     MiMarkKernelImageCfgBits @ 0x140A39A20 (MiMarkKernelImageCfgBits.c)
 *     MiInitializeKernelCfgImages @ 0x140C486E0 (MiInitializeKernelCfgImages.c)
 * Callees:
 *     MiMakeZeroedPageTables @ 0x14038EACC (MiMakeZeroedPageTables.c)
 *     MiGetPteAddress @ 0x140419EE0 (MiGetPteAddress.c)
 *     MiReleaseKernelCfgLock @ 0x140A3A0FC (MiReleaseKernelCfgLock.c)
 *     MiAcquireKernelCfgLock @ 0x140A3A1E0 (MiAcquireKernelCfgLock.c)
 */

__int64 __fastcall MiAllocateKernelCfgBitmapPageTables(__int64 a1, int a2, int a3)
{
  __int64 v6; // r9
  int PteAddress; // eax
  int v8; // edx
  unsigned int v9; // edi

  if ( !a3 )
    MiAcquireKernelCfgLock();
  MiGetPteAddress(qword_140E2D4D8 + ((2 * ((a1 + (unsigned __int64)(unsigned int)(a2 - 1) + 0x800000000000LL) >> 4)) >> 3));
  PteAddress = MiGetPteAddress(qword_140E2D4D8 + ((2 * ((unsigned __int64)(a1 + v6) >> 4)) >> 3));
  v9 = (unsigned int)MiMakeZeroedPageTables(PteAddress, v8, 1, 18) == 0 ? 0xC000009A : 0;
  if ( !a3 )
    MiReleaseKernelCfgLock();
  return v9;
}
