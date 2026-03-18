/*
 * XREFs of ?GetBounds@CVisual@@QEBAAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCVisualTree@@@Z @ 0x180020C20
 * Callers:
 *     ?AddLocalBoundsToSubTreesDirtyRegion@CPreComputeContext@@AEAAJPEAVCVisual@@@Z @ 0x180020830 (-AddLocalBoundsToSubTreesDirtyRegion@CPreComputeContext@@AEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisual::GetBounds(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rdx

  result = a1 + 152;
  v4 = a2 + 80;
  if ( a1 == *(_QWORD *)(a2 + 72) )
    return v4;
  return result;
}
