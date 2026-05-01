/*
 * XREFs of ?UpdateWideLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1801040A4
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x180253160 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     wistd::__function::__func__lambda_c021a0adf15c0f9fcce0429322079dc8__void___cdecl(void)_::operator() @ 0x18046F570 (wistd--__function--__func__lambda_c021a0adf15c0f9fcce0429322079dc8__void___cdecl(void)_--operato.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x180049738 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ?GetMdmPolicyValue@TextInputMdmPolicyHelper@KeyboardHosting@@SA?AW4MdmAvailabilityPolicy@2@PEBGW432@@Z @ 0x180104520 (-GetMdmPolicyValue@TextInputMdmPolicyHelper@KeyboardHosting@@SA-AW4MdmAvailabilityPolicy@2@PEBGW.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802B7C4C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall TouchKeyboardExperienceManager::UpdateWideLayoutAvailability(TouchKeyboardExperienceManager *this)
{
  int MdmPolicyValue; // eax
  KeyboardHosting::TabTipAdapter *v3; // rbx
  HRESULT v4; // eax
  int v5; // edx
  unsigned int v6; // r8d
  HSTRING v7; // rdi
  HRESULT v8; // eax
  int v9; // edx
  unsigned int v10; // r8d
  int v11; // eax
  HRESULT v12; // eax
  int v13; // edx
  unsigned int v14; // r8d
  HSTRING v15; // rdi
  HRESULT v16; // eax
  int v17; // edx
  unsigned int v18; // r8d
  int v19; // eax
  HSTRING_HEADER hstringHeader; // [rsp+20h] [rbp-50h] BYREF
  HSTRING string; // [rsp+38h] [rbp-38h] BYREF
  HSTRING_HEADER v22; // [rsp+40h] [rbp-30h] BYREF
  HSTRING v23; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  MdmPolicyValue = KeyboardHosting::TextInputMdmPolicyHelper::GetMdmPolicyValue(L"TouchKeyboardWideModeAvailability");
  v3 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  if ( MdmPolicyValue == 2 )
  {
    string = 0LL;
    v4 = WindowsCreateStringReference(L"0", 1u, &hstringHeader, &string);
    if ( v4 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v4, v5, v6);
    v7 = string;
    v23 = 0LL;
    v8 = WindowsCreateStringReference(L"KeyboardModeEnabled_wide", 0x18u, &v22, &v23);
    if ( v8 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v8, v9, v10);
    v11 = KeyboardHosting::TabTipAdapter::SetShellPreference(v3, v23, v7);
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x887,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v11);
  }
  else
  {
    v23 = 0LL;
    v12 = WindowsCreateStringReference(L"1", 1u, &v22, &v23);
    if ( v12 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v12, v13, v14);
    v15 = v23;
    string = 0LL;
    v16 = WindowsCreateStringReference(L"KeyboardModeEnabled_wide", 0x18u, &hstringHeader, &string);
    if ( v16 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v16, v17, v18);
    v19 = KeyboardHosting::TabTipAdapter::SetShellPreference(v3, string, v15);
    if ( v19 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x88B,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v19);
  }
}
