/*
 * XREFs of ??0CDesktopTree@@IEAA@PEAVCComposition@@@Z @ 0x180205944
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x180110938 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ?Create@CDesktopTree@@KAJPEAVCComposition@@PEAVCVisual@@U_LUID@@PEAPEAV1@@Z @ 0x180295FA8 (-Create@CDesktopTree@@KAJPEAVCComposition@@PEAVCVisual@@U_LUID@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0COcclusionContext@@QEAA@XZ @ 0x180083198 (--0COcclusionContext@@QEAA@XZ.c)
 *     ??0CVisualTree@@IEAA@PEAVCComposition@@PEAVCVisual@@@Z @ 0x180205AE0 (--0CVisualTree@@IEAA@PEAVCComposition@@PEAVCVisual@@@Z.c)
 */

CDesktopTree *__fastcall CDesktopTree::CDesktopTree(CDesktopTree *this, struct CComposition *a2)
{
  __int64 v3; // r8

  CVisualTree::CVisualTree(this, a2, 0LL);
  *(_QWORD *)this = &CDesktopTree::`vftable';
  *((_QWORD *)this + 330) = 0LL;
  COcclusionContext::COcclusionContext((CDesktopTree *)((char *)this + 2648));
  *((_QWORD *)this + 561) = v3;
  *((_QWORD *)this + 562) = (char *)this + 4520;
  *((_QWORD *)this + 563) = (char *)this + 4520;
  *((_QWORD *)this + 564) = (char *)this + 4552;
  *((_QWORD *)this + 569) = v3;
  *((_QWORD *)this + 570) = (char *)this + 4584;
  *((_QWORD *)this + 571) = (char *)this + 4584;
  *((_QWORD *)this + 572) = (char *)this + 5224;
  *((_QWORD *)this + 653) = (char *)this + 5248;
  *((_QWORD *)this + 654) = (char *)this + 5248;
  *((_QWORD *)this + 655) = (char *)this + 5376;
  return this;
}
