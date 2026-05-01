/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_2136437049@@@details@wil@@QEAA_NXZ @ 0x1804B9744
 * Callers:
 *     ??1CImpWorkerWndProc@@MEAA@XZ @ 0x1804B9034 (--1CImpWorkerWndProc@@MEAA@XZ.c)
 *     ?AddWndRef@CImpWorkerWndProc@@AEAAXXZ @ 0x1804B912C (-AddWndRef@CImpWorkerWndProc@@AEAAXXZ.c)
 *     ?CreateWorkerWindow@CImpWorkerWndProc@@IEAAPEAUHWND__@@PEAU2@KKPEAUHMENU__@@@Z @ 0x1804B920C (-CreateWorkerWindow@CImpWorkerWndProc@@IEAAPEAUHWND__@@PEAU2@KKPEAUHMENU__@@@Z.c)
 *     ?ReleaseWndRef@CImpWorkerWndProc@@AEAAXXZ @ 0x1804B95B0 (-ReleaseWndRef@CImpWorkerWndProc@@AEAAXXZ.c)
 *     ?s_WndProc@CImpWorkerWndProc@@KA_JPEAUHWND__@@I_K_J@Z @ 0x1804B9780 (-s_WndProc@CImpWorkerWndProc@@KA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_2136437049@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1804B9318 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_2136437049@@@details@wil.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_2136437049@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1804B95F4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_2136437049@@@details@wil@@QEAAX_NW4Report.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_2136437049>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_2136437049>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_2136437049>::ReportUsage((__int64)a1, v6 & 1, v3, v4);
  return v2;
}
