/*
 * XREFs of ??_GCShadowBlurProducer@@EEAAPEAXI@Z @ 0x180215650
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$vector_facade@V?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@V?$buffer_impl@V?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x1800FD1C0 (--1-$vector_facade@V-$unique_ptr@VCCachedRealization@CCachedImageProducer@@U-$default_delete@VCC.c)
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 */

CShadowBlurProducer *__fastcall CShadowBlurProducer::`scalar deleting destructor'(CShadowBlurProducer *this, char a2)
{
  detail::vector_facade<std::unique_ptr<CCachedImageProducer::CCachedRealization>,detail::buffer_impl<std::unique_ptr<CCachedImageProducer::CCachedRealization>,2,1,detail::liberal_expansion_policy>>::~vector_facade<std::unique_ptr<CCachedImageProducer::CCachedRealization>,detail::buffer_impl<std::unique_ptr<CCachedImageProducer::CCachedRealization>,2,1,detail::liberal_expansion_policy>>((__int64)this + 32);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x80uLL);
  return this;
}
