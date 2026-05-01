/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VDSLTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180224F4C
 * Callers:
 *     ?UnsubscribeFromServices@CVirtualDesktopComponent@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801DED10 (-UnsubscribeFromServices@CVirtualDesktopComponent@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?SubscribeToServices@CVirtualDesktopComponent@@UEAAJPEAUIServiceProvider@@@Z @ 0x1802686C0 (-SubscribeToServices@CVirtualDesktopComponent@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?SubscribeToVDSoftLandingService@CVirtualDesktopManager@@UEAAJV?$com_ptr_t@UIApplicationViewVisibilityDebouncedNotificationService@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180556E70 (-SubscribeToVDSoftLandingService@CVirtualDesktopManager@@UEAAJV-$com_ptr_t@UIApplicationViewVisi.c)
 *     ?UnsubscribeToVDSoftLandingService@CVirtualDesktopManager@@UEAAJXZ @ 0x180558550 (-UnsubscribeToVDSoftLandingService@CVirtualDesktopManager@@UEAAJXZ.c)
 *     ?TriggerCampaign@CVirtualDesktopSoftLandingHandler@@AEAAJXZ @ 0x180568958 (-TriggerCampaign@CVirtualDesktopSoftLandingHandler@@AEAAJXZ.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18007F3A0 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_VDSLTest@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18054C618 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_VDSLTest@@@details@wil@@.c)
 */

void __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_VDSLTest>::ReportUsage(
        int *a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        __int64 a4)
{
  int v4; // edi
  unsigned int v6; // r8d
  unsigned int v7; // esi
  __int64 v8; // [rsp+40h] [rbp-18h] BYREF
  int v9; // [rsp+60h] [rbp+8h] BYREF
  __int16 v10; // [rsp+64h] [rbp+Ch]
  __int64 v11; // [rsp+78h] [rbp+20h]

  v11 = a4;
  v4 = a3;
  v6 = *a1;
  v7 = a2;
  if ( (*a1 & 4) == 0 )
  {
    v11 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_VDSLTest>::GetCachedFeatureEnabledState(
                       a1,
                       &v8);
    v6 = v11;
  }
  v9 = 0;
  v10 = 3;
  wil::details::ReportUsageToService(
    (struct wil_details_FeatureReportingCache *)(a1 + 2),
    0x1EC58F4u,
    (v6 >> 10) & 1,
    (v6 >> 11) & 1,
    (__int64)&v9,
    v7,
    v4);
}
