/*
 * XREFs of ??0CVisualTree@@IEAA@PEAVCComposition@@PEAVCVisual@@@Z @ 0x180167DE4
 * Callers:
 *     ?Create@CVisualTree@@KAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z @ 0x180167D00 (-Create@CVisualTree@@KAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z.c)
 *     ?Create@CSubVisualTree@@KAJPEAVCVisual@@PEAPEAVCVisualTree@@@Z @ 0x180168D04 (-Create@CSubVisualTree@@KAJPEAVCVisual@@PEAPEAVCVisualTree@@@Z.c)
 *     ??0CDesktopTree@@IEAA@PEAVCComposition@@@Z @ 0x180229A1C (--0CDesktopTree@@IEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ??0CTreeDirty@@QEAA@PEAVCVisualTree@@@Z @ 0x1802458B8 (--0CTreeDirty@@QEAA@PEAVCVisualTree@@@Z.c)
 */

CVisualTree *__fastcall CVisualTree::CVisualTree(CVisualTree *this, struct CComposition *a2, struct CVisual *a3)
{
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = a2;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *(_QWORD *)this = &CVisualTree::`vftable';
  *((_QWORD *)this + 9) = a3;
  *((_OWORD *)this + 5) = TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  CTreeDirty::CTreeDirty((CVisualTree *)((char *)this + 112), this);
  *((_QWORD *)this + 313) = 0LL;
  *((_QWORD *)this + 306) = (char *)this + 2472;
  *((_QWORD *)this + 307) = (char *)this + 2472;
  *((_QWORD *)this + 308) = (char *)this + 2504;
  *((_QWORD *)this + 314) = 0LL;
  *((_QWORD *)this + 315) = (char *)this + 2528;
  *((_DWORD *)this + 632) = 0;
  *((_DWORD *)this + 648) = 1065353216;
  *((_QWORD *)this + 325) = 0LL;
  *((_DWORD *)this + 656) = 0;
  *((_DWORD *)this + 657) = 1;
  *(_OWORD *)((char *)this + 2504) = TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::sc_rcInfinite;
  *((_QWORD *)this + 327) = (char *)this + 2608;
  *((_QWORD *)this + 326) = (char *)this + 2608;
  return this;
}
