/*
 * XREFs of ?UpdateShellPreferencesBasedOnThemesDWORD@TouchKeyboardExperienceManager@@AEAAXPEBGKKPEA_NPEAK2@Z @ 0x180111DA4
 * Callers:
 *     ?OnTabtipRegistryChanged@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1800EF2C4 (-OnTabtipRegistryChanged@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180048710 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x180049738 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800A24F4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEBG$$QEAV10@@Z @ 0x180112818 (--$-HGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180122480 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?to_wstring@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@K@Z @ 0x180479CC0 (-to_wstring@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@1@K@Z.c)
 */

// Hidden C++ exception states: #wind=14
void __fastcall TouchKeyboardExperienceManager::UpdateShellPreferencesBasedOnThemesDWORD(
        TouchKeyboardExperienceManager *this,
        WCHAR *a2,
        __int64 a3,
        __int64 a4,
        bool *a5,
        unsigned int *a6,
        unsigned int *a7)
{
  char **v9; // rax
  char **v10; // rax
  LSTATUS ValueW; // eax
  bool v12; // sf
  LSTATUS v13; // eax
  bool v14; // sf
  char v15; // cl
  char v16; // al
  KeyboardHosting::TabTipAdapter *v17; // rdi
  void *p_hstringHeader; // rax
  HSTRING v19; // rbx
  void **v20; // rax
  __int64 v21; // rax
  int v22; // eax
  KeyboardHosting::TabTipAdapter *v23; // rdi
  void **v24; // rax
  HSTRING v25; // rbx
  void **v26; // rax
  __int64 v27; // rax
  int v28; // eax
  KeyboardHosting::TabTipAdapter *v29; // rdi
  HSTRING v30; // rbx
  void **v31; // rax
  __int64 v32; // rax
  int v33; // eax
  KeyboardHosting::TabTipAdapter *v34; // rdi
  HSTRING v35; // rbx
  void **v36; // rax
  __int64 v37; // rax
  int v38; // eax
  KeyboardHosting::TabTipAdapter *v39; // rdi
  HSTRING v40; // rbx
  void **v41; // rax
  __int64 v42; // rax
  int v43; // eax
  KeyboardHosting::TabTipAdapter *v44; // rdi
  HSTRING v45; // rbx
  void **v46; // rax
  __int64 v47; // rax
  int v48; // eax
  DWORD pcbData[2]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v50; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int pvData; // [rsp+4Ch] [rbp-B4h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-B0h] BYREF
  HSTRING v53; // [rsp+68h] [rbp-98h]
  void *v54[3]; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v55; // [rsp+88h] [rbp-78h]
  void *v56[3]; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v57; // [rsp+A8h] [rbp-58h]
  _BYTE v58[32]; // [rsp+B0h] [rbp-50h] BYREF
  void *v59[4]; // [rsp+D0h] [rbp-30h] BYREF
  void *v60[4]; // [rsp+F0h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+148h] [rbp+48h]

  pvData = 0;
  v50 = 0;
  v9 = std::wstring::wstring((char **)&hstringHeader, a2);
  std::operator+<unsigned short>(v56, L"KeyboardTheme_Dark_", v9);
  std::wstring::_Tidy_deallocate(&hstringHeader.Reserved.Reserved1);
  v10 = std::wstring::wstring((char **)v60, a2);
  std::operator+<unsigned short>(v54, L"KeyboardTheme_Light_", v10);
  std::wstring::_Tidy_deallocate(v60);
  pcbData[0] = 4;
  ValueW = RegGetValueW(
             HKEY_CURRENT_USER,
             L"SOFTWARE\\Microsoft\\TabletTip\\1.7\\SelectedThemeDark",
             a2,
             0x10u,
             0LL,
             &pvData,
             pcbData);
  v12 = ValueW < 0;
  if ( ValueW > 0 )
    v12 = 1;
  if ( v12 )
    goto LABEL_40;
  pcbData[0] = 4;
  v13 = RegGetValueW(
          HKEY_CURRENT_USER,
          L"SOFTWARE\\Microsoft\\TabletTip\\1.7\\SelectedThemeLight",
          a2,
          0x10u,
          0LL,
          &v50,
          pcbData);
  v14 = v13 < 0;
  if ( v13 > 0 )
    v14 = 1;
  if ( v14 )
  {
LABEL_40:
    if ( !*a5 )
      goto LABEL_50;
    v39 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
    v53 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, &::pvData, 1u, 0);
    v40 = v53;
    v41 = v56;
    if ( v57 > 7 )
      v41 = (void **)v56[0];
    *(_QWORD *)pcbData = v41;
    v42 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(v58, pcbData);
    v43 = KeyboardHosting::TabTipAdapter::SetShellPreference(v39, *(HSTRING *)(v42 + 24), v40);
    if ( v43 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x11EF,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v43);
    v44 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
    v53 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, &::pvData, 1u, 0);
    v45 = v53;
    v46 = v54;
    if ( v55 > 7 )
      v46 = (void **)v54[0];
    *(_QWORD *)pcbData = v46;
    v47 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(v58, pcbData);
    v48 = KeyboardHosting::TabTipAdapter::SetShellPreference(v44, *(HSTRING *)(v47 + 24), v45);
    if ( v48 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x11F0,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v48);
    goto LABEL_49;
  }
  if ( !*a5 || pvData != *a6 || (v15 = 0, v50 != *a7) )
    v15 = 1;
  if ( pvData > 0x64 || (v16 = 1, v50 > 0x64) )
    v16 = 0;
  if ( !v15 )
  {
    if ( v16 )
      goto LABEL_50;
    goto LABEL_30;
  }
  if ( !v16 )
  {
LABEL_30:
    if ( !*a5 )
      goto LABEL_50;
    v29 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
    v53 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, &::pvData, 1u, 0);
    v30 = v53;
    v31 = v56;
    if ( v57 > 7 )
      v31 = (void **)v56[0];
    *(_QWORD *)pcbData = v31;
    v32 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(v58, pcbData);
    v33 = KeyboardHosting::TabTipAdapter::SetShellPreference(v29, *(HSTRING *)(v32 + 24), v30);
    if ( v33 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x11E5,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v33);
    v34 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
    v53 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, &::pvData, 1u, 0);
    v35 = v53;
    v36 = v54;
    if ( v55 > 7 )
      v36 = (void **)v54[0];
    *(_QWORD *)pcbData = v36;
    v37 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(v58, pcbData);
    v38 = KeyboardHosting::TabTipAdapter::SetShellPreference(v34, *(HSTRING *)(v37 + 24), v35);
    if ( v38 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x11E6,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v38);
