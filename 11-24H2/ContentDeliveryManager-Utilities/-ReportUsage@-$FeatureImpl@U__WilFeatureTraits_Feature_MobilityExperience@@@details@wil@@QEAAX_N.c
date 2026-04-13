/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MobilityExperience@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180056718
 * Callers:
 *     ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_MobilityExperience@@@wil@@SA_NXZ @ 0x180053660 (-IsEnabled@-$Feature@U__WilFeatureTraits_Feature_MobilityExperience@@@wil@@SA_NXZ.c)
 *     ?Activate@ActivityToastNotificationCallback@ToastNotification@@UEAAJPEBG0PEBUNOTIFICATION_USER_INPUT_DATA@@K@Z @ 0x180067950 (-Activate@ActivityToastNotificationCallback@ToastNotification@@UEAAJPEBG0PEBUNOTIFICATION_USER_I.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180039BA4 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_MobilityExperience@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800501F4 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_MobilityExperience@@@det.c)
 */

_UNKNOWN **__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_MobilityExperience>::ReportUsage(
        wil::details *a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        __int64 a4)
{
  unsigned int v4; // edi
  unsigned int v6; // r8d
  unsigned int v7; // esi
  _QWORD v9[3]; // [rsp+40h] [rbp-18h] BYREF
  int v10; // [rsp+60h] [rbp+8h] BYREF
  __int16 v11; // [rsp+64h] [rbp+Ch]
  __int64 v12; // [rsp+78h] [rbp+20h]

  v12 = a4;
  v4 = a3;
  v6 = *(_DWORD *)a1;
  v7 = a2;
  if ( (*(_DWORD *)a1 & 4) == 0 )
  {
    v12 = *wil::details::FeatureImpl<__WilFeatureTraits_Feature_MobilityExperience>::GetCachedFeatureEnabledState(
             a1,
             v9);
    v6 = v12;
  }
  v10 = 0;
  v11 = 3;
  return wil::details::ReportUsageToService(
           (__int64)a1 + 8,
           0xB46EBCu,
           (v6 >> 10) & 1,
           (v6 >> 11) & 1,
           (__int64)&v10,
           v7,
           v4);
}
