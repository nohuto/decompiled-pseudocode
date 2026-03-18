/*
 * XREFs of MiSetImageProtection @ 0x1403F3430
 * Callers:
 *     MiRestoreImportTableProtection @ 0x1407D7950 (MiRestoreImportTableProtection.c)
 *     MiApplyHotPatchToDriverDataPages @ 0x1407E13E8 (MiApplyHotPatchToDriverDataPages.c)
 *     MiPatchDataPagesCallback @ 0x1407E54A0 (MiPatchDataPagesCallback.c)
 *     MiCompactServiceTable @ 0x1407EB3AC (MiCompactServiceTable.c)
 *     MmLoadSystemImageEx @ 0x1409B0468 (MmLoadSystemImageEx.c)
 *     MmChangeImageProtection @ 0x140A41ED0 (MmChangeImageProtection.c)
 *     MiProcessKernelCfgImageLoadConfig @ 0x140A63318 (MiProcessKernelCfgImageLoadConfig.c)
 *     MiSetImportTableProtection @ 0x140AA5BDC (MiSetImportTableProtection.c)
 * Callees:
 *     MiSetSystemCodeProtection @ 0x1403F3480 (MiSetSystemCodeProtection.c)
 */

__int64 __fastcall MiSetImageProtection(__int64 a1, unsigned __int64 a2, int a3)
{
  return MiSetSystemCodeProtection(
           a1,
           ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
           (((a2 + (unsigned int)(a3 - 1)) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
}
