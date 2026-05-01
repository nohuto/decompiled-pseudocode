/*
 * XREFs of s_OnDrawItemHelper @ 0x18028640C
 * Callers:
 *     ?s_ContextMenuWndProc@CImmersiveContextMenuOwnerDrawHelper@@SA_NPEAUHWND__@@I_K_JPEA_NPEAW4GRID_HOW_SELECTED_FLAGS@@@Z @ 0x1802EC2E0 (-s_ContextMenuWndProc@CImmersiveContextMenuOwnerDrawHelper@@SA_NPEAUHWND__@@I_K_JPEA_NPEAW4GRID_.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_HVCZMTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180115270 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_HVCZMTest@@@details@wil@@QEAAX_NW4Reporti.c)
 *     ?IsHighContrast@@YAHXZ @ 0x18019CA9C (-IsHighContrast@@YAHXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     floorf @ 0x1801C7470 (floorf.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     ??0CompatibleDC@Wrappers@WRL@Microsoft@@QEAA@PEAUHDC__@@@Z @ 0x1802EC2A4 (--0CompatibleDC@Wrappers@WRL@Microsoft@@QEAA@PEAUHDC__@@@Z.c)
 *     ?ResultFromWin32Bool@@YAJH@Z @ 0x1803B0ED0 (-ResultFromWin32Bool@@YAJH@Z.c)
 *     ?MulDiv@CRect@Geometry@@SA?AU12@AEBUtagRECT@@HH@Z @ 0x1805E9C60 (-MulDiv@CRect@Geometry@@SA-AU12@AEBUtagRECT@@HH@Z.c)
 *     ??1CompatibleDC@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x18074BE14 (--1CompatibleDC@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 *     ?CheckValidity@CompatibleDC@Wrappers@WRL@Microsoft@@QEAAJXZ @ 0x18074BED4 (-CheckValidity@CompatibleDC@Wrappers@WRL@Microsoft@@QEAAJXZ.c)
 *     ?SHComputeDPI@@YAXPEAUHWND__@@PEAH1@Z @ 0x18074C22C (-SHComputeDPI@@YAXPEAUHWND__@@PEAH1@Z.c)
 *     s_AreAeroUpdatesAvailable @ 0x18074C278 (s_AreAeroUpdatesAvailable.c)
 *     s_DrawGlyph @ 0x18074C2A8 (s_DrawGlyph.c)
 *     s_DrawThemeTextPPIAware @ 0x18074C5CC (s_DrawThemeTextPPIAware.c)
 *     s_SetDwmAttributes @ 0x18074D064 (s_SetDwmAttributes.c)
 *     ?ScaleByType@DPIToPPIHelpers@@YAHW4ScaleType@1@HPEAUHWND__@@HW4ScaleModifier@1@@Z @ 0x18074E754 (-ScaleByType@DPIToPPIHelpers@@YAHW4ScaleType@1@HPEAUHWND__@@HW4ScaleModifier@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall s_OnDrawItemHelper(HWND hWnd, __int64 a2, __int64 a3)
{
  int ScaleFactorForWindow; // edi
  int v7; // ebx
  const WCHAR *v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  HTHEME v11; // r14
  int v12; // edi
  unsigned int v13; // esi
  __int64 v14; // rdx
  int *v15; // rsi
  HWND v16; // rax
  unsigned int PropW; // edi
  HRESULT v18; // eax
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // ebx
  int v22; // edi
  int v23; // r14d
  int v24; // esi
  int v25; // esi
  __int64 v26; // r9
  __int64 v27; // r8
  int v28; // ebx
  int v29; // eax
  int v30; // eax
  int v31; // eax
  __int64 v32; // r9
  __int64 v33; // r8
  int v34; // ebx
  int v35; // eax
  int v36; // eax
  int v37; // eax
  int v38; // ebx
  int v39; // ebx
  BOOL v40; // eax
  void *v41; // rbx
  HWND v42; // rcx
  int v43; // eax
  int v44; // edi
  int v45; // r8d
  int v46; // ecx
  BOOL v47; // eax
  int v48; // ebx
  int v49; // edi
  __int64 v50; // r9
  __int64 v51; // r8
  int v52; // ebx
  int v53; // eax
  int v54; // eax
  int v56; // eax
  __int64 v57; // rdx
  int v58; // eax
  float v59; // xmm0_4
  int xLeft; // [rsp+60h] [rbp-A0h]
  int xLefta; // [rsp+60h] [rbp-A0h]
  int xLeftb; // [rsp+60h] [rbp-A0h]
  char v63; // [rsp+64h] [rbp-9Ch]
  int nDenominator; // [rsp+68h] [rbp-98h] BYREF
  int yTop; // [rsp+6Ch] [rbp-94h]
  HDC hdc[2]; // [rsp+70h] [rbp-90h] BYREF
  int v67; // [rsp+80h] [rbp-80h]
  int nNumerator[2]; // [rsp+88h] [rbp-78h]
  unsigned int v69; // [rsp+90h] [rbp-70h] BYREF
  COLORREF pColor[2]; // [rsp+98h] [rbp-68h] BYREF
  HGDIOBJ h; // [rsp+A0h] [rbp-60h]
  _BYTE pv[4]; // [rsp+A8h] [rbp-58h] BYREF
  int nNumber; // [rsp+ACh] [rbp-54h]
  int hSrc; // [rsp+B0h] [rbp-50h]
  SHSTOCKICONINFO psii; // [rsp+D0h] [rbp-30h] BYREF
  HDC v76[2]; // [rsp+2F0h] [rbp+1F0h] BYREF
  MARGINS pMargins; // [rsp+300h] [rbp+200h] BYREF
  _BYTE v78[46]; // [rsp+310h] [rbp+210h] BYREF
  __int16 v79; // [rsp+33Eh] [rbp+23Eh]
  int v80; // [rsp+340h] [rbp+240h]

  ScaleFactorForWindow = -2147418113;
  if ( a3 )
  {
    v7 = 2;
    xLeft = 2;
    if ( MonitorFromWindow(hWnd, 2u) )
    {
      ScaleFactorForWindow = GetScaleFactorForWindow(hWnd, &v69);
      if ( ScaleFactorForWindow >= 0 )
      {
        if ( *(_BYTE *)(a3 + 68) )
        {
          v8 = L"DarkMode_ImmersiveStart::Menu";
        }
        else
        {
          v8 = L"LightMode_ImmersiveStart::Menu";
          if ( !*(_BYTE *)(a3 + 69) )
            v8 = L"ImmersiveStart::Menu";
        }
        v11 = OpenThemeData(0LL, v8);
        *(_QWORD *)nNumerator = v11;
        if ( v11 )
        {
          v12 = *(_DWORD *)(a2 + 16);
          yTop = v12;
          wil::details::FeatureImpl<__WilFeatureTraits_Feature_HVCZMTest>::ReportUsage(
            `wil::Feature<__WilFeatureTraits_Feature_HVCZMTest>::GetImpl'::`2'::impl,
            1u,
            v9,
            v10);
          if ( !(unsigned int)IsHighContrast() && (unsigned __int8)s_AreAeroUpdatesAvailable() )
            s_SetDwmAttributes(*(_QWORD *)(a2 + 24), v11);
          v13 = 6;
          if ( (*(_BYTE *)(a3 + 56) & 1) != 0 )
          {
            if ( *(_BYTE *)(a3 + 69) || (v14 = 2LL, (*(_BYTE *)(a3 + 56) & 4) != 0) )
              v14 = 6LL;
            *(_DWORD *)(a2 + 44) += DPIToPPIHelpers::ScaleByType(
                                      *(unsigned int *)(a3 + 60),
                                      v14,
                                      hWnd,
                                      *(unsigned int *)(a3 + 64));
          }
          if ( (*(_BYTE *)(a3 + 56) & 2) != 0 )
          {
            if ( !*(_BYTE *)(a3 + 69) && (*(_BYTE *)(a3 + 56) & 4) == 0 )
              v13 = 2;
            *(_DWORD *)(a2 + 52) -= DPIToPPIHelpers::ScaleByType(
                                      *(unsigned int *)(a3 + 60),
                                      v13,
                                      hWnd,
                                      *(unsigned int *)(a3 + 64));
          }
          if ( (v12 & 4) != 0 )
          {
            if ( (v12 & 1) != 0 && *(_QWORD *)a3 && **(_WORD **)a3 )
              v7 = 4;
            else
              v7 = 3;
          }
          else
          {
            if ( (v12 & 1) != 0 && *(_QWORD *)a3 && **(_WORD **)a3 )
            {
LABEL_33:
              pMargins = 0LL;
              v15 = (int *)(a2 + 40);
              if ( GetThemeMargins(v11, *(HDC *)(a2 + 32), 27, v7, 3602, 0LL, &pMargins) >= 0 )
              {
                *v15 += DPIToPPIHelpers::ScaleByType(
                          *(unsigned int *)(a3 + 60),
                          (unsigned int)pMargins.cxLeftWidth,
                          hWnd,
                          *(unsigned int *)(a3 + 64));
                *(_DWORD *)(a2 + 48) -= DPIToPPIHelpers::ScaleByType(
                                          *(unsigned int *)(a3 + 60),
                                          (unsigned int)pMargins.cxRightWidth,
                                          hWnd,
                                          *(unsigned int *)(a3 + 64));
              }
              v16 = WindowFromDC(*(HDC *)(a2 + 32));
              PropW = (unsigned int)GetPropW(v16, L"KB_FOCUS_MENU");
              if ( (unsigned int)IsHighContrast()
                || !IsThemePartDefined(v11, 26, 0)
                || !PropW
                || ((v7 - 2) & 0xFFFFFFFD) != 0 )
              {
                v18 = DrawThemeBackground(v11, *(HDC *)(a2 + 32), 27, v7, (LPCRECT)(a2 + 40), 0LL);
              }
              else
              {
                v18 = DrawThemeBackground(v11, *(HDC *)(a2 + 32), 26, 1, (LPCRECT)(a2 + 40), 0LL);
              }
              ScaleFactorForWindow = v18;
              if ( v18 < 0 )
                goto LABEL_91;
              if ( *(_QWORD *)a3 && **(_WORD **)a3 )
              {
                if ( *(_DWORD *)(a3 + 24) != 2048 )
                {
                  v21 = *v15;
                  v22 = *(_DWORD *)(a2 + 44);
                  v23 = *(_DWORD *)(a2 + 48);
                  v24 = *(_DWORD *)(a2 + 52);
                  LODWORD(hdc[0]) = v21
                                  + DPIToPPIHelpers::ScaleByType(
                                      *(unsigned int *)(a3 + 60),
                                      32LL,
                                      hWnd,
                                      *(unsigned int *)(a3 + 64));
                  HIDWORD(hdc[0]) = v22;
                  LODWORD(hdc[1]) = v23
                                  - DPIToPPIHelpers::ScaleByType(
                                      *(unsigned int *)(a3 + 60),
                                      17LL,
                                      hWnd,
                                      *(unsigned int *)(a3 + 64));
                  HIDWORD(hdc[1]) = v24;
                  v25 = xLeft;
                  v11 = *(HTHEME *)nNumerator;
                  ScaleFactorForWindow = s_DrawThemeTextPPIAware(*(HTHEME *)nNumerator, a3, (__int64)hdc);
                  if ( ScaleFactorForWindow < 0 )
                    goto LABEL_90;
                  v67 = *(_DWORD *)(a2 + 52) - *(_DWORD *)(a2 + 44);
                  if ( (yTop & 8) != 0 && !*(_QWORD *)(a3 + 40) )
                  {
                    *(__m128i *)v76 = _mm_load_si128((const __m128i *)&_xmm);
                    if ( *(_DWORD *)(a3 + 60) == 1 )
                    {
                      v26 = 100LL;
                      v27 = v69;
                    }
                    else
                    {
                      v26 = 96LL;
                      v27 = *(unsigned int *)(a3 + 64);
                    }
                    *(_OWORD *)v76 = *(_OWORD *)Geometry::CRect::MulDiv(hdc, v76, v27, v26);
                    v28 = *(_DWORD *)(a2 + 44);
                    v29 = DPIToPPIHelpers::ScaleByType(
                            *(unsigned int *)(a3 + 60),
                            16LL,
                            hWnd,
                            *(unsigned int *)(a3 + 64));
                    v30 = v67 / 2 - v29 / 2;
                    HIDWORD(v76[1]) += v28 + v30;
                    HIDWORD(v76[0]) += v28 + v30;
                    *(_OWORD *)hdc = *(_OWORD *)v76;
                    v31 = s_DrawGlyph(hWnd, 11, *(_DWORD *)(a3 + 24), xLeft, (__int64)hdc, *(_DWORD *)(a3 + 60));
                    goto LABEL_61;
                  }
                  if ( *(_DWORD *)(a3 + 28) == -1 )
                  {
                    v41 = *(void **)(a3 + 32);
                    if ( v41
                      || (yTop & 8) != 0 && (v41 = *(void **)(a3 + 40)) != 0LL
                      || (v41 = *(void **)(a3 + 48)) != 0LL )
                    {
                      ScaleFactorForWindow = -2147467259;
                      if ( !GetObjectW(v41, 32, pv) )
                        goto LABEL_90;
                      Microsoft::WRL::Wrappers::CompatibleDC::CompatibleDC(
                        (Microsoft::WRL::Wrappers::CompatibleDC *)hdc,
                        *(HDC *)(a2 + 32));
                      ScaleFactorForWindow = Microsoft::WRL::Wrappers::CompatibleDC::CheckValidity((Microsoft::WRL::Wrappers::CompatibleDC *)hdc);
                      if ( ScaleFactorForWindow >= 0 )
                      {
                        v42 = (HWND)(unsigned int)DPIToPPIHelpers::ScaleByType(
                                                    *(unsigned int *)(a3 + 60),
                                                    16LL,
                                                    hWnd,
                                                    *(unsigned int *)(a3 + 64));
                        v43 = hSrc;
                        xLeftb = hSrc;
                        v44 = nNumber;
                        v63 = 0;
                        if ( hSrc > (int)v42 || nNumber > (int)v42 )
                        {
                          nNumerator[0] = *(_DWORD *)(a3 + 64);
                          SHComputeDPI(v42, &nDenominator, 0LL);
                          if ( nDenominator <= nNumerator[0] )
                          {
                            v43 = xLeftb;
                          }
                          else
                          {
                            v63 = 1;
                            v44 = MulDiv(v44, nNumerator[0], nDenominator);
                            v43 = MulDiv(xLeftb, nNumerator[0], nDenominator);
                            xLeftb = v43;
                          }
                        }
                        nDenominator = *(_DWORD *)(a2 + 44);
                        yTop = nDenominator + v43;
                        v45 = DPIToPPIHelpers::ScaleByType(
                                *(unsigned int *)(a3 + 60),
                                16LL,
                                hWnd,
                                *(unsigned int *)(a3 + 64));
                        if ( v45 > v44 )
                        {
                          v63 = 1;
                          v45 = 2 * v45 - v44;
                        }
                        v46 = (v67 - xLeftb) / 2;
                        nNumerator[0] = v45 / 2;
                        yTop += v46;
                        nDenominator += v46;
                        pColor[0] = 0;
                        GetThemeColor(v11, 27, v25, 3803, pColor);
                        v76[0] = hdc[1];
                        h = SelectObject(hdc[1], v41);
                        if ( GetObjectW(v41, 104, v78) == 104 && v79 == 32 && !v80 )
                        {
                          v47 = GdiAlphaBlend(
                                  *(HDC *)(a2 + 32),
                                  nNumerator[0],
                                  nDenominator,
                                  v44,
                                  yTop - nDenominator,
                                  hdc[1],
                                  0,
                                  0,
                                  nNumber,
                                  hSrc,
                                  (BLENDFUNCTION)33488896);
                        }
                        else
                        {
                          v48 = yTop - nDenominator;
                          if ( v63 )
                          {
                            SetStretchBltMode(*(HDC *)(a2 + 32), 3);
                            v47 = StretchBlt(
                                    *(HDC *)(a2 + 32),
                                    nNumerator[0],
                                    nDenominator,
                                    v44,
                                    v48,
                                    hdc[1],
                                    0,
                                    0,
                                    nNumber,
                                    hSrc,
                                    0xCC0020u);
                          }
                          else
                          {
                            v47 = BitBlt(
                                    *(HDC *)(a2 + 32),
                                    nNumerator[0],
                                    nDenominator,
                                    v44,
                                    yTop - nDenominator,
                                    hdc[1],
                                    0,
                                    0,
                                    0xCC0020u);
                          }
                        }
                        ScaleFactorForWindow = ResultFromWin32Bool(v47);
                        SelectObject(v76[0], h);
                      }
                      Microsoft::WRL::Wrappers::CompatibleDC::~CompatibleDC((Microsoft::WRL::Wrappers::CompatibleDC *)hdc);
                      goto LABEL_84;
                    }
                  }
                  else
                  {
                    *(__m128i *)v76 = _mm_load_si128((const __m128i *)&_xmm);
                    if ( *(_DWORD *)(a3 + 60) == 1 )
                    {
                      v32 = 100LL;
                      v33 = v69;
                    }
                    else
                    {
                      v32 = 96LL;
                      v33 = *(unsigned int *)(a3 + 64);
                    }
                    *(_OWORD *)v76 = *(_OWORD *)Geometry::CRect::MulDiv(hdc, v76, v33, v32);
                    v34 = *(_DWORD *)(a2 + 44);
                    v35 = DPIToPPIHelpers::ScaleByType(
                            *(unsigned int *)(a3 + 60),
                            16LL,
                            hWnd,
                            *(unsigned int *)(a3 + 64));
                    v36 = v67 / 2 - v35 / 2;
                    *(_QWORD *)pColor = (unsigned int)(v34 + v36 + HIDWORD(v76[1]));
                    yTop = v34 + HIDWORD(v76[0]) + v36;
                    if ( *(_DWORD *)(a3 + 60) )
                    {
                      v38 = (int)v76[1];
                      xLefta = (int)v76[0];
                    }
                    else
                    {
                      v37 = (int)DPIToPPIHelpers::ScaleByType(0LL, 16LL, hWnd, *(unsigned int *)(a3 + 64)) / 2;
                      xLefta = v37 + LODWORD(v76[0]);
                      v38 = v37 + LODWORD(v76[1]);
                    }
                    memset_0(&psii.cbSize + 1, 0, 0x21CuLL);
                    psii.cbSize = 544;
                    v39 = v38 - xLefta;
                    if ( SHGetStockIconInfo(*(SHSTOCKICONID *)(a3 + 28), (v39 < 24) + 256, &psii) >= 0 )
                    {
                      v40 = DrawIconEx(*(HDC *)(a2 + 32), xLefta, yTop, psii.hIcon, v39, pColor[0] - yTop, 0, 0LL, 3u);
                      v31 = ResultFromWin32Bool(v40);
LABEL_61:
                      ScaleFactorForWindow = v31;
LABEL_84:
                      if ( ScaleFactorForWindow >= 0 )
                        goto LABEL_85;
LABEL_90:
                      v15 = (int *)(a2 + 40);
LABEL_91:
                      ExcludeClipRect(
                        *(HDC *)(a2 + 32),
                        *v15,
                        *(_DWORD *)(a2 + 44),
                        *(_DWORD *)(a2 + 48),
                        *(_DWORD *)(a2 + 52));
                      CloseThemeData(v11);
                      return (unsigned int)ScaleFactorForWindow;
                    }
                  }
LABEL_85:
                  if ( (*(_BYTE *)(a3 + 24) & 0x10) != 0 )
                  {
                    *(__m128i *)v76 = _mm_load_si128((const __m128i *)&_xmm);
                    v49 = *(_DWORD *)(a2 + 48)
                        - DPIToPPIHelpers::ScaleByType(
                            *(unsigned int *)(a3 + 60),
                            28LL,
                            hWnd,
                            *(unsigned int *)(a3 + 64));
                    if ( *(_DWORD *)(a3 + 60) == 1 )
                    {
                      v50 = 100LL;
                      v51 = v69;
                    }
                    else
                    {
                      v50 = 96LL;
                      v51 = *(unsigned int *)(a3 + 64);
                    }
                    *(_OWORD *)v76 = *(_OWORD *)Geometry::CRect::MulDiv(hdc, v76, v51, v50);
                    v52 = *(_DWORD *)(a2 + 44);
                    v53 = DPIToPPIHelpers::ScaleByType(
                            *(unsigned int *)(a3 + 60),
                            16LL,
                            hWnd,
                            *(unsigned int *)(a3 + 64));
                    v54 = v67 / 2 - v53 / 2;
                    LODWORD(hdc[0]) = v49 + LODWORD(v76[0]);
                    HIDWORD(hdc[0]) = v52 + v54 + HIDWORD(v76[0]);
                    LODWORD(hdc[1]) = v49 + LODWORD(v76[1]);
                    HIDWORD(hdc[1]) = v52 + HIDWORD(v76[1]) + v54;
                    ScaleFactorForWindow = s_DrawGlyph(
                                             hWnd,
                                             16,
                                             *(_DWORD *)(a3 + 24),
                                             v25,
                                             (__int64)hdc,
                                             *(_DWORD *)(a3 + 60));
                  }
                  goto LABEL_90;
                }
              }
              else if ( *(_DWORD *)(a3 + 24) != 2048 )
              {
                goto LABEL_91;
              }
              v76[0] = *(HDC *)v15;
              v76[1] = *(HDC *)(a2 + 48);
              wil::details::FeatureImpl<__WilFeatureTraits_Feature_HVCZMTest>::ReportUsage(
                `wil::Feature<__WilFeatureTraits_Feature_HVCZMTest>::GetImpl'::`2'::impl,
                1u,
                v19,
                v20);
              if ( !(unsigned __int8)s_AreAeroUpdatesAvailable() )
              {
                v56 = DPIToPPIHelpers::ScaleByType(*(unsigned int *)(a3 + 60), 8LL, hWnd, *(unsigned int *)(a3 + 64));
                LODWORD(v76[0]) += v56;
                LODWORD(v76[1]) -= v56;
              }
              if ( *(_BYTE *)(a3 + 69) || (v57 = 7LL, (*(_BYTE *)(a3 + 56) & 4) != 0) )
                v57 = 9LL;
              v58 = DPIToPPIHelpers::ScaleByType(*(unsigned int *)(a3 + 60), v57, hWnd, *(unsigned int *)(a3 + 64));
              v59 = floorf((double)(v58 - 5) * 0.5);
              HIDWORD(v76[0]) += (int)v59;
              --HIDWORD(v76[1]);
              DrawThemeBackground(v11, *(HDC *)(a2 + 32), 15, v7, (LPCRECT)v76, 0LL);
              goto LABEL_91;
            }
            v7 = 1;
          }
          xLeft = v7;
          goto LABEL_33;
        }
      }
    }
  }
  return (unsigned int)ScaleFactorForWindow;
}
