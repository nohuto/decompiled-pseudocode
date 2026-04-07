/*
 * XREFs of ?SetCVIBrush@CAnimatedTransitionVisual@@QEAAJPEAVCImageLegacyMilBrushProxy@@PEAVCCachedVisualImageProxy@@@Z @ 0x1800A4D80
 * Callers:
 *     ?CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT@@_N2PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x180050A28 (-CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT.c)
 * Callees:
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::SetCVIBrush(
        CAnimatedTransitionVisual *this,
        struct CImageLegacyMilBrushProxy *a2,
        struct CCachedVisualImageProxy *a3)
{
  CBaseObject *v5; // rcx
  CBaseObject *v7; // rcx

  v5 = (CBaseObject *)*((_QWORD *)this + 68);
  if ( v5 )
    CBaseObject::Release(v5);
  *((_QWORD *)this + 68) = a2;
  if ( a2 )
    CMILRefCountBase::AddRef(a2);
  v7 = (CBaseObject *)*((_QWORD *)this + 67);
  if ( v7 )
    CBaseObject::Release(v7);
  *((_QWORD *)this + 67) = a3;
  if ( a3 )
    CMILRefCountBase::AddRef(a3);
  return 0LL;
}
