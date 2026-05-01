/*
 * XREFs of ?UpdateDictationAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x180254214
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x180253160 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x180049738 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800A24F4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?UpdateDictationKeyAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1801F6664 (-UpdateDictationKeyAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?SetViewAvailability@TouchKeyboardExperienceManager@@AEAAXI_N@Z @ 0x18021DA2C (-SetViewAvailability@TouchKeyboardExperienceManager@@AEAAXI_N@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VTCUXD@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802A7530 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VTCUXD@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall TouchKeyboardExperienceManager::UpdateDictationAvailability(KeyboardHosting::TabTipAdapter **this)
{
  KeyboardHosting::TabTipAdapter *v2; // rdi
  HSTRING v3; // rbx
  int v4; // eax
  __int64 v5; // rdx
  KeyboardHosting::TabTipAdapter *v6; // rdi
  HSTRING v7; // rbx
  int v8; // eax
  HSTRING_HEADER hstringHeader; // [rsp+20h] [rbp-50h] BYREF
  HSTRING v10; // [rsp+38h] [rbp-38h]
  HSTRING_HEADER v11; // [rsp+40h] [rbp-30h] BYREF
  HSTRING v12; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  TouchKeyboardExperienceManager::SetViewAvailability((TouchKeyboardExperienceManager *)this);
  v2 = this[73];
  v10 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"0", 2u, 1u);
  v3 = v10;
  v12 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v11, L"Dictation_Disabled", 0x13u, 0x12u);
  v4 = KeyboardHosting::TabTipAdapter::SetShellPreference(v2, v12, v3);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x919,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
  TouchKeyboardExperienceManager::UpdateDictationKeyAvailability((TouchKeyboardExperienceManager *)this);
  LOBYTE(v5) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VTCUXD>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_VTCUXD>::GetImpl'::`2'::impl,
    v5);
  v6 = this[73];
  v12 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v11, L"1", 2u, 1u);
  v7 = v12;
  v10 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"VoiceTyping_CorrectionUX_Enabled",
    0x21u,
    0x20u);
  v8 = KeyboardHosting::TabTipAdapter::SetShellPreference(v6, v10, v7);
  if ( v8 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x91F,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v8);
}
