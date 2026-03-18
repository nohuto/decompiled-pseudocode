/*
 * XREFs of ??_ECShadowMaskCachingBlurProducer@@EEAAPEAXI@Z @ 0x1802DB3B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 *     ??1CShadowMaskCachingBlurProducer@@EEAA@XZ @ 0x1802DB360 (--1CShadowMaskCachingBlurProducer@@EEAA@XZ.c)
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
