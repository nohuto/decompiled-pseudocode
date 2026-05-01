/*
 * XREFs of ?UpdateSuggestionUIUpdateAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x180254B18
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x180253160 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     wistd::__function::__func__lambda_0d7aa88f0d9fe1a35ebf13a4fa00db98__void___cdecl(void)_::operator() @ 0x18046F2E0 (wistd--__function--__func__lambda_0d7aa88f0d9fe1a35ebf13a4fa00db98__void___cdecl(void)_--operato.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x180049738 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800A24F4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?GetMdmBoolPolicyValue@TextInputMdmPolicyHelper@KeyboardHosting@@SA_NPEBG_N@Z @ 0x180171D00 (-GetMdmBoolPolicyValue@TextInputMdmPolicyHelper@KeyboardHosting@@SA_NPEBG_N@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall TouchKeyboardExperienceManager::UpdateSuggestionUIUpdateAvailability(
        TouchKeyboardExperienceManager *this)
{
  char MdmBoolPolicyValue; // al
  KeyboardHosting::TabTipAdapter *v3; // rdi
  HSTRING v4; // rbx
  int v5; // eax
  HSTRING v6; // rbx
  int v7; // eax
  HSTRING_HEADER hstringHeader; // [rsp+20h] [rbp-50h] BYREF
  HSTRING v9; // [rsp+38h] [rbp-38h]
  HSTRING_HEADER v10; // [rsp+40h] [rbp-30h] BYREF
  HSTRING v11; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  MdmBoolPolicyValue = KeyboardHosting::TextInputMdmPolicyHelper::GetMdmBoolPolicyValue((const unsigned __int16 *)this);
  v3 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  if ( MdmBoolPolicyValue )
  {
    v9 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"1", 2u, 1u);
    v4 = v9;
    v11 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v10, L"SuggestionUIUpdateEnabled", 0x1Au, 0x19u);
    v5 = KeyboardHosting::TabTipAdapter::SetShellPreference(v3, v11, v4);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x94D,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v5);
  }
  else
  {
    v11 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v10, L"0", 2u, 1u);
    v6 = v11;
    v9 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"SuggestionUIUpdateEnabled",
      0x1Au,
      0x19u);
    v7 = KeyboardHosting::TabTipAdapter::SetShellPreference(v3, v9, v6);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x951,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v7);
  }
}
