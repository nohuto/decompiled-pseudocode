/*
 * XREFs of ?ComputeBounds@CRedirectedVisualContent@@QEAAXXZ @ 0x1802146F4
 * Callers:
 *     ?GetContentBounds@CRedirectVisual@@UEAAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180214690 (-GetContentBounds@CRedirectVisual@@UEAAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTAND.c)
 * Callees:
 *     ?Clean@CVisualTree@@IEAAJPEAVCPreComputeContext@@@Z @ 0x180098EA0 (-Clean@CVisualTree@@IEAAJPEAVCPreComputeContext@@@Z.c)
 */

void __fastcall CRedirectedVisualContent::ComputeBounds(CRedirectedVisualContent *this)
{
  __int64 v2; // rax

  if ( (int)CVisualTree::Clean(*((CVisualTree **)this + 10), 0LL) < 0 )
  {
    *(_OWORD *)((char *)this + 88) = TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    *((_QWORD *)this + 13) = 0x7F7FFFFFFF7FFFFFLL;
  }
  else
  {
    v2 = *((_QWORD *)this + 10);
    *(_OWORD *)((char *)this + 88) = *(_OWORD *)(v2 + 80);
    *((_QWORD *)this + 13) = *(_QWORD *)(v2 + 96);
  }
}
