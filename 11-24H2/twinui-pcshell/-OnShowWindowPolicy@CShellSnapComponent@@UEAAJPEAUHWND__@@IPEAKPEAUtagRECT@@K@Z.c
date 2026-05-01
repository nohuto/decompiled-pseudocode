/*
 * XREFs of ?OnShowWindowPolicy@CShellSnapComponent@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@K@Z @ 0x18059F7C0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsAnySnapFlyoutInstanceVisible@SnapFlyoutHost@@QEAA_NXZ @ 0x180047C44 (-IsAnySnapFlyoutInstanceVisible@SnapFlyoutHost@@QEAA_NXZ.c)
 *     ?__private_IsEnabledPreCheck@?$FeatureImpl@U__WilFeatureTraits_Feature_SNTest@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1801DD530 (-__private_IsEnabledPreCheck@-$FeatureImpl@U__WilFeatureTraits_Feature_SNTest@@@details@wil@@QEA.c)
 *     ??$OnShowWindowPolicy@_KAEAI@CSnapComponentTelemetry@@SAX$$QEA_KAEAI@Z @ 0x18059AAD8 (--$OnShowWindowPolicy@_KAEAI@CSnapComponentTelemetry@@SAX$$QEA_KAEAI@Z.c)
 *     ?DismissForTargetWindow@SnapFlyoutHost@@QEAAXPEAUHWND__@@@Z @ 0x1805B2C60 (-DismissForTargetWindow@SnapFlyoutHost@@QEAAXPEAUHWND__@@@Z.c)
 */

__int64 __fastcall CShellSnapComponent::OnShowWindowPolicy(
        CShellSnapComponent *this,
        HWND a2,
        int a3,
        unsigned int *a4,
        struct tagRECT *a5)
{
  const char *v9; // r9
  RTL_SRWLOCK *v10; // rcx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  HWND v13; // [rsp+48h] [rbp+10h] BYREF
  int v14; // [rsp+50h] [rbp+18h] BYREF

  v14 = a3;
  v13 = a2;
  CSnapComponentTelemetry::OnShowWindowPolicy<unsigned __int64,unsigned int &>((__int64 *)&v13, &v14);
  *a4 = 0;
  *a5 = 0LL;
  try
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_SNTest>::__private_IsEnabledPreCheck(
      (__int64)&`wil::Feature<__WilFeatureTraits_Feature_SNTest>::GetImpl'::`2'::impl,
      3u);
    if ( a3 == 3 || a3 == 9 )
    {
      v10 = (RTL_SRWLOCK *)*((_QWORD *)this + 92);
      if ( v10 )
      {
        if ( SnapFlyoutHost::IsAnySnapFlyoutInstanceVisible(v10) )
          SnapFlyoutHost::DismissForTargetWindow(*((SnapFlyoutHost **)this + 92), a2);
      }
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x803,
                           (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
                           v9);
  }
  return result;
}
