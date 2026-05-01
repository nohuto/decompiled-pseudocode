/*
 * XREFs of ?__private_IsEnabledPreCheck@?$FeatureImpl@U__WilFeatureTraits_Feature_SNTest@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1801DD530
 * Callers:
 *     ?GetAdjacentSnappedViews@CShellSnapComponent@@UEAAJPEAUIApplicationView@@HPEAPEAUIObjectArray@@1@Z @ 0x180090660 (-GetAdjacentSnappedViews@CShellSnapComponent@@UEAAJPEAUIApplicationView@@HPEAPEAUIObjectArray@@1.c)
 *     ?OnDragSizeInfoEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@AEBUDragSizeInfoEventArgs@3456@@Z @ 0x1802703F0 (-OnDragSizeInfoEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEven.c)
 *     ?OnShowWindowPolicy@CShellSnapComponent@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@K@Z @ 0x18059F7C0 (-OnShowWindowPolicy@CShellSnapComponent@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@K@Z.c)
 *     ?GetCurrentVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_SETest@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1805B6928 (-GetCurrentVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_SETest@@@details@wil@@AEAA-ATw.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18007F3A0 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_SNTest@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1802CFD5C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_SNTest@@@details@wil@@AE.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_SNTest>::__private_IsEnabledPreCheck(
        __int64 a1,
        unsigned __int8 a2)
{
  __int64 v2; // r8
  int v4; // edi
  int v6; // [rsp+50h] [rbp+8h] BYREF
  __int16 v7; // [rsp+54h] [rbp+Ch]
  __int64 v8; // [rsp+60h] [rbp+18h] BYREF

  LODWORD(v2) = *(_DWORD *)a1;
  v4 = a2;
  if ( (*(_DWORD *)a1 & 4) == 0 )
  {
    v2 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_SNTest>::GetCachedFeatureEnabledState(a1, &v8);
    v8 = v2;
  }
  v6 = 0;
  v7 = 3;
  wil::details::ReportUsageToService(
    (struct wil_details_FeatureReportingCache *)(a1 + 8),
    0x1DA2251u,
    ((unsigned int)v2 >> 10) & 1,
    ((unsigned int)v2 >> 11) & 1,
    (__int64)&v6,
    1u,
    v4);
  return 1;
}
