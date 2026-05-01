/*
 * XREFs of ?LaunchOrToggle@CScreenClippingExperienceManager@@EEAAJW4ScreenClipInvocationType@Experience@Shell@Internal@Windows@@@Z @ 0x1803A3550
 * Callers:
 *     ?OnMessage@CScreenClippingExperienceManager@@EEAAJI_K_J@Z @ 0x1801D6C80 (-OnMessage@CScreenClippingExperienceManager@@EEAAJI_K_J@Z.c)
 * Callees:
 *     ?Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180025298 (-Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x18005480C (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800D09B8 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1801B4B78 (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     ?Create@LowLatencyAction@Shell@UI@WindowsUdk@winrt@@SA@AEBUhstring@param@5@@Z @ 0x1803A23C0 (-Create@LowLatencyAction@Shell@UI@WindowsUdk@winrt@@SA@AEBUhstring@param@5@@Z.c)
 *     ?LaunchSnippingToolApp@CScreenClippingExperienceManager@@AEAAJW4ScreenClipInvocationType@Experience@Shell@Internal@Windows@@@Z @ 0x1803A3668 (-LaunchSnippingToolApp@CScreenClippingExperienceManager@@AEAAJW4ScreenClipInvocationType@Experie.c)
 *     ?LogSuccessfulLaunch@CScreenClippingExperienceManager@@AEAAXUhstring@winrt@@W4ScreenClipInvocationType@Experience@Shell@Internal@Windows@@@Z @ 0x1803A39C8 (-LogSuccessfulLaunch@CScreenClippingExperienceManager@@AEAAXUhstring@winrt@@W4ScreenClipInvocati.c)
 *     ?ShowExperience@CScreenClippingExperienceManager@@AEAAJW4ScreenClipInvocationType@Experience@Shell@Internal@Windows@@@Z @ 0x1803A4534 (-ShowExperience@CScreenClippingExperienceManager@@AEAAJW4ScreenClipInvocationType@Experience@She.c)
 *     ?StartAppClose@CScreenClippingExperienceManager@@AEAAJXZ @ 0x1803A45F4 (-StartAppClose@CScreenClippingExperienceManager@@AEAAJXZ.c)
 *     ?TriggerBoost@?$consume_WindowsUdk_UI_Shell_ILowLatencyAction@UILowLatencyAction@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBW4BoostType@Shell@UI@WindowsUdk@3@@Z @ 0x1803A469C (-TriggerBoost@-$consume_WindowsUdk_UI_Shell_ILowLatencyAction@UILowLatencyAction@Shell@UI@Window.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_LowLatencyProfile@@@details@wil@@QEAA_NXZ @ 0x1803A48E4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_LowLatencyProfile@@@details@wil@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CScreenClippingExperienceManager::LaunchOrToggle(
        CScreenClippingExperienceManager *a1,
        unsigned int a2)
{
  __int64 v4; // rcx
  const struct _tlgProvider_t *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r9
  const unsigned __int16 *v8; // rdx
  int started; // edi
  __int64 v10; // rdx
  winrt::hstring *v12; // rax
  __int64 v13; // rcx
  __int64 v14[4]; // [rsp+30h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]
  int v16; // [rsp+70h] [rbp+20h] BYREF
  char v17; // [rsp+78h] [rbp+28h] BYREF

  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_LowLatencyProfile>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_LowLatencyProfile>::GetImpl'::`2'::impl) )
  {
    winrt::param::hstring::hstring((winrt::param::hstring *)v14, L"ScreenClippingExperienceManager.LaunchOrToggle");
    winrt::WindowsUdk::UI::Shell::LowLatencyAction::Create((const struct winrt::param::hstring *)&v17, v14);
    v16 = 1;
    winrt::impl::consume_WindowsUdk_UI_Shell_ILowLatencyAction<winrt::WindowsUdk::UI::Shell::ILowLatencyAction>::TriggerBoost(
      &v17,
      &v16);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v17);
  }
  v5 = SingleViewExperienceLogging::Provider(v4);
  if ( *(_DWORD *)v5 > 5u )
  {
    v16 = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
      (__int64)v5,
      byte_1807F074C,
      0LL,
      v7,
      (__int64)&v16);
  }
  if ( (int)CScreenClippingExperienceManager::LaunchSnippingToolApp(v6, a2) < 0 )
  {
    if ( *((_DWORD *)a1 + 24) == 2 )
    {
      started = CScreenClippingExperienceManager::StartAppClose(a1);
      if ( started < 0 )
      {
        v10 = 316LL;
LABEL_10:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v10,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
          (const char *)(unsigned int)started);
        return (unsigned int)started;
      }
    }
    else
    {
      started = CScreenClippingExperienceManager::ShowExperience(a1, a2);
      if ( started < 0 )
      {
        v10 = 320LL;
        goto LABEL_10;
      }
    }
    v8 = L"ScreenClipping";
    goto LABEL_14;
  }
  v8 = L"SnippingTool";
LABEL_14:
  v12 = winrt::hstring::hstring((winrt::hstring *)&v16, v8);
  CScreenClippingExperienceManager::LogSuccessfulLaunch(v13, v12, a2);
  return 0LL;
}
