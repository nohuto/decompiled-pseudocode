/*
 * XREFs of ??1?$vector_facade@V?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@V?$buffer_impl@V?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x1800DD0C0
 * Callers:
 *     ??_ECEffectIntermediateProducer@@EEAAPEAXI@Z @ 0x1800DD080 (--_ECEffectIntermediateProducer@@EEAAPEAXI@Z.c)
 *     ??_ECShapeBitmapProducer@@EEAAPEAXI@Z @ 0x180218F90 (--_ECShapeBitmapProducer@@EEAAPEAXI@Z.c)
 *     ??_GCShadowBlurProducer@@EEAAPEAXI@Z @ 0x180221140 (--_GCShadowBlurProducer@@EEAAPEAXI@Z.c)
 *     ??_ECWindowBackgroundBitmapProducer@@EEAAPEAXI@Z @ 0x180221B90 (--_ECWindowBackgroundBitmapProducer@@EEAAPEAXI@Z.c)
 *     ??_GCStockBitmapProducer@@EEAAPEAXI@Z @ 0x1802903D0 (--_GCStockBitmapProducer@@EEAAPEAXI@Z.c)
 *     ??1CShadowMaskCachingBlurProducer@@EEAA@XZ @ 0x1802E4600 (--1CShadowMaskCachingBlurProducer@@EEAA@XZ.c)
 *     ??1CShadowMaskProducer@@EEAA@XZ @ 0x1802E4628 (--1CShadowMaskProducer@@EEAA@XZ.c)
 * Callees:
 *     ?clear@?$vector_facade@V?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@V?$buffer_impl@V?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800DD11C (-clear@-$vector_facade@V-$unique_ptr@VCCachedRealization@CCachedImageProducer@@U-$default_delete.c)
 */

__int64 __fastcall detail::vector_facade<std::unique_ptr<CCachedImageProducer::CCachedRealization>,detail::buffer_impl<std::unique_ptr<CCachedImageProducer::CCachedRealization>,2,1,detail::liberal_expansion_policy>>::~vector_facade<std::unique_ptr<CCachedImageProducer::CCachedRealization>,detail::buffer_impl<std::unique_ptr<CCachedImageProducer::CCachedRealization>,2,1,detail::liberal_expansion_policy>>(
        __int64 a1)
{
  detail::vector_facade<std::unique_ptr<CCachedImageProducer::CCachedRealization>,detail::buffer_impl<std::unique_ptr<CCachedImageProducer::CCachedRealization>,2,1,detail::liberal_expansion_policy>>::clear();
  return detail::expandable_buffer_base<std::unique_ptr<CCachedImageProducer::CCachedRealization>,2>::~expandable_buffer_base<std::unique_ptr<CCachedImageProducer::CCachedRealization>,2>(a1);
}
