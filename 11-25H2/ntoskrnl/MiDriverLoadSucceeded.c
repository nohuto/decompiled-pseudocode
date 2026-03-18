/*
 * XREFs of MiDriverLoadSucceeded @ 0x1406EDB90
 * Callers:
 *     MiApplyHotPatchToLoadedDriver @ 0x1407E1548 (MiApplyHotPatchToLoadedDriver.c)
 * Callees:
 *     MiSectionControlArea @ 0x1403B4FE0 (MiSectionControlArea.c)
 *     VfDriverLoadSucceeded @ 0x1404B3520 (VfDriverLoadSucceeded.c)
 *     MiGetBaseLoaderPortion @ 0x1404D0B80 (MiGetBaseLoaderPortion.c)
 *     MiProtectSystemImage @ 0x140A8B9E8 (MiProtectSystemImage.c)
 *     MiCacheImageSymbols @ 0x140ABB930 (MiCacheImageSymbols.c)
 *     MiCallImageNotify @ 0x140ABE8DC (MiCallImageNotify.c)
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
