/*
 * XREFs of ?GetWorldTransform@CTreeData@@IEBAXPEAVCMILMatrix@@PEA_N0@Z @ 0x1800C3810
 * Callers:
 *     ?GetWorldTransform@CVisual@@QEBAJAEBVCVisualTreePath@@W4WalkReason@@PEAVCMILMatrix@@@Z @ 0x180009488 (-GetWorldTransform@CVisual@@QEBAJAEBVCVisualTreePath@@W4WalkReason@@PEAVCMILMatrix@@@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180083CD0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z @ 0x180091730 (-HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@PEAV1@_N@Z @ 0x1800ABE30 (-ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@PEAV1@_N@Z.c)
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@PEBVCMILMatrix@@PEBV1@W4D2D1_ANTIALIAS_MODE@@W4CpuClippingScopeMode@@@Z @ 0x1800AE6F0 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@P.c)
 *     ?PostSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800C0020 (-PostSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800C1560 (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?ProcessVisualsWorldTransformAndClip@CPreComputeContext@@AEAAJPEAVCVisual@@0PEAVSubTreeContext@1@PEAVCMILMatrix@@@Z @ 0x1800C28B0 (-ProcessVisualsWorldTransformAndClip@CPreComputeContext@@AEAAJPEAVCVisual@@0PEAVSubTreeContext@1.c)
 *     ?GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x1800C35D0 (-GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?AffectsVisual@CCompositionSpotLight@@UEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x18014B770 (-AffectsVisual@CCompositionSpotLight@@UEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?IsValidCoordinateSpace@CCompositionLight@@IEBA_NPEBVCVisualTree@@PEBVCVisual@@PEAV3@@Z @ 0x180168EF4 (-IsValidCoordinateSpace@CCompositionLight@@IEBA_NPEBVCVisualTree@@PEBVCVisual@@PEAV3@@Z.c)
 *     ?IsValid@CCompositionSpotLight@@UEBA_NPEBVCVisualTree@@PEBVCVisual@@@Z @ 0x1801D9010 (-IsValid@CCompositionSpotLight@@UEBA_NPEBVCVisualTree@@PEBVCVisual@@@Z.c)
 *     ?IsValid@CCompositionPointLight@@UEBA_NPEBVCVisualTree@@PEBVCVisual@@@Z @ 0x1801D9940 (-IsValid@CCompositionPointLight@@UEBA_NPEBVCVisualTree@@PEBVCVisual@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802422DC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Comp_Racy@@@details@wil@@QEAA_NXZ @ 0x180257014 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Comp_Racy@@@details@wil@@QEAA_NXZ.c)
 */

void __fastcall CTreeData::GetWorldTransform(CTreeData *this, struct CMILMatrix *a2, bool *a3, struct CMILMatrix *a4)
{
  bool v8; // zf
  const char *v9; // r9
  __int64 v10; // rax
  __int64 v11; // rax
  int v12; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v8 = (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Comp_Racy>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Comp_Racy>::GetImpl'::`2'::impl) == 0;
  v10 = *((_QWORD *)this + 28);
  if ( v8 )
  {
    if ( !v10 )
      ModuleFailFastForHRESULT(-2003292412, retaddr);
    *(_OWORD *)a2 = *(_OWORD *)((char *)this + 280);
    *((_OWORD *)a2 + 1) = *(_OWORD *)((char *)this + 296);
    *((_OWORD *)a2 + 2) = *(_OWORD *)((char *)this + 312);
    *((_OWORD *)a2 + 3) = *(_OWORD *)((char *)this + 328);
    *((_DWORD *)a2 + 16) = *((_DWORD *)this + 86);
    *a3 = *((_BYTE *)this + 11);
    if ( a4 )
    {
      v11 = *((_QWORD *)this + 32);
      goto LABEL_5;
    }
  }
  else
  {
    if ( !v10 )
      wil::details::in1diag3::_FailFast_Unexpected(
        (wil::details::in1diag3 *)retaddr,
        (void *)0xFF,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\treedata.cpp",
        v9);
    *(_OWORD *)a2 = *(_OWORD *)((char *)this + 280);
    *((_OWORD *)a2 + 1) = *(_OWORD *)((char *)this + 296);
    *((_OWORD *)a2 + 2) = *(_OWORD *)((char *)this + 312);
    *((_OWORD *)a2 + 3) = *(_OWORD *)((char *)this + 328);
    *((_DWORD *)a2 + 16) = *((_DWORD *)this + 86);
    *a3 = *((_BYTE *)this + 11);
    if ( a4 )
    {
      v11 = *((_QWORD *)this + 33);
LABEL_5:
      if ( v11 )
      {
        *(_OWORD *)a4 = *(_OWORD *)v11;
        *((_OWORD *)a4 + 1) = *(_OWORD *)(v11 + 16);
        *((_OWORD *)a4 + 2) = *(_OWORD *)(v11 + 32);
        *((_OWORD *)a4 + 3) = *(_OWORD *)(v11 + 48);
        v12 = *(_DWORD *)(v11 + 64);
      }
      else
      {
        *(_OWORD *)a4 = *(_OWORD *)((char *)this + 280);
        *((_OWORD *)a4 + 1) = *(_OWORD *)((char *)this + 296);
        *((_OWORD *)a4 + 2) = *(_OWORD *)((char *)this + 312);
        *((_OWORD *)a4 + 3) = *(_OWORD *)((char *)this + 328);
        v12 = *((_DWORD *)this + 86);
      }
      *((_DWORD *)a4 + 16) = v12;
    }
  }
}
