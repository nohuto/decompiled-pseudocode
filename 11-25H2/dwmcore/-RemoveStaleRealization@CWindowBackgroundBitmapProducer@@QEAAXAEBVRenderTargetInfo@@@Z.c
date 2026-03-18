/*
 * XREFs of ?RemoveStaleRealization@CWindowBackgroundBitmapProducer@@QEAAXAEBVRenderTargetInfo@@@Z @ 0x1801DBA10
 * Callers:
 *     ?GenerateBitmapForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z @ 0x1801DB480 (-GenerateBitmapForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?clear_region@?$vector_facade@V?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@V?$buffer_impl@V?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800B3090 (-clear_region@-$vector_facade@V-$unique_ptr@VCCachedRealization@CCachedImageProducer@@U-$default.c)
 *     ?FindRealizationInternal@CCachedImageProducer@@IEBAPEAVCCachedRealization@1@AEBVRenderTargetInfo@@@Z @ 0x1801DBA64 (-FindRealizationInternal@CCachedImageProducer@@IEBAPEAVCCachedRealization@1@AEBVRenderTargetInfo.c)
 */

void __fastcall CWindowBackgroundBitmapProducer::RemoveStaleRealization(
        struct CCachedImageProducer::CCachedRealization ***this,
        const struct RenderTargetInfo *a2)
{
  struct CCachedImageProducer::CCachedRealization *RealizationInternal; // rax
  struct CCachedImageProducer::CCachedRealization **i; // rdx

  RealizationInternal = CCachedImageProducer::FindRealizationInternal((CCachedImageProducer *)this, a2);
  if ( RealizationInternal && !*((_QWORD *)RealizationInternal + 1) )
  {
    for ( i = this[4]; i != this[5] && RealizationInternal != *i; ++i )
      ;
    detail::vector_facade<std::unique_ptr<CCachedImageProducer::CCachedRealization>,detail::buffer_impl<std::unique_ptr<CCachedImageProducer::CCachedRealization>,2,1,detail::liberal_expansion_policy>>::clear_region(
      (__int64 *)this + 4,
      i - this[4],
      1LL);
  }
}
