/*
 * XREFs of MiInitializeKernelCfg @ 0x140C5BA6C
 * Callers:
 *     MiInitializeLoadedModuleList @ 0x140C5D4A8 (MiInitializeLoadedModuleList.c)
 * Callees:
 *     MiMakeZeroedPageTables @ 0x14026CB1C (MiMakeZeroedPageTables.c)
 *     MiReservePtes @ 0x14029FB10 (MiReservePtes.c)
 *     MiEnumerateSystemImages @ 0x1402BBF00 (MiEnumerateSystemImages.c)
 *     VslInitializeSecureKernelCfg @ 0x14058A914 (VslInitializeSecureKernelCfg.c)
 *     MxInstallMoreMemory @ 0x14066D8C0 (MxInstallMoreMemory.c)
 *     MiProcessKernelCfgAddressTakenImports @ 0x140AB66BC (MiProcessKernelCfgAddressTakenImports.c)
 */

void MiInitializeKernelCfg()
{
  unsigned __int64 v0; // rbx
  __int64 v1; // rax

  if ( (MiFlags & 0x40000) != 0 )
  {
    v0 = qword_140E38C58;
    v1 = MiReservePtes((__int64)&qword_140E376A8, 0x20u);
    if ( !v1
      || (int)VslInitializeSecureKernelCfg(v0, v1 << 25 >> 16) < 0
      || (qword_140E2D858 = v0,
          qword_140E2D850 = 0x100000000000LL,
          !(unsigned int)MiMakeZeroedPageTables(
                           (unsigned int)(v0 >> 9) & 0xFFFFFFF8,
                           (unsigned int)((v0 + 0x1FFFFFFFFFFLL) >> 9) & 0xFFFFFFF8,
                           2048,
                           8)) )
    {
      MxInstallMoreMemory(32);
    }
    qword_140E2D860 = 0LL;
    MiEnumerateSystemImages((__int64)MiInitializeKernelCfgImages, 0LL, 0);
    MiEnumerateSystemImages((__int64)MiInitializeKernelCfgImages, 1LL, 0);
    MiProcessKernelCfgAddressTakenImports(0LL);
    guard_icall_bitmap = qword_140E2D858 - 0x3FFFE0000000000LL;
  }
}
