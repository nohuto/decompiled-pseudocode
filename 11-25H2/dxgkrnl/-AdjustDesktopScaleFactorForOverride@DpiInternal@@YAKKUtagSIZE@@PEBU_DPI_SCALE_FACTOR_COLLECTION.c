/*
 * XREFs of ?AdjustDesktopScaleFactorForOverride@DpiInternal@@YAKKUtagSIZE@@PEBU_DPI_SCALE_FACTOR_COLLECTION@@HH@Z @ 0x140062690
 * Callers:
 *     ?FillOverridesAndAdjustedScaleFactor@DpiInternal@@YAXIHPEBU_DPI_SCALE_FACTOR_COLLECTION@@PEAU_DPI_INFORMATION@@H@Z @ 0x140056330 (-FillOverridesAndAdjustedScaleFactor@DpiInternal@@YAXIHPEBU_DPI_SCALE_FACTOR_COLLECTION@@PEAU_DP.c)
 *     ?UpdateScaleFactorForOverride@@YAXPEAU_DPI_INFORMATION@@HPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x14006EE8C (-UpdateScaleFactorForOverride@@YAXPEAU_DPI_INFORMATION@@HPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z.c)
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1403A6D68 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATIO.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?AdjustScaleFactorForOverride@DpiInternal@@YAKKHUtagSIZE@@PEBU_DPI_SCALE_FACTOR_COLLECTION@@H@Z @ 0x1400560A4 (-AdjustScaleFactorForOverride@DpiInternal@@YAKKHUtagSIZE@@PEBU_DPI_SCALE_FACTOR_COLLECTION@@H@Z.c)
 */

unsigned int __fastcall DpiInternal::AdjustDesktopScaleFactorForOverride(
        DpiInternal *this,
        int a2,
        struct tagSIZE a3,
        const struct _DPI_SCALE_FACTOR_COLLECTION *a4,
        struct _DPI_SCALE_FACTOR_COLLECTION *a5)
{
  int v5; // edi
  unsigned int v8; // ebp
  struct _DPI_SCALE_FACTOR_COLLECTION *v10; // [rsp+20h] [rbp-38h]

  v5 = (int)a4;
  v8 = (unsigned int)this;
  if ( (unsigned int)((_DWORD)a4 + 11) > 0x16 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 322;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"(Override >= MIN_DESKTOPDPIOVERRIDE) && (Override <= MAX_DESKTOPDPIOVERRIDE)",
      322LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  LODWORD(v10) = (_DWORD)a5;
  return DpiInternal::AdjustScaleFactorForOverride((DpiInternal *)v8, v5, a2, a3, v10);
}
