/*
 * XREFs of ?AdjustScaleFactorForOverride@Win81@@YAKKHUtagSIZE@@PEBUDPI_SCALE_FACTOR_COLLECTION@1@@Z @ 0x1401D6178
 * Callers:
 *     ?AdjustDesktopScaleFactorForOverride@Win81@@YAKKUtagSIZE@@H@Z @ 0x1401D60E4 (-AdjustDesktopScaleFactorForOverride@Win81@@YAKKUtagSIZE@@H@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?SatisfyMinResolutionBarForScaleIdx@Win81@@YAKHUtagSIZE@@QEBUDPI_SCALE_FACTOR_COLLECTION@1@@Z @ 0x1401D6A70 (-SatisfyMinResolutionBarForScaleIdx@Win81@@YAKHUtagSIZE@@QEBUDPI_SCALE_FACTOR_COLLECTION@1@@Z.c)
 */

unsigned int __fastcall Win81::AdjustScaleFactorForOverride(Win81 *this, int a2, struct tagSIZE a3, struct tagSIZE a4)
{
  _DWORD *v4; // rax
  int cx; // ebx
  unsigned int i; // edi

  v4 = &unk_1400FEC40;
  cx = a3.cx;
  for ( i = 0; i < 5; ++i )
  {
    if ( (_DWORD)this == *v4 )
      break;
    ++v4;
  }
  if ( i >= 5 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 448;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"(UINT)idx < pScaleFactorCollection->NumFactors",
      448LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return Win81::SatisfyMinResolutionBarForScaleIdx(
           (Win81 *)(i + a2),
           cx,
           a3,
           *(const struct Win81::DPI_SCALE_FACTOR_COLLECTION *const *)&a4);
}
