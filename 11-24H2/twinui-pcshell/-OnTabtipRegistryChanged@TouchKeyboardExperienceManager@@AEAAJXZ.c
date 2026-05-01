/*
 * XREFs of ?OnTabtipRegistryChanged@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1800EF2C4
 * Callers:
 *     ?InitializeTabTipAdapter@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1800EFEB8 (-InitializeTabTipAdapter@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     wistd::__function::__func__lambda_6b3e8dc90f31d1f98bdc21a78fef236e__void___cdecl(enum_wil::RegistryChangeKind)_::operator() @ 0x18046F2F0 (wistd--__function--__func__lambda_6b3e8dc90f31d1f98bdc21a78fef236e__void___cdecl(en_ea_18046F2F0.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x180049738 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_PATKTI@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18007EA0C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_PATKTI@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800A24F4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x1800BADF8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?UpdateShellPreferencesBasedOnThemesDWORD@TouchKeyboardExperienceManager@@AEAAXPEBGKKPEA_NPEAK2@Z @ 0x180111DA4 (-UpdateShellPreferencesBasedOnThemesDWORD@TouchKeyboardExperienceManager@@AEAAXPEBGKKPEA_NPEAK2@.c)
 *     ?UpdateShellPreferencesBasedOnThemesBool@TouchKeyboardExperienceManager@@AEAAXPEBGPEA_N11@Z @ 0x1801122C8 (-UpdateShellPreferencesBasedOnThemesBool@TouchKeyboardExperienceManager@@AEAAXPEBGPEA_N11@Z.c)
 *     ?SHRegGetBOOLWithREGSAM@@YAJPEAUHKEY__@@PEBG1KPEAH@Z @ 0x180112FA4 (-SHRegGetBOOLWithREGSAM@@YAJPEAUHKEY__@@PEBG1KPEAH@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180122480 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1801950E4 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?UpdateVisibileViewsBorder@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1801E2D68 (-UpdateVisibileViewsBorder@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     ?UpdateShellPreferenceBasedOnThemeString@TouchKeyboardExperienceManager@@AEAAXQEBGAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1801EC324 (-UpdateShellPreferenceBasedOnThemeString@TouchKeyboardExperienceManager@@AEAAXQEBGAEAV-$basic_st.c)
 *     ?UpdateShellPreferencesBasedOnThemesString@TouchKeyboardExperienceManager@@AEAAXPEBGAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@1@Z @ 0x180254510 (-UpdateShellPreferencesBasedOnThemesString@TouchKeyboardExperienceManager@@AEAAXPEBGAEAV-$basic_.c)
 *     GetBooleanRegistryValue @ 0x1802C0C6C (GetBooleanRegistryValue.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?to_wstring@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@K@Z @ 0x180479CC0 (-to_wstring@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@1@K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall TouchKeyboardExperienceManager::OnTabtipRegistryChanged(
        TouchKeyboardExperienceManager *this,
        __int64 a2,
        char a3,
        __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rax
  int v7; // eax
  const char *v8; // r9
  char v9; // r13
  int DWORD; // eax
  char v11; // cl
  char v12; // cl
  KeyboardHosting::TabTipAdapter *v13; // rdi
  HSTRING_HEADER *Reserved1; // rax
  HSTRING v15; // rbx
  int v16; // eax
  int v17; // eax
  char v18; // cl
  char v19; // al
  KeyboardHosting::TabTipAdapter *v20; // rdi
  HSTRING_HEADER *v21; // rax
  HSTRING v22; // rbx
  int v23; // eax
  KeyboardHosting::TabTipAdapter *v24; // rdi
  HSTRING v25; // rbx
  int v26; // eax
  unsigned int v27; // r9d
  KeyboardHosting::TabTipAdapter *v28; // rdi
  HSTRING_HEADER *v29; // rax
  HSTRING v30; // rbx
  int v31; // eax
  char v32; // bl
  KeyboardHosting::TabTipAdapter *v33; // rdi
  const WCHAR *v34; // rax
  HSTRING v35; // rbx
  int v36; // eax
  int v37; // eax
  char v38; // cl
  char v39; // al
  KeyboardHosting::TabTipAdapter *v40; // rdi
  HSTRING_HEADER *v41; // rax
  HSTRING v42; // rbx
  int v43; // eax
  KeyboardHosting::TabTipAdapter *v44; // rdi
  HSTRING v45; // rbx
  int v46; // eax
  unsigned int v47; // r8d
  unsigned int v48; // r9d
  unsigned int v49; // r8d
  unsigned int v50; // r9d
  const unsigned __int16 *v51; // rdx
  const WCHAR *v52; // r15
  char v53; // bl
  const WCHAR *p_lpString1; // rcx
  const WCHAR *v55; // r8
  const WCHAR *v56; // rcx
  unsigned int v57; // r8d
  unsigned int v58; // r9d
  KeyboardHosting::TabTipAdapter *v59; // rdi
  HSTRING v60; // rbx
  int v61; // eax
  int bIgnoreCase; // [rsp+20h] [rbp-C8h]
  unsigned int v64; // [rsp+40h] [rbp-A8h] BYREF
  void *v65; // [rsp+48h] [rbp-A0h] BYREF
  unsigned int v66; // [rsp+50h] [rbp-98h] BYREF
  HSTRING_HEADER v67; // [rsp+58h] [rbp-90h] BYREF
  HSTRING v68; // [rsp+70h] [rbp-78h]
  HSTRING_HEADER lpString1; // [rsp+78h] [rbp-70h] BYREF
  HSTRING v70; // [rsp+90h] [rbp-58h]
  _BYTE v71[32]; // [rsp+98h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]

  if ( *((_QWORD *)this + 73) )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_PATKTI>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_PATKTI>::GetImpl'::`2'::impl,
      1u,
      a3,
      a4);
    GetBooleanRegistryValue(&v64);
    if ( BYTE1(v64) )
    {
      try
      {
        v6 = *((_QWORD *)this + 73);
        LODWORD(v65) = 0;
        LOBYTE(v5) = v64;
        v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, void **))(**(_QWORD **)(v6 + 128) + 112LL))(
               *(_QWORD *)(v6 + 128),
               v5,
               &v65);
        if ( v7 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0xC0D,
            (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
            (const char *)(unsigned int)v7,
            bIgnoreCase);
      }
      catch ( ... )
      {
        return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                               retaddr,
                               (void *)0x1289,
                               (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
                               v8);
      }
    }
    v9 = 0;
    v64 = 0;
    DWORD = SHRegGetDWORD(HKEY_CURRENT_USER, L"SOFTWARE\\Microsoft\\TabletTip\\1.7", L"KeyboardTheme_Updating", &v64);
    v11 = *((_BYTE *)this + 2164);
    if ( DWORD < 0 )
    {
      if ( v11 && *((_DWORD *)this + 537) == 1 )
      {
        v9 = 1;
        *((_BYTE *)this + 2164) = 0;
      }
    }
    else
    {
      if ( !v11 || (v12 = 0, v64 != *((_DWORD *)this + 537)) )
        v12 = 1;
      if ( v12 && v64 <= 1 )
      {
        if ( v64 == 1 )
        {
          std::to_wstring(&v67, 1LL);
          v13 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
          Reserved1 = &v67;
          if ( (unsigned __int64)v68 > 7 )
            Reserved1 = (HSTRING_HEADER *)v67.Reserved.Reserved1;
          v65 = Reserved1;
          v15 = *(HSTRING *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference(v71, &v65) + 24);
          v70 = 0LL;
          Microsoft::WRL::Wrappers::HStringReference::CreateReference(
            &lpString1,
            L"KeyboardTheme_Updating",
            0x17u,
            0x16u);
          v16 = KeyboardHosting::TabTipAdapter::SetShellPreference(v13, v70, v15);
          if ( v16 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x12BF,
              (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
              (const char *)(unsigned int)v16);
          *((_DWORD *)this + 537) = v64;
          std::wstring::_Tidy_deallocate(&v67.Reserved.Reserved1);
        }
        else
        {
          v9 = 1;
        }
        *((_BYTE *)this + 2164) = 1;
      }
    }
    v64 = 0;
    v17 = SHRegGetDWORD(HKEY_CURRENT_USER, L"SOFTWARE\\Microsoft\\TabletTip\\1.7", L"UserKeyboardScalingFactor", &v64);
    v18 = *((_BYTE *)this + 2167);
    if ( v17 < 0 )
    {
      if ( v18 )
      {
        v24 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
        v70 = 0LL;
        Microsoft::WRL::Wrappers::HStringReference::CreateReference(&lpString1, &pvData, 1u, 0);
        v25 = v70;
        v68 = 0LL;
        Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v67, L"UserKeyboardScalingFactor", 0x1Au, 0x19u);
        v26 = KeyboardHosting::TabTipAdapter::SetShellPreference(v24, v68, v25);
        if ( v26 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x12E5,
            (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
            (const char *)(unsigned int)v26);
        *((_DWORD *)this + 539) = 0;
        *((_BYTE *)this + 2167) = 0;
      }
    }
    else
    {
      if ( !v18 || (v19 = 0, v64 != *((_DWORD *)this + 539)) )
        v19 = 1;
      if ( v19 && v64 - 1 <= 0x3E7 )
      {
        std::to_wstring(&v67, v64);
        v20 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
        v21 = &v67;
        if ( (unsigned __int64)v68 > 7 )
          v21 = (HSTRING_HEADER *)v67.Reserved.Reserved1;
        v65 = v21;
        v22 = *(HSTRING *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference(v71, &v65) + 24);
        v70 = 0LL;
        Microsoft::WRL::Wrappers::HStringReference::CreateReference(
          &lpString1,
          L"UserKeyboardScalingFactor",
          0x1Au,
          0x19u);
        v23 = KeyboardHosting::TabTipAdapter::SetShellPreference(v20, v70, v22);
        if ( v23 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x12DE,
            (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
            (const char *)(unsigned int)v23);
        *((_DWORD *)this + 539) = v64;
        *((_BYTE *)this + 2167) = 1;
        std::wstring::_Tidy_deallocate(&v67.Reserved.Reserved1);
      }
    }
    v66 = 0;
    if ( (int)SHRegGetDWORD(HKEY_CURRENT_USER, L"SOFTWARE\\Microsoft\\TabletTip\\1.7", L"ThemeDataVersion", &v66) >= 0
      && v66 != *((_DWORD *)this + 536) )
    {
      std::to_wstring(&v67, v66);
      v28 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
      v29 = &v67;
      if ( (unsigned __int64)v68 > 7 )
        v29 = (HSTRING_HEADER *)v67.Reserved.Reserved1;
      v65 = v29;
      v30 = *(HSTRING *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference(v71, &v65) + 24);
      v70 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(
        &lpString1,
        L"KeyboardTheme_ThemeDataVersion",
        0x1Fu,
        0x1Eu);
      v31 = KeyboardHosting::TabTipAdapter::SetShellPreference(v28, v70, v30);
      if ( v31 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x12FA,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v31);
      *((_DWORD *)this + 536) = v66;
      std::wstring::_Tidy_deallocate(&v67.Reserved.Reserved1);
    }
    v64 = 0;
    v32 = 1;
    if ( (int)SHRegGetBOOLWithREGSAM(
                HKEY_CURRENT_USER,
                L"SOFTWARE\\Microsoft\\TabletTip\\1.7",
                L"IsKeyBackgroundEnabled",
                v27,
                (int *)&v64) >= 0 )
      v32 = v64 != 0;
    if ( !*((_BYTE *)this + 2162) || v32 != *((_BYTE *)this + 2161) )
    {
      *((_BYTE *)this + 2161) = v32;
      *((_BYTE *)this + 2162) = 1;
      v33 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
      v34 = L"1";
      if ( !v32 )
        v34 = L"0";
      v65 = (void *)v34;
      v35 = *(HSTRING *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference(v71, &v65) + 24);
      v70 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(
        &lpString1,
        L"KeyboardTheme_IsKeyBackgroundEnabled",
        0x25u,
        0x24u);
      v36 = KeyboardHosting::TabTipAdapter::SetShellPreference(v33, v70, v35);
      if ( v36 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x130D,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v36);
    }
    v64 = 0;
    v37 = SHRegGetDWORD(HKEY_CURRENT_USER, L"SOFTWARE\\Microsoft\\TabletTip\\1.7", L"KeyLabelSize", &v64);
    v38 = *((_BYTE *)this + 2165);
    if ( v37 < 0 )
    {
      if ( v38 )
      {
        v44 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
        v70 = 0LL;
        Microsoft::WRL::Wrappers::HStringReference::CreateReference(&lpString1, &pvData, 1u, 0);
        v45 = v70;
        v68 = 0LL;
        Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v67, L"KeyboardTheme_KeyLabelSize", 0x1Bu, 0x1Au);
        v46 = KeyboardHosting::TabTipAdapter::SetShellPreference(v44, v68, v45);
        if ( v46 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x1325,
            (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
            (const char *)(unsigned int)v46);
        *((_DWORD *)this + 538) = 0;
        *((_BYTE *)this + 2165) = 0;
      }
    }
    else
    {
      if ( !v38 || (v39 = 0, v64 != *((_DWORD *)this + 538)) )
        v39 = 1;
      if ( v39 && v64 <= 2 )
      {
        std::to_wstring(&v67, v64);
        v40 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
        v41 = &v67;
        if ( (unsigned __int64)v68 > 7 )
          v41 = (HSTRING_HEADER *)v67.Reserved.Reserved1;
        v65 = v41;
        v42 = *(HSTRING *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference(v71, &v65) + 24);
        v70 = 0LL;
        Microsoft::WRL::Wrappers::HStringReference::CreateReference(
          &lpString1,
          L"KeyboardTheme_KeyLabelSize",
          0x1Bu,
          0x1Au);
        v43 = KeyboardHosting::TabTipAdapter::SetShellPreference(v40, v70, v42);
        if ( v43 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x131E,
            (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
            (const char *)(unsigned int)v43);
        *((_DWORD *)this + 538) = v64;
        *((_BYTE *)this + 2165) = 1;
        std::wstring::_Tidy_deallocate(&v67.Reserved.Reserved1);
      }
    }
    TouchKeyboardExperienceManager::UpdateShellPreferenceBasedOnThemeString(
      this,
      L"SelectedThemeName",
      (char *)this + 2080);
    TouchKeyboardExperienceManager::UpdateShellPreferencesBasedOnThemesDWORD(
      this,
      L"KeyboardBackgroundImageOpacity",
      v47,
      v48,
      (bool *)this + 2163,
      (unsigned int *)this + 385,
      (unsigned int *)this + 517);
    TouchKeyboardExperienceManager::UpdateShellPreferencesBasedOnThemesString(
      this,
      L"KeyboardBackgroundImagePath",
      (char *)this + 1152,
      (char *)this + 1680);
    TouchKeyboardExperienceManager::UpdateShellPreferencesBasedOnThemesString(
      this,
      L"KeyboardBackgroundSolidColor",
      (char *)this + 1216,
      (char *)this + 1744);
    TouchKeyboardExperienceManager::UpdateShellPreferencesBasedOnThemesString(
      this,
      L"AccentColor",
      (char *)this + 1024,
      (char *)this + 1552);
    TouchKeyboardExperienceManager::UpdateShellPreferencesBasedOnThemesString(
      this,
      L"KeyColor",
      (char *)this + 1280,
      (char *)this + 1808);
    TouchKeyboardExperienceManager::UpdateShellPreferencesBasedOnThemesString(
      this,
      L"SuggestionTextColor",
      (char *)this + 1344,
      (char *)this + 1872);
    TouchKeyboardExperienceManager::UpdateShellPreferencesBasedOnThemesString(
      this,
      L"KeyLabelColor",
      (char *)this + 1312,
      (char *)this + 1840);
    TouchKeyboardExperienceManager::UpdateShellPreferencesBasedOnThemesDWORD(
      this,
      L"KeyTransparency",
      v49,
      v50,
      (bool *)this + 2166,
      (unsigned int *)this + 384,
      (unsigned int *)this + 516);
    TouchKeyboardExperienceManager::UpdateShellPreferencesBasedOnThemesString(
      this,
      L"KeyboardBackgroundType",
      (char *)this + 1248,
      (char *)this + 1776);
    TouchKeyboardExperienceManager::UpdateShellPreferencesBasedOnThemesString(
      this,
      L"KeyboardBackgroundImageStretchType",
      (char *)this + 1184,
      (char *)this + 1712);
    TouchKeyboardExperienceManager::UpdateShellPreferencesBasedOnThemesString(
      this,
      L"KeyboardBackgroundGradientColorTop",
      (char *)this + 1120,
      (char *)this + 1648);
    TouchKeyboardExperienceManager::UpdateShellPreferencesBasedOnThemesString(
      this,
      L"KeyboardBackgroundGradientColorBottom",
      (char *)this + 1088,
      (char *)this + 1616);
    TouchKeyboardExperienceManager::UpdateShellPreferencesBasedOnThemesBool(
      this,
      v51,
      (bool *)this + 2160,
      (bool *)this + 1548,
      (bool *)this + 2076);
    v52 = (const WCHAR *)((char *)this + 1056);
    std::wstring::wstring((__int64)&lpString1, (__int64)this + 1056);
    std::wstring::wstring((__int64)&v67, (__int64)this + 1584);
    v53 = *((_BYTE *)this + 1548);
    LOBYTE(v64) = *((_BYTE *)this + 2076);
    TouchKeyboardExperienceManager::UpdateShellPreferencesBasedOnThemesString(
      this,
      L"BorderColor",
      (char *)this + 1056,
      (char *)this + 1584);
    if ( *((_BYTE *)this + 1548) != v53 || *((_BYTE *)this + 2076) != (_BYTE)v64 )
      goto LABEL_80;
    if ( *((_QWORD *)this + 135) > 7uLL )
      v52 = *(const WCHAR **)v52;
    p_lpString1 = (const WCHAR *)&lpString1;
    if ( (unsigned __int64)v70 > 7 )
      p_lpString1 = (const WCHAR *)lpString1.Reserved.Reserved1;
    if ( CompareStringOrdinal(p_lpString1, -1, v52, -1, 1) != 2 )
      goto LABEL_80;
    v55 = (const WCHAR *)((char *)this + 1584);
    if ( *((_QWORD *)this + 201) > 7uLL )
      v55 = *(const WCHAR **)v55;
    v56 = (const WCHAR *)&v67;
    if ( (unsigned __int64)v68 > 7 )
      v56 = (const WCHAR *)v67.Reserved.Reserved1;
    if ( CompareStringOrdinal(v56, -1, v55, -1, 1) != 2 )
LABEL_80:
      TouchKeyboardExperienceManager::UpdateVisibileViewsBorder(this);
    std::wstring::_Tidy_deallocate(&v67.Reserved.Reserved1);
    std::wstring::_Tidy_deallocate(&lpString1.Reserved.Reserved1);
    TouchKeyboardExperienceManager::UpdateShellPreferencesBasedOnThemesString(
      this,
      L"ThemeOverride",
      (char *)this + 1376,
      (char *)this + 1904);
    TouchKeyboardExperienceManager::UpdateShellPreferenceBasedOnThemeString(
      this,
      L"ChineseSimplifiedImeHeightType",
      (char *)this + 2112);
    TouchKeyboardExperienceManager::UpdateShellPreferencesBasedOnThemesDWORD(
      this,
      L"ChineseSimplifiedImeBackgroundImageOpacity",
      v57,
      v58,
      (bool *)this + 2168,
      (unsigned int *)this + 386,
      (unsigned int *)this + 518);
    TouchKeyboardExperienceManager::UpdateShellPreferencesBasedOnThemesString(
      this,
      L"ChineseSimplifiedImeBackgroundImageStretchType",
      (char *)this + 1472,
      (char *)this + 2000);
    TouchKeyboardExperienceManager::UpdateShellPreferencesBasedOnThemesString(
      this,
      L"ChineseSimplifiedImeBackgroundImagePath",
      (char *)this + 1440,
      (char *)this + 1968);
    TouchKeyboardExperienceManager::UpdateShellPreferencesBasedOnThemesString(
      this,
      L"ChineseSimplifiedImeBackgroundColor",
      (char *)this + 1408,
      (char *)this + 1936);
    TouchKeyboardExperienceManager::UpdateShellPreferencesBasedOnThemesString(
      this,
      L"ChineseSimplifiedImeTextColor",
      (char *)this + 1504,
      (char *)this + 2032);
    if ( v9 )
    {
      v59 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
      v70 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&lpString1, L"0", 2u, 1u);
      v60 = v70;
      v68 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v67, L"KeyboardTheme_Updating", 0x17u, 0x16u);
      v61 = KeyboardHosting::TabTipAdapter::SetShellPreference(v59, v68, v60);
      if ( v61 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1395,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v61);
      *((_DWORD *)this + 537) = 0;
    }
  }
  return 0LL;
}
