/*
 * XREFs of ??1COcclusionContext@@QEAA@XZ @ 0x180083B2C
 * Callers:
 *     ??R?$default_delete@VCOcclusionContext@@@std@@QEBAXPEAVCOcclusionContext@@@Z @ 0x1800825B0 (--R-$default_delete@VCOcclusionContext@@@std@@QEBAXPEAVCOcclusionContext@@@Z.c)
 *     ??1CCachedVisualImage@@MEAA@XZ @ 0x1801851AC (--1CCachedVisualImage@@MEAA@XZ.c)
 *     ??1CaptureBitsResponse@@MEAA@XZ @ 0x1801855AC (--1CaptureBitsResponse@@MEAA@XZ.c)
 *     ??1?$CTargetDirtyBase@$07@@QEAA@XZ @ 0x1801A9FC0 (--1-$CTargetDirtyBase@$07@@QEAA@XZ.c)
 *     ??1CDesktopTree@@UEAA@XZ @ 0x180295F00 (--1CDesktopTree@@UEAA@XZ.c)
 *     ??1CHolographicInteropTexture@@MEAA@XZ @ 0x1802DB974 (--1CHolographicInteropTexture@@MEAA@XZ.c)
 * Callees:
 *     ??1?$expandable_buffer_base@PEAVCOverlayContext@@$01@detail@@QEAA@XZ @ 0x180009BF4 (--1-$expandable_buffer_base@PEAVCOverlayContext@@$01@detail@@QEAA@XZ.c)
 *     ??1?$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V?$buffer_impl@UVisualTreePathUnit@CVisualTreePath@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x180009C50 (--1-$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V-$buffer_impl@UVisualTreePathUnit@CVisu.c)
 *     ?clear@?$vector_facade@PEAVCResponseItemBase@@V?$buffer_impl@PEAVCResponseItemBase@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18006B814 (-clear@-$vector_facade@PEAVCResponseItemBase@@V-$buffer_impl@PEAVCResponseItemBase@@$01$00Vliber.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180099AE0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ??1CLightStack@@QEAA@XZ @ 0x1800E3D8C (--1CLightStack@@QEAA@XZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800E54D0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??1CClipStack@@QEAA@XZ @ 0x1801EFA74 (--1CClipStack@@QEAA@XZ.c)
 *     ??1?$vector_facade@VCTempOcclusionRect@COcclusionContext@@V?$buffer_impl@VCTempOcclusionRect@COcclusionContext@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x18026FED8 (--1-$vector_facade@VCTempOcclusionRect@COcclusionContext@@V-$buffer_impl@VCTempOcclusionRect@COc.c)
 *     ??1COccluderClipStack@@QEAA@XZ @ 0x18026FEFC (--1COccluderClipStack@@QEAA@XZ.c)
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
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 616);
  FastRegion::CRegion::FreeMemory((COcclusionContext *)((char *)this + 528));
  FastRegion::CRegion::FreeMemory((COcclusionContext *)((char *)this + 456));
  CLightStack::~CLightStack((COcclusionContext *)((char *)this + 224));
  COccluderClipStack::~COccluderClipStack((COcclusionContext *)((char *)this + 176));
  CClipStack::~CClipStack((COcclusionContext *)((char *)this + 152));
  CClipStack::~CClipStack((COcclusionContext *)((char *)this + 128));
  operator delete(*((void **)this + 11));
  operator delete(*((void **)this + 4));
  std::unique_ptr<CVisualTreePath>::~unique_ptr<CVisualTreePath>((char *)this + 16);
}
