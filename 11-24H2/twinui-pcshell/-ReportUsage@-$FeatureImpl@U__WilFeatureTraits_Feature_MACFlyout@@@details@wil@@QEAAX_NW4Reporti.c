/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MACFlyout@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801EA19C
 * Callers:
 *     ??0MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x180283DBC (--0MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?GetExperienceManager@JumpViewExperienceManagerFactory@@UEAAJPEBGPEAUIServiceProvider@@PEAPEAUIInspectable@@@Z @ 0x1803947E0 (-GetExperienceManager@JumpViewExperienceManagerFactory@@UEAAJPEBGPEAUIServiceProvider@@PEAPEAUII.c)
 *     ??0MeetNowExperienceManager@@QEAA@XZ @ 0x1803C798C (--0MeetNowExperienceManager@@QEAA@XZ.c)
 *     ?OnViewHidden@MeetNowExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1803CAAE0 (-OnViewHidden@MeetNowExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewShown@MeetNowExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1803CAD60 (-OnViewShown@MeetNowExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?RuntimeClassInitialize@MeetNowExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1803CBA68 (-RuntimeClassInitialize@MeetNowExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?IsMeetAndChatManagerEnabled@@YA_NXZ @ 0x1803EC340 (-IsMeetAndChatManagerEnabled@@YA_NXZ.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18007F3A0 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_MACFlyout@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1801EA234 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_MACFlyout@@@details@wil@.c)
 */

void __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_MACFlyout>::ReportUsage(
        int *a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        __int64 a4)
{
  int v4; // edi
  unsigned int v6; // r8d
  unsigned int v7; // esi
  _BYTE v8[24]; // [rsp+40h] [rbp-18h] BYREF
  int v9; // [rsp+60h] [rbp+8h] BYREF
  __int16 v10; // [rsp+64h] [rbp+Ch]
  __int64 v11; // [rsp+78h] [rbp+20h]

  v11 = a4;
  v4 = a3;
  v6 = *a1;
  v7 = a2;
  if ( (*a1 & 4) == 0 )
  {
    v11 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_MACFlyout>::GetCachedFeatureEnabledState(
                       a1,
                       v8);
    v6 = v11;
  }
  v9 = 0;
  v10 = 3;
  wil::details::ReportUsageToService(
    (struct wil_details_FeatureReportingCache *)(a1 + 2),
    0x1DEAF39u,
    (v6 >> 10) & 1,
    (v6 >> 11) & 1,
    (__int64)&v9,
    v7,
    v4);
}
