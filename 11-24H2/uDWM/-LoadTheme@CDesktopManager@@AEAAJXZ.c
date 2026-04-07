/*
 * XREFs of ?LoadTheme@CDesktopManager@@AEAAJXZ @ 0x18000A10C
 * Callers:
 *     ?UpdateSettings@CDesktopManager@@QEAAJPEAK@Z @ 0x180009A3C (-UpdateSettings@CDesktopManager@@QEAAJPEAK@Z.c)
 * Callees:
 *     ?EnsureImages@CTopLevelWindow@@SAJXZ @ 0x18000A684 (-EnsureImages@CTopLevelWindow@@SAJXZ.c)
 *     ?EnsureThemeStatics@CWindowIconic@@SAJXZ @ 0x18000B4A4 (-EnsureThemeStatics@CWindowIconic@@SAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ForceAtlasInitialize@CContactManager@@QEAAX_K@Z @ 0x180044D30 (-ForceAtlasInitialize@CContactManager@@QEAAX_K@Z.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x1800865C8 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?InitializeHighContrast@CDesktopManager@@AEAAXXZ @ 0x1800995B0 (-InitializeHighContrast@CDesktopManager@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 *     IsOpenThemeDataPresent @ 0x18009CA90 (IsOpenThemeDataPresent.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_AUTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800BADB0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_AUTest@@@details@wil@@QEAAX_NW4ReportingK.c)
 */

