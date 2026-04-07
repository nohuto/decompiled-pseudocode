/*
 * XREFs of ?SetRectangle@CRectangleGeometryProxy@@QEAAJMMMMMMMMMMMM_N@Z @ 0x18001C284
 * Callers:
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z @ 0x18001C16C (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ?_ValidateDCompVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A8AE8 (-_ValidateDCompVisual@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJAEBUMilPointAndSizeL@@MPEAPEAVCRectangleGeometryProxy@@@Z @ 0x1800D62E0 (-CreateRectangleGeometry@ResourceHelper@@SAJAEBUMilPointAndSizeL@@MPEAPEAVCRectangleGeometryProx.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CRectangleGeometryProxy::SetRectangle(CRectangleGeometryProxy *this, float a2, float a3, float a4)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL) + 560LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 2) + 24LL));
}
