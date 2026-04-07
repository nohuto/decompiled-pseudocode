/*
 * XREFs of ?SetClientAreaBrush@CAnimatedTransitionVisual@@QEAAJPEAVCImageLegacyMilBrushProxy@@PEAVCCachedVisualImageProxy@@PEAUMilPoint3F@@@Z @ 0x180015918
 * Callers:
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x180015CF0 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::SetClientAreaBrush(
        CAnimatedTransitionVisual *this,
        struct CImageLegacyMilBrushProxy *a2,
        struct CCachedVisualImageProxy *a3,
        struct MilPoint3F *a4)
{
  CBaseObject *v6; // rcx
  CBaseObject *v9; // rcx

  v6 = (CBaseObject *)*((_QWORD *)this + 76);
  if ( v6 )
    CBaseObject::Release(v6);
  *((_QWORD *)this + 76) = a2;
  if ( a2 )
    _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
  v9 = (CBaseObject *)*((_QWORD *)this + 73);
  if ( v9 )
    CBaseObject::Release(v9);
  *((_QWORD *)this + 73) = a3;
  if ( a3 )
    _InterlockedIncrement((volatile signed __int32 *)a3 + 2);
  *(_QWORD *)((char *)this + 812) = *(_QWORD *)a4;
  *((_DWORD *)this + 205) = *((_DWORD *)a4 + 2);
  return 0LL;
}
