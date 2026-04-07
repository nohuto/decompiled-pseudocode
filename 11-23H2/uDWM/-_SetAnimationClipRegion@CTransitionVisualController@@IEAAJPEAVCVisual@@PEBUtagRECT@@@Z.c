/*
 * XREFs of ?_SetAnimationClipRegion@CTransitionVisualController@@IEAAJPEAVCVisual@@PEBUtagRECT@@@Z @ 0x1800099AC
 * Callers:
 *     ?_UpdateClipping@CTransitionVisualController@@IEAAXPEAVCAnimationComponent@@@Z @ 0x1800098C0 (-_UpdateClipping@CTransitionVisualController@@IEAAXPEAVCAnimationComponent@@@Z.c)
 * Callees:
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCRectangleGeometryProxy@@@Z @ 0x180009A0C (-CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ?SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z @ 0x1800336E4 (-SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CTransitionVisualController::_SetAnimationClipRegion(
        CTransitionVisualController *this,
        CVisualProxy **a2,
        const struct tagRECT *a3)
{
  int v4; // edi
  struct CBaseGeometryProxy *v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  v4 = ResourceHelper::CreateRectangleGeometry(a3, &v6);
  if ( v4 >= 0 )
    v4 = CVisualProxy::SetClip(a2[2], v6);
  if ( v6 )
    CBaseObject::Release(v6);
  return (unsigned int)v4;
}
