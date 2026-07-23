/*
 * XREFs of MiSetImageProtection @ 0x14042896C
 * Callers:
 *     MiRestoreImportTableProtection @ 0x1407E7DD8 (MiRestoreImportTableProtection.c)
 *     MiApplyHotPatchToDriverDataPages @ 0x1407F1858 (MiApplyHotPatchToDriverDataPages.c)
 *     MiPatchDataPagesCallback @ 0x1407F5A20 (MiPatchDataPagesCallback.c)
 *     MiCompactServiceTable @ 0x1407FB9AC (MiCompactServiceTable.c)
 *     MmLoadSystemImageEx @ 0x1409B7B70 (MmLoadSystemImageEx.c)
 *     MmChangeImageProtection @ 0x140A3BAE0 (MmChangeImageProtection.c)
 *     MiProcessKernelCfgImageLoadConfig @ 0x140A5E1C0 (MiProcessKernelCfgImageLoadConfig.c)
 *     MiSetImportTableProtection @ 0x140AA63CC (MiSetImportTableProtection.c)
 * Callees:
 *     MiSetSystemCodeProtection @ 0x1404289BC (MiSetSystemCodeProtection.c)
 */

__int64 __fastcall MiSetImageProtection(__int64 a1, unsigned __int64 a2, int a3)
{
  return MiSetSystemCodeProtection(
           a1,
           ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
           (((a2 + (unsigned int)(a3 - 1)) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
}
