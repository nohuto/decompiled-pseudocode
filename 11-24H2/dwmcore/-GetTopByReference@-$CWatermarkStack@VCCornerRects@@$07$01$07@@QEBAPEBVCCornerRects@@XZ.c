/*
 * XREFs of ?GetTopByReference@?$CWatermarkStack@VCCornerRects@@$07$01$07@@QEBAPEBVCCornerRects@@XZ @ 0x1802664A4
 * Callers:
 *     ?GetCornerRects@COccluderClipStack@@QEBAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAVCCornerRects@@@Z @ 0x180266444 (-GetCornerRects@COccluderClipStack@@QEBAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTAN.c)
 *     ?Push@COccluderClipStack@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVCShapePtr@@AEBVCMILMatrix@@@Z @ 0x180266808 (-Push@COccluderClipStack@@QEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CWatermarkStack<CCornerRects,8,2,8>::GetTopByReference(__int64 a1)
{
  int v1; // edx
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 8);
  result = 0LL;
  if ( v1 )
    return *(_QWORD *)a1 + 68LL * (unsigned int)(v1 - 1);
  return result;
}
