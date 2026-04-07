/*
 * XREFs of ?EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800176CC
 * Callers:
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x180015CB8 (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ @ 0x1800175E0 (-ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ.c)
 *     ?ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@AEBUtagRECT@@@Z @ 0x18004CB88 (-ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@AEBUtagRECT@@@Z.c)
 *     ?OnStoryboardBegin@CAnimatedTransitionVisual@@UEAAJI@Z @ 0x18007BEE0 (-OnStoryboardBegin@CAnimatedTransitionVisual@@UEAAJI@Z.c)
 *     ?CopyVisual@CAnimatedTransitionVisual@@QEAAJPEAV1@@Z @ 0x1800A46B8 (-CopyVisual@CAnimatedTransitionVisual@@QEAAJPEAV1@@Z.c)
 *     ?SetBitmap@CAnimatedTransitionVisual@@QEAAJPEAVCBitmapSource@@@Z @ 0x1800A4CD8 (-SetBitmap@CAnimatedTransitionVisual@@QEAAJPEAVCBitmapSource@@@Z.c)
 * Callees:
 *     ?Ensure2DResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180017580 (-Ensure2DResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateImageLegacyMilBrushProxy@CCompositor@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@@Z @ 0x18003CC30 (-CreateImageLegacyMilBrushProxy@CCompositor@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@@Z.c)
 *     ?CreateCachedVisualImageProxy@CCompositor@@QEAAJPEAPEAVCCachedVisualImageProxy@@@Z @ 0x18003CD78 (-CreateCachedVisualImageProxy@CCompositor@@QEAAJPEAPEAVCCachedVisualImageProxy@@@Z.c)
 *     ?_EnsureDCompResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180048910 (-_EnsureDCompResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?Ensure3DResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A48C0 (-Ensure3DResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::EnsureResources(CAnimatedTransitionVisual *this)
{
  unsigned int v1; // ebx
  int v3; // eax
  int v5; // eax
  int CachedVisualImageProxy; // eax
  int ImageLegacyMilBrushProxy; // eax
  int v8; // eax

  v1 = 0;
  if ( *((_BYTE *)this + 927) )
    goto LABEL_7;
  if ( !*((_QWORD *)this + 67) )
  {
    CachedVisualImageProxy = CCompositor::CreateCachedVisualImageProxy(
                               *((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6),
                               (struct CCachedVisualImageProxy **)this + 67);
    v1 = CachedVisualImageProxy;
    if ( CachedVisualImageProxy < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, CachedVisualImageProxy, 0x3CDu, 0LL);
      return v1;
    }
  }
  if ( !*((_QWORD *)this + 68) )
  {
    ImageLegacyMilBrushProxy = CCompositor::CreateImageLegacyMilBrushProxy(
                                 *((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6),
                                 (struct CImageLegacyMilBrushProxy **)this + 68);
    v1 = ImageLegacyMilBrushProxy;
    if ( ImageLegacyMilBrushProxy < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ImageLegacyMilBrushProxy, 0x3D2u, 0LL);
      return v1;
    }
  }
  if ( !*((_BYTE *)this + 928) )
  {
    if ( *((_BYTE *)this + 936) )
    {
      v8 = CAnimatedTransitionVisual::Ensure3DResources(this);
      v1 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x3D9u, 0LL);
        return v1;
      }
    }
    else
    {
      v3 = CAnimatedTransitionVisual::Ensure2DResources((struct CMatrixTransformProxy **)this);
      v1 = v3;
      if ( v3 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x3DDu, 0LL);
        return v1;
      }
    }
LABEL_7:
    if ( !*((_BYTE *)this + 928) )
      return v1;
  }
  v5 = CAnimatedTransitionVisual::_EnsureDCompResources(this);
  v1 = v5;
  if ( v5 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x3E5u, 0LL);
  return v1;
}
