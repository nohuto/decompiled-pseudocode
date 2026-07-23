/*
 * XREFs of MiDriverLoadSucceeded @ 0x1406F74AC
 * Callers:
 *     MiApplyHotPatchToLoadedDriver @ 0x1407F19B8 (MiApplyHotPatchToLoadedDriver.c)
 * Callees:
 *     MiSectionControlArea @ 0x140355A80 (MiSectionControlArea.c)
 *     VfDriverLoadSucceeded @ 0x1404ADC50 (VfDriverLoadSucceeded.c)
 *     MiGetBaseLoaderPortion @ 0x1404C96FC (MiGetBaseLoaderPortion.c)
 *     MiProtectSystemImage @ 0x140A8D1E8 (MiProtectSystemImage.c)
 *     MiCacheImageSymbols @ 0x140ABAE40 (MiCacheImageSymbols.c)
 *     MiCallImageNotify @ 0x140ABD9B4 (MiCallImageNotify.c)
 */

void __fastcall MiDriverLoadSucceeded(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 BaseLoaderPortion; // rax

  *(_DWORD *)(a1 + 104) |= 0x41004000u;
  BaseLoaderPortion = MiGetBaseLoaderPortion(a1);
  *(_DWORD *)(BaseLoaderPortion + 184) |= 2u;
  MiCallImageNotify();
  MiCacheImageSymbols(a1, a3, a4);
  if ( !*(_QWORD *)(MiSectionControlArea(*(_QWORD *)(a1 + 112)) + 144) || (*(_DWORD *)(a1 + 104) & 0x8000000) == 0 )
    MiProtectSystemImage(a1, 0LL);
  VfDriverLoadSucceeded(a1);
}
