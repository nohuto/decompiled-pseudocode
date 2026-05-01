/*
 * XREFs of CopilotHotkeyManager::LaunchHardwareKeySettings$_ResumeCoro$1 @ 0x180632F90
 * Callers:
 *     CopilotHotkeyManager::LaunchHardwareKeySettings$_InitCoro$2 @ 0x180632EEC (CopilotHotkeyManager--LaunchHardwareKeySettings$_InitCoro$2.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUGamingPostureController@implementation@Posture@GamingExperiences@Internal@34@_NVSetGamingPostureStateActivity@GamingPostureCoreTelemetryProvider@@_N@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@UEAA@XZ @ 0x1802229A8 (--1-$promise_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUG.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?await_suspend@final_suspend_awaiter@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUGamingPostureController@implementation@Posture@GamingExperiences@Internal@34@UUri@234@@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEBA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x180335A4C (-await_suspend@final_suspend_awaiter@-$promise_base@Upromise_type@-$coroutine_trait_ea_180335A4C.c)
 *     ??$CopilotHotkeyInvoked@AEAW4IMMERSIVE_HOT_KEY_ID@@AEAY0FE@$$CBGIIAEAU_GUID@@@CopilotHotkeyManagerTelemetry@@SAXAEAW4IMMERSIVE_HOT_KEY_ID@@AEAY0FE@$$CBG$$QEAI2AEAU_GUID@@@Z @ 0x18061CBC4 (--$CopilotHotkeyInvoked@AEAW4IMMERSIVE_HOT_KEY_ID@@AEAY0FE@$$CBGIIAEAU_GUID@@@CopilotHotkeyManag.c)
 *     ??$SettingsLaunched@AEA_N@CopilotHotkeyManagerTelemetry@@SAXAEA_N@Z @ 0x18061D5BC (--$SettingsLaunched@AEA_N@CopilotHotkeyManagerTelemetry@@SAXAEA_N@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_BTDKS_55832605@@@details@wil@@QEAA_NXZ @ 0x180636A98 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_BTDKS_55832605@@@details@wil@@QEA.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ID57832725@@@details@wil@@QEAA_NXZ @ 0x180636B94 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_ID57832725@@@details@wil@@QEAA_NX.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ID60051841@@@details@wil@@QEAA_NXZ @ 0x180636C10 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_ID60051841@@@details@wil@@QEAA_NX.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3 #try_helpers=1
void __fastcall CopilotHotkeyManager::LaunchHardwareKeySettings__ResumeCoro_1(__int64 a1)
{
  _WORD *v2; // rsi
  __int64 v3; // r15
  HRESULT Instance; // eax
  char IsEnabled; // al
  __int64 v6; // rcx
  bool v7; // zf
  int (__fastcall *v8)(__int64, const wchar_t *, const wchar_t *, _QWORD, LPVOID *); // rax
  bool v9; // al
  _BYTE *v10; // r14
  __int64 v11; // r10
  __int128 *v12; // rdx
  __int64 v13; // r9
  _DWORD *v14; // r8
  int v15; // eax
  int *v16; // rcx
  __int64 v17; // rcx
  int ppv; // [rsp+20h] [rbp-98h]
  LPVOID *ppva; // [rsp+20h] [rbp-98h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  v2 = (_WORD *)(a1 + 8);
  switch ( *(_WORD *)(a1 + 8) )
  {
    case 0xFFFF:
    case 1:
    case 3:
      goto LABEL_13;
    case 2:
      *(_DWORD *)(a1 + 56) = 0;
      *(_DWORD *)(a1 + 56) = 2;
      v3 = a1 + 16;
      *(_QWORD *)(a1 + 16) = 0LL;
      Instance = CoCreateInstance(
                   &GUID_45ba127d_10a8_46ea_8ab7_56ea9078943c,
                   0LL,
                   1u,
                   &GUID_2e941141_7f97_4756_ba1d_9decde894a3d,
                   (LPVOID *)(a1 + 16));
      if ( Instance < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x1C60,
          (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/result_macros.h",
          (const char *)(unsigned int)Instance,
          ppv);
      *(_DWORD *)(a1 + 24) = 0;
      IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_BTDKS_55832605>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_BTDKS_55832605>::GetImpl'::`2'::impl);
      v6 = *(_QWORD *)v3;
      ppva = (LPVOID *)(a1 + 24);
      v7 = IsEnabled == 0;
      v8 = *(int (__fastcall **)(__int64, const wchar_t *, const wchar_t *, _QWORD, LPVOID *))(**(_QWORD **)v3 + 24LL);
      if ( v7 )
        v9 = v8(
               v6,
               L"windows.immersivecontrolpanel_cw5n1h2txyewy!microsoft.windows.immersivecontrolpanel",
               L"page=SettingsPagePersonalizationTextInput&target=SystemSettings_Personalize_TextInput_CopilotHardwareKeyb"
                "oardChoice&invoke=true&internal=true",
               0LL,
               ppva) >= 0;
      else
        v9 = v8(
               v6,
               L"windows.immersivecontrolpanel_cw5n1h2txyewy!microsoft.windows.immersivecontrolpanel",
               L"page=SettingsPageDevicesKeyboard&target=SystemSettings_Personalize_TextInput_CopilotHardwareKeyboardChoic"
                "e&invoke=true&internal=true",
               0LL,
               ppva) >= 0;
      v10 = (_BYTE *)(a1 + 12);
      *(_BYTE *)(a1 + 12) = v9;
      CopilotHotkeyManagerTelemetry::SettingsLaunched<bool &>((char *)(a1 + 12));
      if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID57832725>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_ID57832725>::GetImpl'::`2'::impl) )
      {
        if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID60051841>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_ID60051841>::GetImpl'::`2'::impl) )
        {
          v11 = *(_QWORD *)(a1 + 65);
          v12 = (__int128 *)(v11 + 180);
          v13 = a1 + 28;
          *(_DWORD *)(a1 + 28) = *v10 != 0 ? 2 : 0;
          v14 = (_DWORD *)(a1 + 32);
          v15 = *(_DWORD *)(v11 + 628);
          v16 = (int *)(v11 + 576);
        }
        else
        {
          v17 = *(_QWORD *)(a1 + 65);
          v12 = (__int128 *)(v17 + 180);
          v13 = a1 + 36;
          *(_DWORD *)(a1 + 36) = 2;
          v14 = (_DWORD *)(a1 + 40);
          v15 = *(_DWORD *)(v17 + 628);
          v16 = (int *)(v17 + 576);
        }
        *v14 = v15;
        CopilotHotkeyManagerTelemetry::CopilotHotkeyInvoked<enum IMMERSIVE_HOT_KEY_ID &,unsigned short const (&)[84],unsigned int,unsigned int,_GUID &>(
          v16,
          (__int64)v12,
          (__int64)v14,
          v13,
          v12);
      }
      *(_BYTE *)(a1 - 8) = *v10;
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a1 + 16));
      *(_QWORD *)(a1 + 48) = a1 - 112;
      *v2 = 0;
      if ( !winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *,winrt::Windows::Foundation::Uri>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>::final_suspend_awaiter::await_suspend(
              (__int64 *)(a1 + 48),
              a1) )
      {
LABEL_13:
        winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *,bool,GamingPostureCoreTelemetryProvider::SetGamingPostureStateActivity,bool>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::~promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *,bool,GamingPostureCoreTelemetryProvider::SetGamingPostureStateActivity,bool>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>((__int64 *)(a1 - 112));
        if ( *(_WORD *)(a1 + 10) )
          operator delete((void *)(a1 - 112), (const struct std::nothrow_t *)0xC0);
      }
      return;
    default:
      __debugbreak();
  }
}
