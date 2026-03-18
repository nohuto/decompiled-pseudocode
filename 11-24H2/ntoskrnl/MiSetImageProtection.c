/*
 * XREFs of MiSetImageProtection @ 0x140435EEC
 * Callers:
 *     MiRestoreImportTableProtection @ 0x1407E7808 (MiRestoreImportTableProtection.c)
 *     MiApplyHotPatchToDriverDataPages @ 0x1407F1288 (MiApplyHotPatchToDriverDataPages.c)
 *     MiPatchDataPagesCallback @ 0x1407F5330 (MiPatchDataPagesCallback.c)
 *     MiCompactServiceTable @ 0x1407FB23C (MiCompactServiceTable.c)
 *     MmLoadSystemImageEx @ 0x1409C87D8 (MmLoadSystemImageEx.c)
 *     MmChangeImageProtection @ 0x140A45E20 (MmChangeImageProtection.c)
 *     MiProcessKernelCfgImageLoadConfig @ 0x140A659F0 (MiProcessKernelCfgImageLoadConfig.c)
 *     MiSetImportTableProtection @ 0x140AAB19C (MiSetImportTableProtection.c)
 * Callees:
 *     MiSetSystemCodeProtection @ 0x140435F3C (MiSetSystemCodeProtection.c)
 */

__int64 __fastcall MiSetImageProtection(__int64 a1, unsigned __int64 a2, int a3)
{
  return MiSetSystemCodeProtection(
           a1,
           ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
           (((a2 + (unsigned int)(a3 - 1)) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
}
