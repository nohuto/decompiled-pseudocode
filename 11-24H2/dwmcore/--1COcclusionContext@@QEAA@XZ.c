/*
 * XREFs of ??1COcclusionContext@@QEAA@XZ @ 0x1800F8AFC
 * Callers:
 *     ??R?$default_delete@VCOcclusionContext@@@std@@QEBAXPEAVCOcclusionContext@@@Z @ 0x1800F7584 (--R-$default_delete@VCOcclusionContext@@@std@@QEBAXPEAVCOcclusionContext@@@Z.c)
 *     ??1CaptureBitsResponse@@MEAA@XZ @ 0x18018DBE8 (--1CaptureBitsResponse@@MEAA@XZ.c)
 *     ??1CCachedVisualImage@@MEAA@XZ @ 0x18018DD9C (--1CCachedVisualImage@@MEAA@XZ.c)
 *     ??1?$CTargetDirtyBase@$07@@QEAA@XZ @ 0x1801E4E90 (--1-$CTargetDirtyBase@$07@@QEAA@XZ.c)
 *     ??1CDesktopTree@@UEAA@XZ @ 0x18028AD60 (--1CDesktopTree@@UEAA@XZ.c)
 *     ??1CHolographicInteropTexture@@MEAA@XZ @ 0x1802D26D4 (--1CHolographicInteropTexture@@MEAA@XZ.c)
 * Callees:
 *     ??1?$expandable_buffer_base@PEAVCOverlayContext@@$01@detail@@QEAA@XZ @ 0x180009304 (--1-$expandable_buffer_base@PEAVCOverlayContext@@$01@detail@@QEAA@XZ.c)
 *     ??1?$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V?$buffer_impl@UVisualTreePathUnit@CVisualTreePath@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x180009360 (--1-$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V-$buffer_impl@UVisualTreePathUnit@CVisu.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18003DFB0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?clear@?$vector_facade@PEAVCResponseItemBase@@V?$buffer_impl@PEAVCResponseItemBase@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800419D4 (-clear@-$vector_facade@PEAVCResponseItemBase@@V-$buffer_impl@PEAVCResponseItemBase@@$01$00Vliber.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ??1CLightStack@@QEAA@XZ @ 0x1800BD98C (--1CLightStack@@QEAA@XZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800BEF90 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??1CClipStack@@QEAA@XZ @ 0x1801E5D64 (--1CClipStack@@QEAA@XZ.c)
 *     ??1?$vector_facade@VCTempOcclusionRect@COcclusionContext@@V?$buffer_impl@VCTempOcclusionRect@COcclusionContext@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x180263E88 (--1-$vector_facade@VCTempOcclusionRect@COcclusionContext@@V-$buffer_impl@VCTempOcclusionRect@COc.c)
 *     ??1COccluderClipStack@@QEAA@XZ @ 0x180263EAC (--1COccluderClipStack@@QEAA@XZ.c)
 */

void __fastcall COcclusionContext::~COcclusionContext(COcclusionContext *this)
{
  void **v2; // rcx

  detail::vector_facade<CResponseItemBase *,detail::buffer_impl<CResponseItemBase *,2,1,detail::liberal_expansion_policy>>::clear((_QWORD *)this + 225);
  detail::expandable_buffer_base<COverlayContext *,2>::~expandable_buffer_base<COverlayContext *,2>(v2);
  operator delete(*((void **)this + 222));
  operator delete(*((void **)this + 219));
  operator delete(*((void **)this + 216));
  detail::vector_facade<COcclusionContext::CTempOcclusionRect,detail::buffer_impl<COcclusionContext::CTempOcclusionRect,10,1,detail::liberal_expansion_policy>>::~vector_facade<COcclusionContext::CTempOcclusionRect,detail::buffer_impl<COcclusionContext::CTempOcclusionRect,10,1,detail::liberal_expansion_policy>>((char *)this + 1312);
  detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::~vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>((__int64)this + 1128);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 616);
  FastRegion::CRegion::FreeMemory((FastRegion::CRegion **)this + 66);
  FastRegion::CRegion::FreeMemory((FastRegion::CRegion **)this + 57);
  CLightStack::~CLightStack((COcclusionContext *)((char *)this + 224));
  COccluderClipStack::~COccluderClipStack((COcclusionContext *)((char *)this + 176));
  CClipStack::~CClipStack((COcclusionContext *)((char *)this + 152));
  CClipStack::~CClipStack((COcclusionContext *)((char *)this + 128));
  operator delete(*((void **)this + 11));
  operator delete(*((void **)this + 4));
  std::unique_ptr<CVisualTreePath>::~unique_ptr<CVisualTreePath>((char *)this + 16);
}
