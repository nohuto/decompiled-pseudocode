/*
 * XREFs of MiInitializeKernelCfg @ 0x140C485AC
 * Callers:
 *     MiInitializeLoadedModuleList @ 0x140C49F8C (MiInitializeLoadedModuleList.c)
 * Callees:
 *     MiReservePtes @ 0x14032A200 (MiReservePtes.c)
 *     MiEnumerateSystemImages @ 0x14036E320 (MiEnumerateSystemImages.c)
 *     MiMakeZeroedPageTables @ 0x14038EACC (MiMakeZeroedPageTables.c)
 *     VslInitializeSecureKernelCfg @ 0x140589F04 (VslInitializeSecureKernelCfg.c)
 *     MxInstallMoreMemory @ 0x140660BB0 (MxInstallMoreMemory.c)
 *     MiProcessKernelCfgAddressTakenImports @ 0x140AB735C (MiProcessKernelCfgAddressTakenImports.c)
 */

void MiInitializeKernelCfg()
{
  unsigned __int64 v0; // rbx
  __int64 v1; // rax

  if ( (MiFlags & 0x40000) != 0 )
  {
    v0 = qword_140E388D8;
    v1 = MiReservePtes((__int64)&qword_140E37328, 0x20u);
    if ( !v1
      || (int)VslInitializeSecureKernelCfg(v0, v1 << 25 >> 16) < 0
      || (qword_140E2D4D8 = v0,
          qword_140E2D4D0 = 0x100000000000LL,
          !(unsigned int)MiMakeZeroedPageTables(
                           (unsigned int)(v0 >> 9) & 0xFFFFFFF8,
                           (unsigned int)((v0 + 0x1FFFFFFFFFFLL) >> 9) & 0xFFFFFFF8,
                           2048,
                           8)) )
    {
      MxInstallMoreMemory(32);
    }
    qword_140E2D4E0 = 0LL;
    MiEnumerateSystemImages((__int64)MiInitializeKernelCfgImages, 0LL, 0);
    MiEnumerateSystemImages((__int64)MiInitializeKernelCfgImages, 1LL, 0);
    MiProcessKernelCfgAddressTakenImports(0LL);
    guard_icall_bitmap = qword_140E2D4D8 - 0x3FFFE0000000000LL;
  }
}
