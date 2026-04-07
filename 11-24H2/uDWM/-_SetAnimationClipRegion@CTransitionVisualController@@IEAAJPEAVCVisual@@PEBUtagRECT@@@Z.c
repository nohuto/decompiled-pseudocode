/*
 * XREFs of ?_SetAnimationClipRegion@CTransitionVisualController@@IEAAJPEAVCVisual@@PEBUtagRECT@@@Z @ 0x180051B84
 * Callers:
 *     ?_UpdateClipping@CTransitionVisualController@@IEAAXPEAVCAnimationComponent@@@Z @ 0x1800519FC (-_UpdateClipping@CTransitionVisualController@@IEAAXPEAVCAnimationComponent@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z @ 0x180039A4C (-SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCRectangleGeometryProxy@@@Z @ 0x18003A4E4 (-CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCRectangleGeometryProxy@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CTransitionVisualController::_SetAnimationClipRegion(
        CTransitionVisualController *this,
        CVisualProxy **a2,
        const struct tagRECT *a3)
{
  int v4; // edi
  CBaseObject *v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  v4 = ResourceHelper::CreateRectangleGeometry(a3, &v6);
  if ( v4 >= 0 )
    v4 = CVisualProxy::SetClip(a2[2], v6);
  if ( v6 )
    CBaseObject::Release(v6);
  return (unsigned int)v4;
}
