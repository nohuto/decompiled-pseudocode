/*
 * XREFs of ??0CBaseGeometryProxy@@QEAA@XZ @ 0x18006784C
 * Callers:
 *     ??$CreateProxy@VCCombinedGeometryProxy@@@CCompositor@@IEAAJPEAPEAVCCombinedGeometryProxy@@@Z @ 0x1800674D4 (--$CreateProxy@VCCombinedGeometryProxy@@@CCompositor@@IEAAJPEAPEAVCCombinedGeometryProxy@@@Z.c)
 *     ??$CreateProxy@VCGeometry2dGroupProxy@@@CCompositor@@IEAAJPEAPEAVCGeometry2dGroupProxy@@@Z @ 0x1800675B4 (--$CreateProxy@VCGeometry2dGroupProxy@@@CCompositor@@IEAAJPEAPEAVCGeometry2dGroupProxy@@@Z.c)
 *     ??$CreateProxy@VCRgnGeometryProxy@@@CCompositor@@IEAAJPEAPEAVCRgnGeometryProxy@@@Z @ 0x180067690 (--$CreateProxy@VCRgnGeometryProxy@@@CCompositor@@IEAAJPEAPEAVCRgnGeometryProxy@@@Z.c)
 *     ??$CreateProxy@VCRectangleGeometryProxy@@@CCompositor@@IEAAJPEAPEAVCRectangleGeometryProxy@@@Z @ 0x18006776C (--$CreateProxy@VCRectangleGeometryProxy@@@CCompositor@@IEAAJPEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ??$CreateProxyFromSharedHandle@VCAnimationTriggerProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCAnimationTriggerProxy@@@Z @ 0x1800746A0 (--$CreateProxyFromSharedHandle@VCAnimationTriggerProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCAnimation.c)
 *     ??$CreateProxy@VCVisualGroupProxy@@@CCompositor@@IEAAJPEAPEAVCVisualGroupProxy@@@Z @ 0x1800B5CE8 (--$CreateProxy@VCVisualGroupProxy@@@CCompositor@@IEAAJPEAPEAVCVisualGroupProxy@@@Z.c)
 *     ??$CreateProxyFromSharedHandle@VCVisualGroupProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCVisualGroupProxy@@@Z @ 0x1800B5F88 (--$CreateProxyFromSharedHandle@VCVisualGroupProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCVisualGroupPro.c)
 * Callees:
 *     ??0CResourceProxy@@IEAA@XZ @ 0x18002676C (--0CResourceProxy@@IEAA@XZ.c)
 */

CBaseGeometryProxy *__fastcall CBaseGeometryProxy::CBaseGeometryProxy(CBaseGeometryProxy *this)
{
  CBaseGeometryProxy *v1; // rcx
  CBaseGeometryProxy *result; // rax

  CResourceProxy::CResourceProxy(this);
  result = v1;
  *(_QWORD *)v1 = &CTransform3dGroupProxy::`vftable';
  return result;
}
