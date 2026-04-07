/*
 * XREFs of ?SetClientAreaBrush@CAnimatedTransitionVisual@@QEAAJPEAVCImageLegacyMilBrushProxy@@PEAVCCachedVisualImageProxy@@PEAUD2D_POINT_3F@@@Z @ 0x1800805A0
 * Callers:
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x180041140 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 * Callees:
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::SetClientAreaBrush(
        CAnimatedTransitionVisual *this,
        struct CImageLegacyMilBrushProxy *a2,
        struct CCachedVisualImageProxy *a3,
        struct D2D_POINT_3F *a4)
{
  CBaseObject *v6; // rcx
  CBaseObject *v9; // rcx

  v6 = (CBaseObject *)*((_QWORD *)this + 70);
  if ( v6 )
    CBaseObject::Release(v6);
  *((_QWORD *)this + 70) = a2;
  if ( a2 )
    CMILRefCountBase::AddRef(a2);
  v9 = (CBaseObject *)*((_QWORD *)this + 67);
  if ( v9 )
    CBaseObject::Release(v9);
  *((_QWORD *)this + 67) = a3;
  if ( a3 )
    CMILRefCountBase::AddRef(a3);
  *(_QWORD *)((char *)this + 764) = *(_QWORD *)a4;
  *((_DWORD *)this + 193) = *((_DWORD *)a4 + 2);
  return 0LL;
}
