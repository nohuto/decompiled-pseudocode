/*
 * XREFs of ?LoadTheme@CDesktopManager@@AEAAJXZ @ 0x18001ED90
 * Callers:
 *     ?UpdateSettings@CDesktopManager@@QEAAJPEAK@Z @ 0x18002FF48 (-UpdateSettings@CDesktopManager@@QEAAJPEAK@Z.c)
 * Callees:
 *     ?InitializeHighContrast@CDesktopManager@@AEAAXXZ @ 0x18001F0D8 (-InitializeHighContrast@CDesktopManager@@AEAAXXZ.c)
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x180037F44 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x18003CC40 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?EnsureImages@CTopLevelWindow@@SAJXZ @ 0x1800532CC (-EnsureImages@CTopLevelWindow@@SAJXZ.c)
 *     ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV?$DynArray@PEAVCBitmapSource@@$0A@@@@Z @ 0x1800537F4 (-CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV-$DynArray@PEAVCBi.c)
 *     ?ForceAtlasInitialize@CContactManager@@QEAAX_K@Z @ 0x180053A04 (-ForceAtlasInitialize@CContactManager@@QEAAX_K@Z.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     IsOpenThemeDataPresent @ 0x18005DB28 (IsOpenThemeDataPresent.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_AUTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800B53B0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_AUTest@@@details@wil@@QEAAX_NW4ReportingK.c)
 */

