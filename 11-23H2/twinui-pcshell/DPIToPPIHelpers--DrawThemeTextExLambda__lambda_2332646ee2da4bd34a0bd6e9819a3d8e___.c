/*
 * XREFs of DPIToPPIHelpers::DrawThemeTextExLambda__lambda_2332646ee2da4bd34a0bd6e9819a3d8e___ @ 0x18074E0D0
 * Callers:
 *     ?DrawThemeTextExPPI@DPIToPPIHelpers@@YAJPEAUHWND__@@W4ScaleType@1@PEAIPEAXPEAUHDC__@@HHPEBGHKPEAUtagRECT@@PEAU_DTTOPTS@@@Z @ 0x18074E3B8 (-DrawThemeTextExPPI@DPIToPPIHelpers@@YAJPEAUHWND__@@W4ScaleType@1@PEAIPEAXPEAUHDC__@@HHPEBGHKPEA.c)
 * Callees:
 *     memset_0 @ 0x1801C750C (memset_0.c)
 */

HRESULT __fastcall DPIToPPIHelpers::DrawThemeTextExLambda__lambda_2332646ee2da4bd34a0bd6e9819a3d8e___(
        HTHEME hTheme,
        HDC hdc,
        __int64 a3,
        int a4,
        LPCWSTR pszText,
        int cchText,
        DWORD dwTextFlags,
        LPRECT pRect,
        DTTOPTS *a9,
        LPARAM a10)
{
  DTTOPTS *pOptions; // r8
  _DWORD v15[20]; // [rsp+50h] [rbp-58h] BYREF

  memset_0(v15, 0, 0x48uLL);
  pOptions = (DTTOPTS *)v15;
  v15[0] = 72;
  if ( a9 )
    pOptions = a9;
  pOptions->dwFlags |= 0x3000u;
  pOptions->pfnDrawTextCallback = (DTT_CALLBACK_PROC)CCLambdaAdapter_int____cdecl___HDC_____unsigned_short___int_tagRECT___unsigned_int___int64__6_::Adapt__lambda_2332646ee2da4bd34a0bd6e9819a3d8e___;
  pOptions->lParam = a10;
  return DrawThemeTextEx(hTheme, hdc, 27, a4, pszText, cchText, dwTextFlags, pRect, pOptions);
}
