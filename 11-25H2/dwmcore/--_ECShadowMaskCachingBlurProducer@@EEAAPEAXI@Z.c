/*
 * XREFs of ??_ECShadowMaskCachingBlurProducer@@EEAAPEAXI@Z @ 0x1802E4650
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 *     ??1CShadowMaskCachingBlurProducer@@EEAA@XZ @ 0x1802E4600 (--1CShadowMaskCachingBlurProducer@@EEAA@XZ.c)
 */

CEffectIntermediateProducer **__fastcall CShadowMaskCachingBlurProducer::`vector deleting destructor'(
        CEffectIntermediateProducer **this,
        char a2)
{
  CShadowMaskCachingBlurProducer::~CShadowMaskCachingBlurProducer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