__int64 __fastcall CDesktopManager::LoadTheme(CDesktopManager *this)
{
  int v2; // r8d
  HTHEME v3; // rax
  HTHEME v4; // rax
  HTHEME v5; // rax
  HTHEME v6; // rax
  HTHEME v7; // rax
  HRESULT CurrentThemeName; // eax
  signed int v9; // ebx
  HMODULE Library; // rax
  const wchar_t *v11; // rax
  __int64 v12; // rdx
  char v13; // al
  void *Theme; // rax
  int BitmapsFromAtlasImageStrip; // eax
  HRESULT ThemeInt; // eax
  CContactManager *v17; // rcx
  int v18; // r8d
  signed int LastError; // eax
  int v21; // r9d
  signed int v22; // eax
  signed int v23; // eax
  signed int v24; // eax
  signed int v25; // eax
  signed int v26; // eax
  const wchar_t *v27; // rax
  bool v28; // zf
  unsigned int pszSizeBuff; // [rsp+20h] [rbp-258h]
  _BYTE v30[16]; // [rsp+30h] [rbp-248h] BYREF
  WCHAR pszThemeFileName[264]; // [rsp+40h] [rbp-238h] BYREF

  if ( !(unsigned __int8)IsOpenThemeDataPresent() )
    return 0LL;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McGenEventWrite_EtwEventWriteTransfer(
      (unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context,
      (unsigned int)&UdwmLoadTheme_Start,
      v2,
      1,
      (__int64)v30);
  SetLastError(0);
  v3 = OpenThemeData(0LL, L"DWMWindow");
  *((_QWORD *)this + 69) = v3;
  if ( !v3 )
  {
    LastError = GetLastError();
    v9 = LastError;
    if ( LastError > 0 )
      v9 = (unsigned __int16)LastError | 0x80070000;
    pszSizeBuff = 630;
    goto LABEL_29;
  }
  SetLastError(0);
  v4 = OpenThemeData(0LL, L"DWMTouch");
  *((_QWORD *)this + 71) = v4;
  if ( !v4 )
  {
    v22 = GetLastError();
    v9 = v22;
    if ( v22 > 0 )
      v9 = (unsigned __int16)v22 | 0x80070000;
    pszSizeBuff = 631;
    goto LABEL_29;
  }
  SetLastError(0);
  v5 = OpenThemeData(0LL, L"DWMPen");
  *((_QWORD *)this + 72) = v5;
  if ( !v5 )
  {
    v23 = GetLastError();
    v9 = v23;
    if ( v23 > 0 )
      v9 = (unsigned __int16)v23 | 0x80070000;
    pszSizeBuff = 632;
    goto LABEL_29;
  }
  SetLastError(0);
  v6 = OpenThemeData(0LL, L"Animations");
  *((_QWORD *)this + 73) = v6;
  if ( !v6 )
  {
    v24 = GetLastError();
    v9 = v24;
    if ( v24 > 0 )
      v9 = (unsigned __int16)v24 | 0x80070000;
    pszSizeBuff = 634;
    goto LABEL_29;
  }
  SetLastError(0);
  v7 = OpenThemeData(0LL, L"TimingFunction");
  *((_QWORD *)this + 74) = v7;
  if ( !v7 )
  {
    v25 = GetLastError();
    v9 = v25;
    if ( v25 > 0 )
      v9 = (unsigned __int16)v25 | 0x80070000;
    pszSizeBuff = 635;
    goto LABEL_29;
  }
  CurrentThemeName = GetCurrentThemeName(pszThemeFileName, 260, 0LL, 0, 0LL, 0);
  v9 = CurrentThemeName;
  if ( CurrentThemeName < 0 )
  {
    pszSizeBuff = 638;
LABEL_35:
    v21 = CurrentThemeName;
    goto LABEL_37;
  }
  SetLastError(0);
  Library = LoadLibraryExW(pszThemeFileName, 0LL, 2u);
  *((_QWORD *)this + 70) = Library;
  if ( !Library )
  {
    v26 = GetLastError();
    v9 = v26;
    if ( v26 > 0 )
      v9 = (unsigned __int16)v26 | 0x80070000;
    pszSizeBuff = 639;
LABEL_29:
    if ( v9 >= 0 )
      v9 = -2003304445;
    goto LABEL_33;
  }
  v11 = CharLowerW(pszThemeFileName);
  if ( wcsstr(v11, L"aero.msstyles")
    || (LOBYTE(v12) = 1,
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_AUTest>::ReportUsage(
          &`wil::Feature<__WilFeatureTraits_Feature_AUTest>::GetImpl'::`2'::impl,
          v12),
        v27 = CharLowerW(pszThemeFileName),
        v28 = wcsstr(v27, L"aerotest.msstyles") == 0LL,
        v13 = 0,
        !v28) )
  {
    v13 = 1;
  }
  *((_BYTE *)this + 25) = v13;
  CDesktopManager::InitializeHighContrast(this);
  CurrentThemeName = CTopLevelWindow::EnsureImages();
  v9 = CurrentThemeName;
  if ( CurrentThemeName < 0 )
  {
    pszSizeBuff = 649;
    goto LABEL_35;
  }
  Theme = (void *)CDesktopManager::GetTheme(0LL);
  BitmapsFromAtlasImageStrip = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(
                                 Theme,
                                 58,
                                 0x12u,
                                 0LL,
                                 (__int64)&CWindowIconic::s_rgpBitmapPendingImages);
  v9 = BitmapsFromAtlasImageStrip;
  if ( BitmapsFromAtlasImageStrip >= 0 )
  {
    ThemeInt = GetThemeInt(*((HTHEME *)this + 69), 0, 0, 2431, (int *)this + 110);
    v9 = ThemeInt;
    if ( ThemeInt < 0 )
    {
      v21 = ThemeInt;
      pszSizeBuff = 653;
      goto LABEL_37;
    }
    CurrentThemeName = GetThemeInt(*((HTHEME *)this + 69), 46, 1, 2431, (int *)this + 111);
    v9 = CurrentThemeName;
    if ( CurrentThemeName < 0 )
    {
      pszSizeBuff = 654;
    }
    else
    {
      CurrentThemeName = GetThemeInt(*((HTHEME *)this + 69), 46, 3, 2431, (int *)this + 112);
      v9 = CurrentThemeName;
      if ( CurrentThemeName >= 0 )
      {
        if ( GetSystemMetrics(95) > 0 )
          CContactManager::ForceAtlasInitialize(v17, 0xFFFFFFFFFFFFFFFFuLL);
        goto LABEL_20;
      }
      pszSizeBuff = 655;
    }
    goto LABEL_35;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, BitmapsFromAtlasImageStrip, 0x342u, 0LL);
  pszSizeBuff = 650;
LABEL_33:
  v21 = v9;
LABEL_37:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18011F7C0, 1u, v21, pszSizeBuff, 0LL);
LABEL_20:
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McGenEventWrite_EtwEventWriteTransfer(
      (unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context,
      (unsigned int)&UdwmLoadTheme_End,
      v18,
      1,
      (__int64)v30);
  if ( v9 < 0 )
  {
    if ( *((_BYTE *)this + 24) )
    {
      v9 = -2003302654;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18011F7C0, 1u, -2003302654, 0x29Eu, 0LL);
    }
  }
  return (unsigned int)v9;
}
