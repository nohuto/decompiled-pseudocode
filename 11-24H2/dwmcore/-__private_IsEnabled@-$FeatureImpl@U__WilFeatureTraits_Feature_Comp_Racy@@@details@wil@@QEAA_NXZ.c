/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Comp_Racy@@@details@wil@@QEAA_NXZ @ 0x180257014
 * Callers:
 *     ?CalcTransform@CPreWalkVisual@@AEAAXPEAVCVisual@@PEBVCVisualTree@@_K@Z @ 0x18003B380 (-CalcTransform@CPreWalkVisual@@AEAAXPEAVCVisual@@PEBVCVisualTree@@_K@Z.c)
 *     ?DirtyBoundsForTransformParentChild@CPreWalkVisual@@CAXPEAVCVisual@@PEBVCVisualTree@@@Z @ 0x18003B800 (-DirtyBoundsForTransformParentChild@CPreWalkVisual@@CAXPEAVCVisual@@PEBVCVisualTree@@@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A38B0 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A5180 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z @ 0x1800BF040 (-ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z.c)
 *     ?GetWorldTransform@CTreeData@@IEBAXPEAVCMILMatrix@@PEA_N0@Z @ 0x1800C3810 (-GetWorldTransform@CTreeData@@IEBAXPEAVCMILMatrix@@PEA_N0@Z.c)
 *     ?EnsureWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z @ 0x1800C39A0 (-EnsureWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z.c)
 *     ?SetWorldTransform@CDesktopTreeData@@MEAA_NAEBVCMILMatrix@@_NPEAV2@@Z @ 0x180231240 (-SetWorldTransform@CDesktopTreeData@@MEAA_NAEBVCMILMatrix@@_NPEAV2@@Z.c)
 *     ?SetWorldTransform@CTreeData@@MEAA_NAEBVCMILMatrix@@_NPEAV2@@Z @ 0x180231560 (-SetWorldTransform@CTreeData@@MEAA_NAEBVCMILMatrix@@_NPEAV2@@Z.c)
 *     ?InvalidateWorldTransform@CTreeData@@IEAAXXZ @ 0x180266EC0 (-InvalidateWorldTransform@CTreeData@@IEAAXXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Comp_Racy@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1802565B8 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Comp_Racy@@@details@wil@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Comp_Racy@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180256C80 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Comp_Racy@@@details@wil@@QEAAX_NW4Reporti.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Comp_Racy>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Comp_Racy>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Comp_Racy>::ReportUsage((__int64)a1, v6 & 1, v3, v4);
  return v2;
}