LABEL_49:
    *a6 = 0;
    *a7 = 0;
    *a5 = 0;
    goto LABEL_50;
  }
  std::to_wstring(&hstringHeader, pvData);
  std::to_wstring(v59, v50);
  v17 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  p_hstringHeader = &hstringHeader;
  if ( (unsigned __int64)v53 > 7 )
    p_hstringHeader = hstringHeader.Reserved.Reserved1;
  *(_QWORD *)pcbData = p_hstringHeader;
  v19 = *(HSTRING *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference(v60, pcbData) + 24);
  v20 = v56;
  if ( v57 > 7 )
    v20 = (void **)v56[0];
  *(_QWORD *)pcbData = v20;
  v21 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(v58, pcbData);
  v22 = KeyboardHosting::TabTipAdapter::SetShellPreference(v17, *(HSTRING *)(v21 + 24), v19);
  if ( v22 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x11DD,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v22);
  v23 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v24 = v59;
  if ( v59[3] > (void *)7 )
    v24 = (void **)v59[0];
  *(_QWORD *)pcbData = v24;
  v25 = *(HSTRING *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference(v58, pcbData) + 24);
  v26 = v54;
  if ( v55 > 7 )
    v26 = (void **)v54[0];
  *(_QWORD *)pcbData = v26;
  v27 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(v60, pcbData);
  v28 = KeyboardHosting::TabTipAdapter::SetShellPreference(v23, *(HSTRING *)(v27 + 24), v25);
  if ( v28 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x11DE,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v28);
  *a6 = pvData;
  *a7 = v50;
  *a5 = 1;
  std::wstring::_Tidy_deallocate(v59);
  std::wstring::_Tidy_deallocate(&hstringHeader.Reserved.Reserved1);
LABEL_50:
  std::wstring::_Tidy_deallocate(v54);
  std::wstring::_Tidy_deallocate(v56);
}
