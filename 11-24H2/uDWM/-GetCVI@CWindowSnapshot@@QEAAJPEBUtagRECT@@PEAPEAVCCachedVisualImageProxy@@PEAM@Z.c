/*
 * XREFs of ?GetCVI@CWindowSnapshot@@QEAAJPEBUtagRECT@@PEAPEAVCCachedVisualImageProxy@@PEAM@Z @ 0x18008A83C
 * Callers:
 *     ?Initialize@CTransitionWindowSnapshot@@MEAAJPEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@@Z @ 0x180005B60 (-Initialize@CTransitionWindowSnapshot@@MEAAJPEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@@Z.c)
 *     ?GetSurfaceFromThumbnail@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@_NPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisualImageProxy@@PEAUD2D_POINT_3F@@@Z @ 0x18008919C (-GetSurfaceFromThumbnail@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARG.c)
 *     ?MakeStatic@CSecondaryWindowRepresentation@@QEAAX_NPEBUD2D_POINTANDSIZE_L@@PEAPEAVCCachedVisualImageProxy@@@Z @ 0x1800D0B28 (-MakeStatic@CSecondaryWindowRepresentation@@QEAAX_NPEBUD2D_POINTANDSIZE_L@@PEAPEAVCCachedVisualI.c)
 * Callees:
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?HasCVIOfCompatibleSize@CWindowSnapshot@@QEAA_NPEBUtagRECT@@@Z @ 0x18009AEB4 (-HasCVIOfCompatibleSize@CWindowSnapshot@@QEAA_NPEBUtagRECT@@@Z.c)
 */

__int64 __fastcall CWindowSnapshot::GetCVI(
        CWindowSnapshot *this,
        const struct tagRECT *a2,
        struct CCachedVisualImageProxy **a3,
        float *a4)
{
  unsigned int v6; // ebx
  __int64 v7; // r11
  CMILRefCountBase *v8; // rcx

  v6 = -2147023434;
  if ( CWindowSnapshot::HasCVIOfCompatibleSize(this, a2) )
  {
    *a3 = *(struct CCachedVisualImageProxy **)(v7 + 48);
    v8 = *(CMILRefCountBase **)(v7 + 48);
    if ( v8 )
      CMILRefCountBase::AddRef(v8);
    v6 = 0;
    *a4 = *(float *)(v7 + 72);
  }
  return v6;
}
