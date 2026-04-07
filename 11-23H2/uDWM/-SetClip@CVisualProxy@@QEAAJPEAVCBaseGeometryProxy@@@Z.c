/*
 * XREFs of ?SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z @ 0x1800336E4
 * Callers:
 *     ?_SetAnimationClipRegion@CTransitionVisualController@@IEAAJPEAVCVisual@@PEBUtagRECT@@@Z @ 0x1800099AC (-_SetAnimationClipRegion@CTransitionVisualController@@IEAAJPEAVCVisual@@PEBUtagRECT@@@Z.c)
 *     ?EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ @ 0x180009C74 (-EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ.c)
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x18000CB80 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 *     ?CreateBorderStructure@CWindowBorder@@AEAAJXZ @ 0x1800325B4 (-CreateBorderStructure@CWindowBorder@@AEAAJXZ.c)
 *     ?SetContent@CWindowBorder@@QEAAJPEAVCVisual@@@Z @ 0x180035CF4 (-SetContent@CWindowBorder@@QEAAJPEAVCVisual@@@Z.c)
 *     ?UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ @ 0x18003CCA0 (-UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18003D8E0 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateAnimatedResources@CTopLevelWindow3D@@AEAAJXZ @ 0x180040710 (-UpdateAnimatedResources@CTopLevelWindow3D@@AEAAJXZ.c)
 *     ?ValidateVisual@CAccent@@UEAAJXZ @ 0x180050650 (-ValidateVisual@CAccent@@UEAAJXZ.c)
 *     ?UpdateBackgroundWithClip@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A7778 (-UpdateBackgroundWithClip@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?UpdateGeometry2DWithClip@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A7974 (-UpdateGeometry2DWithClip@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?UpdateWindowTarget@CTopLevelWindow@@QEAAJXZ @ 0x1800E6A1C (-UpdateWindowTarget@CTopLevelWindow@@QEAAJXZ.c)
 *     wil::details::lambda_call__lambda_401445e683f102b3b9b979d738c66a4a___::_lambda_call__lambda_401445e683f102b3b9b979d738c66a4a___ @ 0x180106028 (wil--details--lambda_call__lambda_401445e683f102b3b9b979d738c66a4a___--_lambda_call__lambda_4014.c)
 *     ?EnableBorder@CWindowBorder@@QEAAJ_N@Z @ 0x18010609C (-EnableBorder@CWindowBorder@@QEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisualProxy::SetClip(CVisualProxy *this, struct CBaseGeometryProxy *a2)
{
  unsigned int v2; // eax

  v2 = 0;
  if ( a2 )
    v2 = *(_DWORD *)(*((_QWORD *)a2 + 2) + 24LL);
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL) + 344LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
           v2);
}
