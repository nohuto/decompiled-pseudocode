/*
 * XREFs of s_OnMeasureItem @ 0x18074CC00
 * Callers:
 *     ?s_ContextMenuWndProc@CImmersiveContextMenuOwnerDrawHelper@@SA_NPEAUHWND__@@I_K_JPEA_NPEAW4GRID_HOW_SELECTED_FLAGS@@@Z @ 0x1802EC2E0 (-s_ContextMenuWndProc@CImmersiveContextMenuOwnerDrawHelper@@SA_NPEAUHWND__@@I_K_JPEA_NPEAW4GRID_.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x18004EB90 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?_EnsureCount@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180069938 (-_EnsureCount@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     ?GetContextMenuDataForItem@ImmersiveContextMenuHelper@@YAPEAUContextMenuRenderingData@@PEAUHWND__@@_KI@Z @ 0x1802EC3E8 (-GetContextMenuDataForItem@ImmersiveContextMenuHelper@@YAPEAUContextMenuRenderingData@@PEAUHWND_.c)
 *     ??0ClientDC@Wrappers@WRL@Microsoft@@QEAA@PEAUHWND__@@@Z @ 0x18074BD48 (--0ClientDC@Wrappers@WRL@Microsoft@@QEAA@PEAUHWND__@@@Z.c)
 *     ??1ClientDC@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x18074BDE0 (--1ClientDC@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 *     ?GetThemeTextExtentPPI@DPIToPPIHelpers@@YAJPEAUHWND__@@W4ScaleType@1@PEAIPEAXPEAUHDC__@@HHPEBGHKPEAU_DTTOPTS@@PEAUtagRECT@@7@Z @ 0x18074E4F0 (-GetThemeTextExtentPPI@DPIToPPIHelpers@@YAJPEAUHWND__@@W4ScaleType@1@PEAIPEAXPEAUHDC__@@HHPEBGHK.c)
 *     ?ScaleByType@DPIToPPIHelpers@@YAHW4ScaleType@1@HPEAUHWND__@@HW4ScaleModifier@1@@Z @ 0x18074E754 (-ScaleByType@DPIToPPIHelpers@@YAHW4ScaleType@1@HPEAUHWND__@@HW4ScaleModifier@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall s_OnMeasureItem(HWND hwnd, __int64 a2, char a3)
{
  HWND v4; // rdi
  signed int Error; // r12d
  struct ContextMenuRenderingData *ContextMenuDataForItem; // rax
  struct ContextMenuRenderingData *v7; // r14
  const WCHAR *v8; // rdx
  unsigned int v9; // esi
  __int64 v10; // rdx
  HWND WindowW; // rax
  HWND v12; // rbx
  LONG WindowLongW; // eax
  HFONT v14; // rax
  HFONT v15; // rbx
  HDC v16; // rsi
  HGDIOBJ v17; // rdi
  struct ContextMenuRenderingData *v18; // rbx
  __int64 v19; // rdx
  double v20; // xmm0_8
  __int64 v21; // rdx
  HTHEME hTheme; // [rsp+80h] [rbp-80h]
  char v26[8]; // [rsp+98h] [rbp-68h] BYREF
  HDC hdc; // [rsp+A0h] [rbp-60h]
  LOGFONTW lf; // [rsp+B0h] [rbp-50h] BYREF
  int pvParam; // [rsp+110h] [rbp+10h] BYREF
  char v30[220]; // [rsp+114h] [rbp+14h] BYREF
  LOGFONTW v31; // [rsp+1F0h] [rbp+F0h]

  v4 = hwnd;
  Error = -2147418113;
  ContextMenuDataForItem = ImmersiveContextMenuHelper::GetContextMenuDataForItem(
                             hwnd,
                             *(HWND *)(a2 + 24),
                             *(_DWORD *)(a2 + 8));
  v7 = ContextMenuDataForItem;
  if ( ContextMenuDataForItem )
  {
    if ( *((_BYTE *)ContextMenuDataForItem + 68) )
    {
      v8 = L"DarkMode_ImmersiveStart::Menu";
    }
    else
    {
      v8 = L"LightMode_ImmersiveStart::Menu";
      if ( !*((_BYTE *)ContextMenuDataForItem + 69) )
        v8 = L"ImmersiveStart::Menu";
    }
    hTheme = OpenThemeData(0LL, v8);
    if ( hTheme )
    {
      v9 = 2;
      if ( !MonitorFromWindow(v4, 2u) )
      {
LABEL_51:
        CloseThemeData(hTheme);
        return (unsigned int)Error;
      }
      if ( *((_DWORD *)v7 + 6) == 2048 )
      {
        if ( *((_BYTE *)v7 + 69) || (v10 = 7LL, (*((_BYTE *)v7 + 56) & 4) != 0) )
          v10 = 9LL;
        *(_DWORD *)(a2 + 16) = DPIToPPIHelpers::ScaleByType(
                                 *((unsigned int *)v7 + 15),
                                 v10,
                                 v4,
                                 *((unsigned int *)v7 + 16));
        goto LABEL_51;
      }
      WindowW = FindWindowW(L"#32768", 0LL);
      v12 = WindowW;
      if ( !WindowW )
      {
        v18 = v7;
        goto LABEL_41;
      }
      WindowLongW = GetWindowLongW(WindowW, -20);
      if ( a3 && (WindowLongW & 0x400000) == 0 )
        SetWindowLongW(v12, -20, WindowLongW | 0x400000);
      Microsoft::WRL::Wrappers::ClientDC::ClientDC((Microsoft::WRL::Wrappers::ClientDC *)v26, v12);
      if ( !hdc )
        goto LABEL_38;
      memset_0(v30, 0, 0x1F4uLL);
      pvParam = 504;
      if ( !SystemParametersInfoW(0x29u, 0x1F8u, &pvParam, 0) )
      {
        Error = ResultFromKnownLastError();
        if ( Error < 0 )
          goto LABEL_38;
      }
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
      v15 = v14;
      if ( v14 )
      {
        v16 = hdc;
        v17 = SelectObject(hdc, v14);
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCount(v7);
        Error = DPIToPPIHelpers::GetThemeTextExtentPPI(hwnd, *((unsigned int *)v7 + 15), (char *)v7 + 64, hTheme, hdc);
        SelectObject(v16, v17);
        DeleteObject(v15);
        v4 = hwnd;
        if ( Error >= 0 )
        {
          *(_DWORD *)(a2 + 12) = DPIToPPIHelpers::ScaleByType(
                                   *((unsigned int *)v7 + 15),
                                   93LL,
                                   hwnd,
                                   *((unsigned int *)v7 + 16));
          v18 = v7;
          if ( (*((_BYTE *)v7 + 56) & 4) != 0 )
          {
            v19 = 36LL;
          }
          else
          {
            if ( *((_BYTE *)v7 + 69) )
              v20 = DOUBLE_24_0;
            else
              v20 = DOUBLE_14_0;
            v19 = (unsigned int)(int)v20;
          }
          *(_DWORD *)(a2 + 16) = DPIToPPIHelpers::ScaleByType(
                                   *((unsigned int *)v7 + 15),
                                   v19,
                                   hwnd,
                                   *((unsigned int *)v7 + 16));
          v9 = 2;
          goto LABEL_39;
        }
        v9 = 2;
      }
      else
      {
        Error = -2147467259;
      }
LABEL_38:
      v18 = v7;
LABEL_39:
      Microsoft::WRL::Wrappers::ClientDC::~ClientDC((Microsoft::WRL::Wrappers::ClientDC *)v26);
LABEL_41:
      if ( (*((_BYTE *)v7 + 56) & 1) != 0 )
      {
        if ( *((_BYTE *)v18 + 69) || (v21 = 2LL, (*((_BYTE *)v7 + 56) & 4) != 0) )
          v21 = 6LL;
        *(_DWORD *)(a2 + 16) += DPIToPPIHelpers::ScaleByType(
                                  *((unsigned int *)v7 + 15),
                                  v21,
                                  v4,
                                  *((unsigned int *)v7 + 16));
      }
      if ( (*((_BYTE *)v7 + 56) & 2) != 0 )
      {
        if ( *((_BYTE *)v18 + 69) || (*((_BYTE *)v7 + 56) & 4) != 0 )
          v9 = 6;
        *(_DWORD *)(a2 + 16) += DPIToPPIHelpers::ScaleByType(
                                  *((unsigned int *)v7 + 15),
                                  v9,
                                  v4,
                                  *((unsigned int *)v7 + 16));
      }
      goto LABEL_51;
    }
  }
  return (unsigned int)Error;
}
