/*
 * XREFs of MiInitializeKernelCfg @ 0x140C598DC
 * Callers:
 *     MiInitializeLoadedModuleList @ 0x140C5B318 (MiInitializeLoadedModuleList.c)
 * Callees:
 *     MiReservePtes @ 0x14028FF10 (MiReservePtes.c)
 *     MiEnumerateSystemImages @ 0x1402C7380 (MiEnumerateSystemImages.c)
 *     MiMakeZeroedPageTables @ 0x1403A582C (MiMakeZeroedPageTables.c)
 *     VslInitializeSecureKernelCfg @ 0x14058D624 (VslInitializeSecureKernelCfg.c)
 *     MxInstallMoreMemory @ 0x14066C6F0 (MxInstallMoreMemory.c)
 *     MiProcessKernelCfgAddressTakenImports @ 0x140ABB69C (MiProcessKernelCfgAddressTakenImports.c)
 */

void MiInitializeKernelCfg()
{
  unsigned __int64 v0; // rbx
  __int64 v1; // rax

  if ( (MiFlags & 0x40000) != 0 )
  {
    v0 = qword_140E38B18;
    v1 = MiReservePtes((__int64)&qword_140E37568, 0x20u);
    if ( !v1
      || (int)VslInitializeSecureKernelCfg(v0, v1 << 25 >> 16) < 0
      || (qword_140E2D718 = v0,
          qword_140E2D710 = 0x100000000000LL,
          !(unsigned int)MiMakeZeroedPageTables(
                           (unsigned int)(v0 >> 9) & 0xFFFFFFF8,
                           (unsigned int)((v0 + 0x1FFFFFFFFFFLL) >> 9) & 0xFFFFFFF8,
                           2048,
                           8)) )
    {
      MxInstallMoreMemory(32);
    }
    qword_140E2D720 = 0LL;
    MiEnumerateSystemImages((__int64)MiInitializeKernelCfgImages, 0LL, 0LL);
    MiEnumerateSystemImages((__int64)MiInitializeKernelCfgImages, 1LL, 0LL);
    MiProcessKernelCfgAddressTakenImports(0LL);
    guard_icall_bitmap = qword_140E2D718 - 0x3FFFE0000000000LL;
  }
}
