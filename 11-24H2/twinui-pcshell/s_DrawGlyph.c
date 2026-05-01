/*
 * XREFs of s_DrawGlyph @ 0x180684E60
 * Callers:
 *     s_OnDrawItemHelper @ 0x1806857A0 (s_OnDrawItemHelper.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x180033234 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180065FB4 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_HVCZMTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801F8B18 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_HVCZMTest@@@details@wil@@QEAAX_NW4Reporti.c)
 *     ?Release@?$CTSmartObj@PEAUHFONT__@@V?$CAutoHandle_Policy@PEAUHFONT__@@@@@@QEAAXXZ @ 0x1802089E8 (-Release@-$CTSmartObj@PEAUHFONT__@@V-$CAutoHandle_Policy@PEAUHFONT__@@@@@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     ?ScaleByType@DPIToPPIHelpers@@YAHW4ScaleType@1@HPEAUHWND__@@HW4ScaleModifier@1@@Z @ 0x180687AE0 (-ScaleByType@DPIToPPIHelpers@@YAHW4ScaleType@1@HPEAUHWND__@@HW4ScaleModifier@1@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall s_DrawGlyph(
        HWND hWnd,
        COLORREF a2,
        void *a3,
        HDC a4,
        int a5,
        __int16 a6,
        int iStateId,
        struct tagRECT *a8,
        unsigned int a9)
{
  int Error; // esi
  char v12; // di
  UINT v13; // r13d
  int *v14; // r15
  unsigned int v15; // ebx
  int v16; // eax
  LONG v17; // eax
  HFONT v18; // rbx
  COLORREF v19; // eax
  COLORREF v20; // edi
  HGDIOBJ v21; // rbx
  COLORREF v23; // [rsp+30h] [rbp-B1h] BYREF
  COLORREF pColor; // [rsp+34h] [rbp-ADh] BYREF
  int v25; // [rsp+38h] [rbp-A9h] BYREF
  WCHAR chText[2]; // [rsp+3Ch] [rbp-A5h] BYREF
  int v27; // [rsp+40h] [rbp-A1h] BYREF
  int v28; // [rsp+44h] [rbp-9Dh] BYREF
  int mode; // [rsp+48h] [rbp-99h]
  HTHEME hTheme; // [rsp+50h] [rbp-91h]
  HGDIOBJ v31; // [rsp+58h] [rbp-89h]
  LPRECT lprc; // [rsp+60h] [rbp-81h]
  HFONT v33; // [rsp+68h] [rbp-79h] BYREF
  LOGFONTW lf; // [rsp+70h] [rbp-71h] BYREF

  hTheme = a3;
  v23 = a2;
  lprc = a8;
  wcscpy(chText, L"");
  v25 = 63372;
  v27 = 59764;
  v28 = 59763;
  Error = -2147023728;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_HVCZMTest>::ReportUsage(
    (__int64)&`wil::Feature<__WilFeatureTraits_Feature_HVCZMTest>::GetImpl'::`2'::impl,
    1u,
    (__int64)a3,
    (__int64)a4);
  v12 = 0;
  v13 = 37;
  if ( a5 == 11 )
  {
    v14 = &v25;
    if ( (a6 & 0x200) != 0 )
      v14 = (int *)chText;
    v15 = (a6 & 0x200) != 0 ? -16 : -10;
  }
  else
  {
    if ( a5 != 16 )
      return (unsigned int)Error;
    v16 = GetWindowLongW(hWnd, -20) & 0x400000;
    v12 = 1;
    v15 = -10;
    v14 = &v27;
    if ( v16 )
      v14 = &v28;
    v13 = v16 != 0 ? 131109 : 37;
  }
  memset_0(&lf, 0, sizeof(lf));
  v17 = DPIToPPIHelpers::ScaleByType(a9, v15, hWnd, v23);
  if ( v12 && (v17 & 1) == 0 )
    --v17;
  lf.lfHeight = v17;
  lf.lfWeight = 400;
  lf.lfCharSet = 1;
  lf.lfQuality = 5;
  Error = StringCchCopyW((char *)lf.lfFaceName, 32LL, (char *)L"Segoe Fluent Icons");
  if ( Error >= 0 )
  {
    v18 = CreateFontIndirectW(&lf);
    v33 = v18;
    if ( v18 )
    {
      Error = 0;
      mode = SetBkMode(a4, 1);
      pColor = 0;
      GetThemeColor(hTheme, 9, 0, 3802, &pColor);
      v19 = 0;
      if ( BYTE2(pColor) + 5 * BYTE1(pColor) + 2 * (unsigned int)(unsigned __int8)pColor <= 0x400 )
        v19 = 0xFFFFFF;
      v23 = v19;
      if ( ((iStateId - 2) & 0xFFFFFFFD) == 0 )
      {
        GetThemeColor(hTheme, 27, iStateId, 3803, &v23);
        v19 = v23;
      }
      v20 = SetTextColor(a4, v19);
      hTheme = a4;
      v21 = SelectObject(a4, v18);
      v31 = v21;
      if ( !DrawTextW(a4, (LPCWSTR)v14, 1, lprc, v13) )
        Error = ResultFromKnownLastError();
      SetTextColor(a4, v20);
      SetBkMode(a4, mode);
      SelectObject(a4, v21);
    }
    else
    {
      Error = -2147467259;
    }
    CTSmartObj<HFONT__ *,CAutoHandle_Policy<HFONT__ *>>::Release((void **)&v33);
  }
  return (unsigned int)Error;
}
