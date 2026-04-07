/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_AccessViolationAdjustSnapUI@@@details@wil@@QEAA_NXZ @ 0x180065A94
 * Callers:
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18003BAF0 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?AdjustSnapUIArrangementStartRect@CTopLevelWindow3D@@QEAA?AUMilPointAndSizeF@@AEBU2@@Z @ 0x1800E7060 (-AdjustSnapUIArrangementStartRect@CTopLevelWindow3D@@QEAA-AUMilPointAndSizeF@@AEBU2@@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_AccessViolationAdjustSnapUI@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180065810 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_AccessViolatio.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_AccessViolationAdjustSnapUI@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180065A10 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_AccessViolationAdjustSnapUI@@@d.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_AccessViolationAdjustSnapUI>::__private_IsEnabled(
        volatile signed __int32 *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  signed __int32 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_AccessViolationAdjustSnapUI>::GetCachedFeatureEnabledState(
    a1,
    &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_AccessViolationAdjustSnapUI>::ReportUsage(
    a1,
    v6 & 1,
    v3,
    v4);
  return v2;
}
