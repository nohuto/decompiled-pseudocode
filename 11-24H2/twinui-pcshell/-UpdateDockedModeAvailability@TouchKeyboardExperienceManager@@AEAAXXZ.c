/*
 * XREFs of ?UpdateDockedModeAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x180103318
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x180253160 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     wistd::__function::__func__lambda_5e7eca425d355dd4f47aee6d08ea065a__void___cdecl(void)_::operator() @ 0x18046F430 (wistd--__function--__func__lambda_5e7eca425d355dd4f47aee6d08ea065a__void___cdecl(void)_--operato.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x180049738 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ?GetMdmPolicyValue@TextInputMdmPolicyHelper@KeyboardHosting@@SA?AW4MdmAvailabilityPolicy@2@PEBGW432@@Z @ 0x180104520 (-GetMdmPolicyValue@TextInputMdmPolicyHelper@KeyboardHosting@@SA-AW4MdmAvailabilityPolicy@2@PEBGW.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802B7C4C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall TouchKeyboardExperienceManager::UpdateDockedModeAvailability(TouchKeyboardExperienceManager *this)
{
  int MdmPolicyValue; // eax
  KeyboardHosting::TabTipAdapter *v3; // rdi
  HRESULT v4; // eax
  int v5; // edx
  unsigned int v6; // r8d
  HSTRING v7; // r14
  HRESULT v8; // eax
  int v9; // edx
  unsigned int v10; // r8d
  int v11; // eax
  KeyboardHosting::TabTipAdapter *v12; // r14
  HRESULT v13; // eax
  int v14; // edx
  unsigned int v15; // r8d
  HSTRING v16; // r15
  HRESULT v17; // eax
  int v18; // edx
  unsigned int v19; // r8d
  int v20; // eax
  KeyboardHosting::TabTipAdapter *v21; // r14
  HRESULT v22; // eax
  int v23; // edx
  unsigned int v24; // r8d
  HSTRING v25; // r15
  HRESULT v26; // eax
  int v27; // edx
  unsigned int v28; // r8d
  int v29; // eax
  KeyboardHosting::TabTipAdapter *v30; // r15
  HRESULT v31; // eax
  int v32; // edx
  unsigned int v33; // r8d
  HSTRING v34; // r12
  HRESULT v35; // eax
  int v36; // edx
  unsigned int v37; // r8d
  int v38; // eax
  KeyboardHosting::TabTipAdapter *v39; // r15
  HRESULT v40; // eax
  int v41; // edx
  unsigned int v42; // r8d
  HSTRING v43; // rsi
  HRESULT v44; // eax
  int v45; // edx
  unsigned int v46; // r8d
  int v47; // eax
  HRESULT v48; // eax
  int v49; // edx
  unsigned int v50; // r8d
  HSTRING v51; // r14
  HRESULT v52; // eax
  int v53; // edx
  unsigned int v54; // r8d
  int v55; // eax
  KeyboardHosting::TabTipAdapter *v56; // r14
  HRESULT v57; // eax
  int v58; // edx
  unsigned int v59; // r8d
  HSTRING v60; // r15
  HRESULT v61; // eax
  int v62; // edx
  unsigned int v63; // r8d
  int v64; // eax
  KeyboardHosting::TabTipAdapter *v65; // r14
  HRESULT v66; // eax
  int v67; // edx
  unsigned int v68; // r8d
  HSTRING v69; // r15
  HRESULT v70; // eax
  int v71; // edx
  unsigned int v72; // r8d
  int v73; // eax
  KeyboardHosting::TabTipAdapter *v74; // r15
  HRESULT v75; // eax
  int v76; // edx
  unsigned int v77; // r8d
  HSTRING v78; // r12
  HRESULT v79; // eax
  int v80; // edx
  unsigned int v81; // r8d
  int v82; // eax
  KeyboardHosting::TabTipAdapter *v83; // r15
  HRESULT v84; // eax
  int v85; // edx
  unsigned int v86; // r8d
  HSTRING v87; // rsi
  HRESULT v88; // eax
  int v89; // edx
  unsigned int v90; // r8d
  int v91; // eax
  HSTRING_HEADER hstringHeader; // [rsp+20h] [rbp-50h] BYREF
  HSTRING string; // [rsp+38h] [rbp-38h] BYREF
  HSTRING_HEADER v94; // [rsp+40h] [rbp-30h] BYREF
  HSTRING v95; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  MdmPolicyValue = KeyboardHosting::TextInputMdmPolicyHelper::GetMdmPolicyValue(L"ForceTouchKeyboardDockedState");
  v3 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  if ( MdmPolicyValue == 1 )
  {
    string = 0LL;
    v4 = WindowsCreateStringReference(L"0", 1u, &hstringHeader, &string);
    if ( v4 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v4, v5, v6);
    v7 = string;
    v95 = 0LL;
    v8 = WindowsCreateStringReference(L"KeyboardLayoutPositionEnabled_split_floating", 0x2Cu, &v94, &v95);
    if ( v8 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v8, v9, v10);
    v11 = KeyboardHosting::TabTipAdapter::SetShellPreference(v3, v95, v7);
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x8FE,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v11);
    v12 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
    v95 = 0LL;
    v13 = WindowsCreateStringReference(L"0", 1u, &v94, &v95);
    if ( v13 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v13, v14, v15);
    v16 = v95;
    string = 0LL;
    v17 = WindowsCreateStringReference(
            L"KeyboardLayoutPositionEnabled_handwriting_floating",
            0x32u,
            &hstringHeader,
            &string);
    if ( v17 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v17, v18, v19);
    v20 = KeyboardHosting::TabTipAdapter::SetShellPreference(v12, string, v16);
    if ( v20 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x8FF,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v20);
    v21 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
    v95 = 0LL;
    v22 = WindowsCreateStringReference(L"0", 1u, &v94, &v95);
    if ( v22 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v22, v23, v24);
    v25 = v95;
    string = 0LL;
    v26 = WindowsCreateStringReference(L"KeyboardLayoutPositionEnabled_narrow_floating", 0x2Du, &hstringHeader, &string);
    if ( v26 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v26, v27, v28);
    v29 = KeyboardHosting::TabTipAdapter::SetShellPreference(v21, string, v25);
    if ( v29 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x900,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v29);
    v30 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
    v95 = 0LL;
    v31 = WindowsCreateStringReference(L"0", 1u, &v94, &v95);
    if ( v31 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v31, v32, v33);
    v34 = v95;
    string = 0LL;
    v35 = WindowsCreateStringReference(L"KeyboardLayoutPositionEnabled_wide_floating", 0x2Bu, &hstringHeader, &string);
    if ( v35 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v35, v36, v37);
    v38 = KeyboardHosting::TabTipAdapter::SetShellPreference(v30, string, v34);
    if ( v38 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x901,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v38);
    v39 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
    v95 = 0LL;
    v40 = WindowsCreateStringReference(L"0", 1u, &v94, &v95);
    if ( v40 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v40, v41, v42);
    v43 = v95;
    string = 0LL;
    v44 = WindowsCreateStringReference(L"KeyboardLayoutPositionEnabled_full_floating", 0x2Bu, &hstringHeader, &string);
    if ( v44 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v44, v45, v46);
    v47 = KeyboardHosting::TabTipAdapter::SetShellPreference(v39, string, v43);
    if ( v47 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x902,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v47);
  }
  else
  {
    v95 = 0LL;
    v48 = WindowsCreateStringReference(L"1", 1u, &v94, &v95);
    if ( v48 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v48, v49, v50);
    v51 = v95;
    string = 0LL;
    v52 = WindowsCreateStringReference(L"KeyboardLayoutPositionEnabled_split_floating", 0x2Cu, &hstringHeader, &string);
    if ( v52 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v52, v53, v54);
    v55 = KeyboardHosting::TabTipAdapter::SetShellPreference(v3, string, v51);
    if ( v55 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x906,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v55);
    v56 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
    v95 = 0LL;
    v57 = WindowsCreateStringReference(L"1", 1u, &v94, &v95);
    if ( v57 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v57, v58, v59);
    v60 = v95;
    string = 0LL;
    v61 = WindowsCreateStringReference(
            L"KeyboardLayoutPositionEnabled_handwriting_floating",
            0x32u,
            &hstringHeader,
            &string);
    if ( v61 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v61, v62, v63);
    v64 = KeyboardHosting::TabTipAdapter::SetShellPreference(v56, string, v60);
    if ( v64 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x907,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v64);
    v65 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
    v95 = 0LL;
    v66 = WindowsCreateStringReference(L"1", 1u, &v94, &v95);
    if ( v66 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v66, v67, v68);
    v69 = v95;
    string = 0LL;
    v70 = WindowsCreateStringReference(L"KeyboardLayoutPositionEnabled_narrow_floating", 0x2Du, &hstringHeader, &string);
    if ( v70 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v70, v71, v72);
    v73 = KeyboardHosting::TabTipAdapter::SetShellPreference(v65, string, v69);
    if ( v73 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x908,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v73);
    v74 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
    v95 = 0LL;
    v75 = WindowsCreateStringReference(L"1", 1u, &v94, &v95);
    if ( v75 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v75, v76, v77);
    v78 = v95;
    string = 0LL;
    v79 = WindowsCreateStringReference(L"KeyboardLayoutPositionEnabled_wide_floating", 0x2Bu, &hstringHeader, &string);
    if ( v79 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v79, v80, v81);
    v82 = KeyboardHosting::TabTipAdapter::SetShellPreference(v74, string, v78);
    if ( v82 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x909,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v82);
    v83 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
    v95 = 0LL;
    v84 = WindowsCreateStringReference(L"1", 1u, &v94, &v95);
    if ( v84 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v84, v85, v86);
    v87 = v95;
    string = 0LL;
    v88 = WindowsCreateStringReference(L"KeyboardLayoutPositionEnabled_full_floating", 0x2Bu, &hstringHeader, &string);
    if ( v88 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v88, v89, v90);
    v91 = KeyboardHosting::TabTipAdapter::SetShellPreference(v83, string, v87);
    if ( v91 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x90A,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v91);
  }
}
