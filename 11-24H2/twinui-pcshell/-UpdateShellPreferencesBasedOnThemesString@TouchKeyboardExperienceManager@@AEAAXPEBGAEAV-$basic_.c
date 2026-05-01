/*
 * XREFs of ?UpdateShellPreferencesBasedOnThemesString@TouchKeyboardExperienceManager@@AEAAXPEBGAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@1@Z @ 0x180254510
 * Callers:
 *     ?OnTabtipRegistryChanged@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1800EF2C4 (-OnTabtipRegistryChanged@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180048710 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z @ 0x1800490A8 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z.c)
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x180049738 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800A24F4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800F2678 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEBG$$QEAV10@@Z @ 0x180112818 (--$-HGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180122480 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?resize@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_KG@Z @ 0x1801837A0 (-resize@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAX_KG@Z.c)
 *     ?compare@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAHAEBV12@@Z @ 0x180233FC8 (-compare@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAHAEBV12@@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=14
void __fastcall TouchKeyboardExperienceManager::UpdateShellPreferencesBasedOnThemesString(
        __int64 a1,
        WCHAR *a2,
        __int64 a3,
        __int64 a4)
{
  void **v8; // rax
  void **v9; // rax
  PVOID *pvData; // rax
  PVOID *v11; // rax
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rdi
  PVOID *v14; // rax
  PVOID *v15; // rax
  int v16; // eax
  unsigned int v17; // r8d
  int v18; // eax
  KeyboardHosting::TabTipAdapter *v19; // rdi
  PVOID *v20; // rax
  HSTRING Reserved1; // rbx
  unsigned int v22; // r8d
  const WCHAR *v23; // rax
  HSTRING_HEADER *v24; // rax
  int v25; // eax
  unsigned int v26; // r8d
  KeyboardHosting::TabTipAdapter *v27; // rdi
  PVOID *v28; // rax
  HSTRING v29; // rbx
  unsigned int v30; // r8d
  const WCHAR *v31; // rax
  HSTRING_HEADER *v32; // rax
  int v33; // eax
  __int64 v34; // r8
  __int64 v35; // r8
  KeyboardHosting::TabTipAdapter *v36; // rdi
  unsigned int v37; // r8d
  HSTRING v38; // rbx
  const WCHAR *v39; // rax
  HSTRING_HEADER *v40; // rax
  int v41; // eax
  KeyboardHosting::TabTipAdapter *v42; // rdi
  unsigned int v43; // r8d
  HSTRING v44; // rbx
  const WCHAR *v45; // rax
  HSTRING_HEADER *v46; // rax
  int v47; // eax
  KeyboardHosting::TabTipAdapter *v48; // rdi
  unsigned int v49; // r8d
  HSTRING v50; // rbx
  const WCHAR *v51; // rax
  HSTRING_HEADER *v52; // rax
  int v53; // eax
  KeyboardHosting::TabTipAdapter *v54; // rdi
  unsigned int v55; // r8d
  HSTRING v56; // rbx
  const WCHAR *v57; // rax
  HSTRING_HEADER *v58; // rax
  int v59; // eax
  const WCHAR *v60; // [rsp+40h] [rbp-C0h] BYREF
  DWORD pcbData; // [rsp+48h] [rbp-B8h] BYREF
  DWORD v62; // [rsp+4Ch] [rbp-B4h] BYREF
  PVOID v63[2]; // [rsp+50h] [rbp-B0h] BYREF
  __m128i si128; // [rsp+60h] [rbp-A0h]
  PVOID v65[2]; // [rsp+70h] [rbp-90h] BYREF
  __m128i v66; // [rsp+80h] [rbp-80h]
  HSTRING_HEADER hstringHeader; // [rsp+90h] [rbp-70h] BYREF
  HSTRING v68; // [rsp+A8h] [rbp-58h]
  void *v69[3]; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 v70; // [rsp+C8h] [rbp-38h]
  void *v71[3]; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int64 v72; // [rsp+E8h] [rbp-18h]
  HSTRING_HEADER v73; // [rsp+F0h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+168h] [rbp+68h]

  pcbData = 0;
  v62 = 0;
  v8 = (void **)std::wstring::wstring((char **)&hstringHeader, a2);
  std::operator+<unsigned short>((__int64)v71, (char *)L"KeyboardTheme_Dark_", v8);
  std::wstring::_Tidy_deallocate(&hstringHeader.Reserved.Reserved1);
  v9 = (void **)std::wstring::wstring((char **)v63, a2);
  std::operator+<unsigned short>((__int64)v69, (char *)L"KeyboardTheme_Light_", v9);
  std::wstring::_Tidy_deallocate(v63);
  if ( RegGetValueW(
         HKEY_CURRENT_USER,
         L"SOFTWARE\\Microsoft\\TabletTip\\1.7\\SelectedThemeLight",
         a2,
         2u,
         0LL,
         0LL,
         &pcbData)
    || !pcbData
    || RegGetValueW(
         HKEY_CURRENT_USER,
         L"SOFTWARE\\Microsoft\\TabletTip\\1.7\\SelectedThemeDark",
         a2,
         2u,
         0LL,
         0LL,
         &v62)
    || !v62 )
  {
    if ( *(_QWORD *)(a3 + 16) || *(_QWORD *)(a4 + 16) )
    {
      v48 = *(KeyboardHosting::TabTipAdapter **)(a1 + 584);
      v68 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, &::pvData, 1u, 0);
      v50 = v68;
      v51 = (const WCHAR *)v71;
      if ( v72 > 7 )
        v51 = (const WCHAR *)v71[0];
      v60 = v51;
      v52 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v73, &v60, v49);
      v53 = KeyboardHosting::TabTipAdapter::SetShellPreference(v48, (HSTRING)v52[1].Reserved.Reserved1, v50);
      if ( v53 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1220,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v53);
      v54 = *(KeyboardHosting::TabTipAdapter **)(a1 + 584);
      v68 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, &::pvData, 1u, 0);
      v56 = v68;
      v57 = (const WCHAR *)v69;
      if ( v70 > 7 )
        v57 = (const WCHAR *)v69[0];
      v60 = v57;
      v58 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v73, &v60, v55);
      v59 = KeyboardHosting::TabTipAdapter::SetShellPreference(v54, (HSTRING)v58[1].Reserved.Reserved1, v56);
      if ( v59 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1221,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v59);
      std::wstring::operator=((void **)a3, &::pvData);
      std::wstring::operator=((void **)a4, &::pvData);
    }
  }
  else
  {
    *(_OWORD *)v63 = 0LL;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    LOWORD(v63[0]) = 0;
    *(_OWORD *)v65 = 0LL;
    v66 = si128;
    LOWORD(v65[0]) = 0;
    std::wstring::resize((wchar_t *)v63, (unsigned __int64)pcbData >> 1);
    std::wstring::resize((wchar_t *)v65, (unsigned __int64)v62 >> 1);
    pvData = v63;
    if ( si128.m128i_i64[1] > 7uLL )
      pvData = (PVOID *)v63[0];
    if ( RegGetValueW(
           HKEY_CURRENT_USER,
           L"SOFTWARE\\Microsoft\\TabletTip\\1.7\\SelectedThemeLight",
           a2,
           2u,
           0LL,
           pvData,
           &pcbData) )
    {
      goto LABEL_56;
    }
    v11 = v65;
    if ( v66.m128i_i64[1] > 7uLL )
      v11 = (PVOID *)v65[0];
    if ( RegGetValueW(
           HKEY_CURRENT_USER,
           L"SOFTWARE\\Microsoft\\TabletTip\\1.7\\SelectedThemeDark",
           a2,
           2u,
           0LL,
           v11,
           &v62) )
    {
LABEL_56:
      if ( *(_QWORD *)(a3 + 16) || *(_QWORD *)(a4 + 16) )
      {
        v36 = *(KeyboardHosting::TabTipAdapter **)(a1 + 584);
        v68 = 0LL;
        Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, &::pvData, 1u, 0);
        v38 = v68;
        v39 = (const WCHAR *)v71;
        if ( v72 > 7 )
          v39 = (const WCHAR *)v71[0];
        v60 = v39;
        v40 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v73, &v60, v37);
        v41 = KeyboardHosting::TabTipAdapter::SetShellPreference(v36, (HSTRING)v40[1].Reserved.Reserved1, v38);
        if ( v41 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x1217,
            (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
            (const char *)(unsigned int)v41);
        v42 = *(KeyboardHosting::TabTipAdapter **)(a1 + 584);
        v68 = 0LL;
        Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, &::pvData, 1u, 0);
        v44 = v68;
        v45 = (const WCHAR *)v69;
        if ( v70 > 7 )
          v45 = (const WCHAR *)v69[0];
        v60 = v45;
        v46 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v73, &v60, v43);
        v47 = KeyboardHosting::TabTipAdapter::SetShellPreference(v42, (HSTRING)v46[1].Reserved.Reserved1, v44);
        if ( v47 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x1218,
            (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
            (const char *)(unsigned int)v47);
        std::wstring::operator=((void **)a3, &::pvData);
        std::wstring::operator=((void **)a4, &::pvData);
      }
    }
    else
    {
      v12 = (unsigned __int64)pcbData >> 1;
      v13 = (unsigned __int64)v62 >> 1;
      std::wstring::resize((wchar_t *)v63, v12);
      std::wstring::resize((wchar_t *)v65, v13);
      v14 = v63;
      if ( si128.m128i_i64[1] > 7uLL )
        v14 = (PVOID *)v63[0];
      *((_WORD *)v14 + v12 - 1) = 0;
      v15 = v65;
      if ( v66.m128i_i64[1] > 7uLL )
        v15 = (PVOID *)v65[0];
      *((_WORD *)v15 + v13 - 1) = 0;
      LOBYTE(v16) = std::wstring::compare(v65, (unsigned __int16 *)a3);
      if ( v16 || (LOBYTE(v18) = std::wstring::compare(v63, (unsigned __int16 *)a4), v18) )
      {
        v19 = *(KeyboardHosting::TabTipAdapter **)(a1 + 584);
        v20 = v63;
        if ( si128.m128i_i64[1] > 7uLL )
          v20 = (PVOID *)v63[0];
        v60 = (const WCHAR *)v20;
        Reserved1 = (HSTRING)Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, &v60, v17)[1].Reserved.Reserved1;
        v23 = (const WCHAR *)v69;
        if ( v70 > 7 )
          v23 = (const WCHAR *)v69[0];
        v60 = v23;
        v24 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v73, &v60, v22);
        v25 = KeyboardHosting::TabTipAdapter::SetShellPreference(v19, (HSTRING)v24[1].Reserved.Reserved1, Reserved1);
        if ( v25 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x120F,
            (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
            (const char *)(unsigned int)v25);
        v27 = *(KeyboardHosting::TabTipAdapter **)(a1 + 584);
        v28 = v65;
        if ( v66.m128i_i64[1] > 7uLL )
          v28 = (PVOID *)v65[0];
        v60 = (const WCHAR *)v28;
        v29 = (HSTRING)Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v73, &v60, v26)[1].Reserved.Reserved1;
        v31 = (const WCHAR *)v71;
        if ( v72 > 7 )
          v31 = (const WCHAR *)v71[0];
        v60 = v31;
        v32 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, &v60, v30);
        v33 = KeyboardHosting::TabTipAdapter::SetShellPreference(v27, (HSTRING)v32[1].Reserved.Reserved1, v29);
        if ( v33 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x1210,
            (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
            (const char *)(unsigned int)v33);
        std::wstring::operator=((char *)a4, (char *)v63, v34);
        std::wstring::operator=((char *)a3, (char *)v65, v35);
      }
    }
    std::wstring::_Tidy_deallocate(v65);
    std::wstring::_Tidy_deallocate(v63);
  }
  std::wstring::_Tidy_deallocate(v69);
  std::wstring::_Tidy_deallocate(v71);
}
