/*
 * XREFs of ?InvalidateWorldTransform@CTreeData@@IEAAXXZ @ 0x180266EC0
 * Callers:
 *     ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x1800BEE54 (-OnOuterTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?OnTransformChanged@CVisual@@AEAAXXZ @ 0x1801343C8 (-OnTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?EnsureLayoutSize@CVisual@@QEAAXXZ @ 0x1801859C0 (-EnsureLayoutSize@CVisual@@QEAAXXZ.c)
 *     ?UpdateLayoutSize@CVisual@@IEAAXXZ @ 0x1801865D0 (-UpdateLayoutSize@CVisual@@IEAAXXZ.c)
 *     ?ProcessSetContextOverrides@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETCONTEXTOVERRIDES@@@Z @ 0x1801E1DDC (-ProcessSetContextOverrides@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETCONTEXTOVE.c)
 *     ?ProcessSetOptions@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETOPTIONS@@@Z @ 0x1801EFFFC (-ProcessSetOptions@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETOPTIONS@@@Z.c)
 * Callees:
 *     ?IsCurrentThreadWriter@CReadWriteLock@@QEBA_NXZ @ 0x1801C9750 (-IsCurrentThreadWriter@CReadWriteLock@@QEBA_NXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802422DC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Comp_Racy@@@details@wil@@QEAA_NXZ @ 0x180257014 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Comp_Racy@@@details@wil@@QEAA_NXZ.c)
 */

void __fastcall CTreeData::InvalidateWorldTransform(CTreeData *this)
{
  const char *v2; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Comp_Racy>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Comp_Racy>::GetImpl'::`2'::impl)
    && !CReadWriteLock::IsCurrentThreadWriter((CGlobalComposition *)((char *)g_pComposition + 5704)) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x132,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\treedata.cpp",
      v2);
  }
  *((_QWORD *)this + 28) = 0LL;
}