__int64 __fastcall CDesktopManager::LoadTheme(CDesktopManager *this)
{
  int v2; // r8d
  HRESULT CurrentThemeName; // eax
  signed int v4; // ebx
  HMODULE Library; // rax
  HTHEME v6; // rax
  HTHEME v7; // rax
  HTHEME v8; // rax
  HTHEME v9; // rax
  HTHEME v10; // rax
  const wchar_t *v11; // rax
  __int64 v12; // rdx
  char v13; // al
  HRESULT ThemeInt; // eax
  int v15; // r8d
  signed int v16; // eax
  int v17; // r9d
  signed int LastError; // eax
  signed int v20; // eax
  CContactManager *v21; // rcx
  signed int v22; // eax
  signed int v23; // eax
  signed int v24; // eax
  const wchar_t *v25; // rax
  bool v26; // zf
  unsigned int pszSizeBuff; // [rsp+20h] [rbp-58h]
  _BYTE v28[16]; // [rsp+30h] [rbp-48h] BYREF

  if ( !(unsigned __int8)IsOpenThemeDataPresent() )
    return 0LL;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McGenEventWrite_EtwEventWriteTransfer(
      (unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context,
      (unsigned int)&UdwmLoadTheme_Start,
      v2,
      1,
      (__int64)v28);
  CurrentThemeName = GetCurrentThemeName((LPWSTR)this + 284, 260, 0LL, 0, 0LL, 0);
  v4 = CurrentThemeName;
  if ( CurrentThemeName < 0 )
  {
    pszSizeBuff = 624;
    goto LABEL_39;
  }
  SetLastError(0);
  Library = LoadLibraryExW((LPCWSTR)this + 284, 0LL, 2u);
  *((_QWORD *)this + 136) = Library;
  if ( !Library )
  {
    LastError = GetLastError();
    v4 = LastError;
    if ( LastError > 0 )
      v4 = (unsigned __int16)LastError | 0x80070000;
    pszSizeBuff = 625;
    goto LABEL_20;
  }
  SetLastError(0);
  v6 = OpenThemeData(0LL, L"DWMWindow");
  *((_QWORD *)this + 70) = v6;
  if ( !v6 )
  {
    v16 = GetLastError();
    v4 = v16;
    if ( v16 > 0 )
      v4 = (unsigned __int16)v16 | 0x80070000;
    pszSizeBuff = 627;
    goto LABEL_20;
  }
  SetLastError(0);
  v7 = OpenThemeData(0LL, L"DWMTouch");
  *((_QWORD *)this + 137) = v7;
  if ( !v7 )
  {
    v20 = GetLastError();
    v4 = v20;
    if ( v20 > 0 )
      v4 = (unsigned __int16)v20 | 0x80070000;
    pszSizeBuff = 628;
    goto LABEL_20;
  }
  SetLastError(0);
  v8 = OpenThemeData(0LL, L"DWMPen");
  *((_QWORD *)this + 138) = v8;
  if ( !v8 )
  {
    v22 = GetLastError();
    v4 = v22;
    if ( v22 > 0 )
      v4 = (unsigned __int16)v22 | 0x80070000;
    pszSizeBuff = 629;
    goto LABEL_20;
  }
  SetLastError(0);
  v9 = OpenThemeData(0LL, L"Animations");
  *((_QWORD *)this + 139) = v9;
  if ( !v9 )
  {
    v23 = GetLastError();
    v4 = v23;
    if ( v23 > 0 )
      v4 = (unsigned __int16)v23 | 0x80070000;
    pszSizeBuff = 631;
    goto LABEL_20;
  }
  SetLastError(0);
  v10 = OpenThemeData(0LL, L"TimingFunction");
  *((_QWORD *)this + 140) = v10;
  if ( !v10 )
  {
    v24 = GetLastError();
    v4 = v24;
    if ( v24 > 0 )
      v4 = (unsigned __int16)v24 | 0x80070000;
    pszSizeBuff = 632;
LABEL_20:
    if ( v4 >= 0 )
      v4 = -2003304445;
    v17 = v4;
    goto LABEL_23;
  }
  v11 = CharLowerW((LPWSTR)this + 284);
  if ( wcsstr(v11, L"aero.msstyles")
    || (LOBYTE(v12) = 1,
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_AUTest>::ReportUsage(
          &`wil::Feature<__WilFeatureTraits_Feature_AUTest>::GetImpl'::`2'::impl,
          v12),
        v25 = CharLowerW((LPWSTR)this + 284),
        v26 = wcsstr(v25, L"aerotest.msstyles") == 0LL,
        v13 = 0,
        !v26) )
  {
    v13 = 1;
  }
  *((_BYTE *)this + 26) = v13;
  CDesktopManager::InitializeHighContrast(this);
  CurrentThemeName = CTopLevelWindow::EnsureImages();
  v4 = CurrentThemeName;
  if ( CurrentThemeName < 0 )
  {
    pszSizeBuff = 642;
LABEL_39:
    v17 = CurrentThemeName;
LABEL_23:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18010549C, 1u, v17, pszSizeBuff, 0LL);
    goto LABEL_24;
  }
  CurrentThemeName = CWindowIconic::EnsureThemeStatics();
  v4 = CurrentThemeName;
  if ( CurrentThemeName < 0 )
  {
    pszSizeBuff = 643;
    goto LABEL_39;
  }
  ThemeInt = GetThemeInt(*((HTHEME *)this + 70), 0, 0, 2431, (int *)this + 110);
  v4 = ThemeInt;
  if ( ThemeInt >= 0 )
  {
    CurrentThemeName = GetThemeInt(*((HTHEME *)this + 70), 46, 1, 2431, (int *)this + 111);
    v4 = CurrentThemeName;
    if ( CurrentThemeName < 0 )
    {
      pszSizeBuff = 647;
    }
    else
    {
      CurrentThemeName = GetThemeInt(*((HTHEME *)this + 70), 46, 3, 2431, (int *)this + 112);
      v4 = CurrentThemeName;
      if ( CurrentThemeName >= 0 )
      {
        if ( GetSystemMetrics(95) > 0 )
          CContactManager::ForceAtlasInitialize(v21, 0xFFFFFFFFFFFFFFFFuLL);
        goto LABEL_24;
      }
      pszSizeBuff = 648;
    }
    goto LABEL_39;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18010549C, 1u, ThemeInt, 0x286u, 0LL);
LABEL_24:
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McGenEventWrite_EtwEventWriteTransfer(
      (unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context,
      (unsigned int)&UdwmLoadTheme_End,
      v15,
      1,
      (__int64)v28);
  if ( v4 < 0 )
  {
    if ( *((_BYTE *)this + 25) )
    {
      v4 = -2003302654;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18010549C, 1u, -2003302654, 0x297u, 0LL);
    }
  }
  return (unsigned int)v4;
}
