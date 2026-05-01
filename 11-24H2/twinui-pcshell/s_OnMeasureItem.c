/*
 * XREFs of s_OnMeasureItem @ 0x180686324
 * Callers:
 *     ?s_ContextMenuWndProc@CImmersiveContextMenuOwnerDrawHelper@@SA_NPEAUHWND__@@I_K_JPEA_NPEAW4GRID_HOW_SELECTED_FLAGS@@@Z @ 0x180684D64 (-s_ContextMenuWndProc@CImmersiveContextMenuOwnerDrawHelper@@SA_NPEAUHWND__@@I_K_JPEA_NPEAW4GRID_.c)
 * Callees:
 *     ?_EnsureCount@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180016B3C (-_EnsureCount@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x180033234 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?Release@?$CTSmartObj@PEAUHFONT__@@V?$CAutoHandle_Policy@PEAUHFONT__@@@@@@QEAAXXZ @ 0x1802089E8 (-Release@-$CTSmartObj@PEAUHFONT__@@V-$CAutoHandle_Policy@PEAUHFONT__@@@@@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     ??1ClientDC@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x180684858 (--1ClientDC@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 *     ?GetContextMenuDataForItem@ImmersiveContextMenuHelper@@YAPEAUContextMenuRenderingData@@PEAUHWND__@@_KI@Z @ 0x180686D24 (-GetContextMenuDataForItem@ImmersiveContextMenuHelper@@YAPEAUContextMenuRenderingData@@PEAUHWND_.c)
 *     ?GetThemeTextExtentPPI@DPIToPPIHelpers@@YAJPEAUHWND__@@W4ScaleType@1@PEAIPEAXPEAUHDC__@@HHPEBGHKPEAU_DTTOPTS@@PEAUtagRECT@@7@Z @ 0x180687874 (-GetThemeTextExtentPPI@DPIToPPIHelpers@@YAJPEAUHWND__@@W4ScaleType@1@PEAIPEAXPEAUHDC__@@HHPEBGHK.c)
 *     ?ScaleByType@DPIToPPIHelpers@@YAHW4ScaleType@1@HPEAUHWND__@@HW4ScaleModifier@1@@Z @ 0x180687AE0 (-ScaleByType@DPIToPPIHelpers@@YAHW4ScaleType@1@HPEAUHWND__@@HW4ScaleModifier@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall s_OnMeasureItem(HWND hwnd, __int64 a2, char a3, unsigned int a4)
{
  signed int Error; // edi
  struct ContextMenuRenderingData *ContextMenuDataForItem; // rax
  struct ContextMenuRenderingData *v8; // rsi
  const WCHAR *v9; // rdx
  __int64 v10; // rdx
  HWND WindowW; // rax
  HWND v12; // rbx
  LONG WindowLongW; // eax
  HFONT v14; // rax
  HGDIOBJ v15; // rbx
  unsigned int v16; // eax
  double v17; // xmm0_8
  unsigned int v18; // ebx
  __int64 v19; // rdx
  signed int ThemeTextExtentPPI; // [rsp+74h] [rbp-8Ch]
  HTHEME hTheme; // [rsp+78h] [rbp-88h]
  void **v24; // [rsp+90h] [rbp-70h] BYREF
  HDC hdc; // [rsp+98h] [rbp-68h]
  HWND v26; // [rsp+A0h] [rbp-60h]
  HFONT v27; // [rsp+A8h] [rbp-58h] BYREF
  LOGFONTW lf; // [rsp+B0h] [rbp-50h] BYREF
  int pvParam; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v30[220]; // [rsp+114h] [rbp+14h] BYREF
  LOGFONTW v31; // [rsp+1F0h] [rbp+F0h]

  Error = -2147418113;
  ContextMenuDataForItem = ImmersiveContextMenuHelper::GetContextMenuDataForItem(
                             hwnd,
                             *(HWND *)(a2 + 24),
                             *(unsigned int *)(a2 + 8),
                             a4);
  v8 = ContextMenuDataForItem;
  if ( ContextMenuDataForItem )
  {
    if ( *((_BYTE *)ContextMenuDataForItem + 68) )
    {
      v9 = L"DarkMode_ImmersiveStart::Menu";
    }
    else
    {
      v9 = L"LightMode_ImmersiveStart::Menu";
      if ( !*((_BYTE *)ContextMenuDataForItem + 69) )
        v9 = L"ImmersiveStart::Menu";
    }
    hTheme = OpenThemeData(0LL, v9);
    if ( hTheme )
    {
      if ( !MonitorFromWindow(hwnd, 2u) )
      {
LABEL_51:
        CloseThemeData(hTheme);
        return (unsigned int)Error;
      }
      if ( *((_DWORD *)v8 + 6) == 2048 )
      {
        if ( *((_BYTE *)v8 + 69) || (v10 = 7LL, (*((_BYTE *)v8 + 56) & 4) != 0) )
          v10 = 9LL;
        *(_DWORD *)(a2 + 16) = DPIToPPIHelpers::ScaleByType(
                                 *((unsigned int *)v8 + 15),
                                 v10,
                                 hwnd,
                                 *((unsigned int *)v8 + 16));
        goto LABEL_51;
      }
      WindowW = FindWindowW(L"#32768", 0LL);
      v12 = WindowW;
      if ( !WindowW )
      {
LABEL_39:
        if ( (*((_BYTE *)v8 + 56) & 1) != 0 )
        {
          if ( *((_BYTE *)v8 + 69) || (*((_BYTE *)v8 + 56) & 4) != 0 )
          {
            v19 = 6LL;
            v18 = 2;
          }
          else
          {
            v18 = 2;
            v19 = 2LL;
          }
          *(_DWORD *)(a2 + 16) += DPIToPPIHelpers::ScaleByType(
                                    *((unsigned int *)v8 + 15),
                                    v19,
                                    hwnd,
                                    *((unsigned int *)v8 + 16));
        }
        else
        {
          v18 = 2;
        }
        if ( (*((_BYTE *)v8 + 56) & 2) != 0 )
        {
          if ( *((_BYTE *)v8 + 69) || (*((_BYTE *)v8 + 56) & 4) != 0 )
            v18 = 6;
          *(_DWORD *)(a2 + 16) += DPIToPPIHelpers::ScaleByType(
                                    *((unsigned int *)v8 + 15),
                                    v18,
                                    hwnd,
                                    *((unsigned int *)v8 + 16));
        }
        goto LABEL_51;
      }
      WindowLongW = GetWindowLongW(WindowW, -20);
      if ( a3 && (WindowLongW & 0x400000) == 0 )
        SetWindowLongW(v12, -20, WindowLongW | 0x400000);
      v24 = &Microsoft::WRL::Wrappers::ClientDC::`vftable';
      v26 = v12;
      hdc = GetDC(v12);
      if ( !hdc
        || (memset_0(v30, 0, 0x1F4uLL), pvParam = 504, !SystemParametersInfoW(0x29u, 0x1F8u, &pvParam, 0))
        && (Error = ResultFromKnownLastError(), Error < 0) )
      {
LABEL_38:
        Microsoft::WRL::Wrappers::ClientDC::~ClientDC((Microsoft::WRL::Wrappers::ClientDC *)&v24);
        goto LABEL_39;
      }
      memset_0(&lf, 0, sizeof(lf));
      if ( GetThemeFont(hTheme, 0LL, 27, 0, 210, &lf) < 0 )
      {
        lf = v31;
      }
      else
      {
        if ( v31.lfHeight <= 0 )
        {
          if ( v31.lfHeight >= lf.lfHeight )
            goto LABEL_27;
        }
        else if ( v31.lfHeight <= lf.lfHeight )
        {
          goto LABEL_27;
        }
        lf.lfHeight = v31.lfHeight;
      }
LABEL_27:
      v14 = CreateFontIndirectW(&lf);
      v27 = v14;
      if ( v14 )
      {
        v15 = SelectObject(hdc, v14);
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCount(v8);
        ThemeTextExtentPPI = DPIToPPIHelpers::GetThemeTextExtentPPI(
                               hwnd,
                               *((unsigned int *)v8 + 15),
                               (char *)v8 + 64,
                               hTheme,
                               hdc);
        SelectObject(hdc, v15);
        Error = ThemeTextExtentPPI;
      }
      else
      {
        Error = -2147467259;
      }
      CTSmartObj<HFONT__ *,CAutoHandle_Policy<HFONT__ *>>::Release((void **)&v27);
      if ( Error >= 0 )
      {
        *(_DWORD *)(a2 + 12) = DPIToPPIHelpers::ScaleByType(
                                 *((unsigned int *)v8 + 15),
                                 93LL,
                                 hwnd,
                                 *((unsigned int *)v8 + 16));
        if ( (*((_BYTE *)v8 + 56) & 4) != 0 )
        {
          v16 = 36;
        }
        else
        {
          if ( *((_BYTE *)v8 + 69) )
            v17 = DOUBLE_24_0;
          else
            v17 = DOUBLE_16_0;
          v16 = (int)v17;
        }
        *(_DWORD *)(a2 + 16) = DPIToPPIHelpers::ScaleByType(
                                 *((unsigned int *)v8 + 15),
                                 v16,
                                 hwnd,
                                 *((unsigned int *)v8 + 16));
      }
      goto LABEL_38;
    }
  }
  return (unsigned int)Error;
}
