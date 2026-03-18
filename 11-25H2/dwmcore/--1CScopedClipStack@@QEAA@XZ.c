/*
 * XREFs of ??1CScopedClipStack@@QEAA@XZ @ 0x1801DE4B4
 * Callers:
 *     ??1CDrawingContext@@MEAA@XZ @ 0x1801DE2FC (--1CDrawingContext@@MEAA@XZ.c)
 * Callees:
 *     ?clear@?$vector_facade@UCpuClipStackState@CScopedClipStack@@V?$buffer_impl@UCpuClipStackState@CScopedClipStack@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800ABD10 (-clear@-$vector_facade@UCpuClipStackState@CScopedClipStack@@V-$buffer_impl@UCpuClipStackState@CS.c)
 *     ?Clear@CScopedClipStack@@QEAAXXZ @ 0x1800ABDF4 (-Clear@CScopedClipStack@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ??1?$expandable_buffer_base@V?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@$01@detail@@QEAA@XZ @ 0x1801DE510 (--1-$expandable_buffer_base@V-$unique_ptr@VCCachedRealization@CCachedImageProducer@@U-$default_d.c)
 */

void __fastcall CScopedClipStack::~CScopedClipStack(CScopedClipStack *this)
{
  CScopedClipStack::Clear(this);
  operator delete(*((void **)this + 299));
  operator delete(*((void **)this + 296));
  detail::vector_facade<CScopedClipStack::CpuClipStackState,detail::buffer_impl<CScopedClipStack::CpuClipStackState,10,1,detail::liberal_expansion_policy>>::clear((__int64 *)this + 243);
  detail::expandable_buffer_base<std::unique_ptr<CCachedImageProducer::CCachedRealization>,2>::~expandable_buffer_base<std::unique_ptr<CCachedImageProducer::CCachedRealization>,2>((char *)this + 1944);
  detail::vector_facade<CScopedClipStack::ClippingScopeState,detail::buffer_impl<CScopedClipStack::ClippingScopeState,10,1,detail::liberal_expansion_policy>>::~vector_facade<CScopedClipStack::ClippingScopeState,detail::buffer_impl<CScopedClipStack::ClippingScopeState,10,1,detail::liberal_expansion_policy>>(this);
}
