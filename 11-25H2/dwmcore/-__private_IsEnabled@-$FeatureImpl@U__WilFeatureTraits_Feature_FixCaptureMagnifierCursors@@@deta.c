/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_FixCaptureMagnifierCursors@@@details@wil@@QEAA_NXZ @ 0x180266714
 * Callers:
 *     ?ShowHideCursors@CComposition@@IEAAX_N@Z @ 0x1800764D0 (-ShowHideCursors@CComposition@@IEAAX_N@Z.c)
 *     ?RemoveCursorVisualListener@CComposition@@QEAAXPEAVCResource@@@Z @ 0x1800BFD48 (-RemoveCursorVisualListener@CComposition@@QEAAXPEAVCResource@@@Z.c)
 *     ?RestoreCursors@CComposition@@QEAAXXZ @ 0x1800C717C (-RestoreCursors@CComposition@@QEAAXXZ.c)
 *     ?RemoveCursorVisual@CComposition@@QEAAXPEAVCVisual@@@Z @ 0x1801986F8 (-RemoveCursorVisual@CComposition@@QEAAXPEAVCVisual@@@Z.c)
 *     ?AddCursorVisual@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x180198818 (-AddCursorVisual@CComposition@@QEAAJPEAVCVisual@@@Z.c)
 *     ?AddCursorVisualListener@CComposition@@QEAAXPEAVCResource@@@Z @ 0x180206CD0 (-AddCursorVisualListener@CComposition@@QEAAXPEAVCResource@@@Z.c)
 *     ?FindCursorVisual@CComposition@@QEAAPEAVCExcludeVisualReference@@PEBVCVisual@@@Z @ 0x18023C5DC (-FindCursorVisual@CComposition@@QEAAPEAVCExcludeVisualReference@@PEBVCVisual@@@Z.c)
 *     ?AddCursorInvalidRects@CCaptureRenderTarget@@IEAAXXZ @ 0x18023F8D8 (-AddCursorInvalidRects@CCaptureRenderTarget@@IEAAXXZ.c)
 *     ?RenderCursors@CCaptureRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x18023F910 (-RenderCursors@CCaptureRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?ForEachCursorVisual@CComposition@@QEAAJV?$function@$$A6AJPEAVCVisual@@PEAVCVisualTree@@@Z@std@@@Z @ 0x18028D618 (-ForEachCursorVisual@CComposition@@QEAAJV-$function@$$A6AJPEAVCVisual@@PEAVCVisualTree@@@Z@std@@.c)
 *     ?RenderCursors_Feature_FixCaptureMagnifierCursors_Off@CCaptureRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x18028DA5C (-RenderCursors_Feature_FixCaptureMagnifierCursors_Off@CCaptureRenderTarget@@IEAAJPEAVCDrawingCon.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_FixCaptureMagnifierCursors@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180265994 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_FixCaptureMagnifierCurso.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_FixCaptureMagnifierCursors@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802663A0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_FixCaptureMagnifierCursors@@@details@wil@.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_FixCaptureMagnifierCursors>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_FixCaptureMagnifierCursors>::GetCachedFeatureEnabledState(
    a1,
    &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_FixCaptureMagnifierCursors>::ReportUsage(
    (__int64)a1,
    v6 & 1,
    v3,
    v4);
  return v2;
}
