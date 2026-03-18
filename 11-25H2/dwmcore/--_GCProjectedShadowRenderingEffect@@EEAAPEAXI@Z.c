/*
 * XREFs of ??_GCProjectedShadowRenderingEffect@@EEAAPEAXI@Z @ 0x1801DAC90
 * Callers:
 *     <none>
 * Callees:
 *     ??1CCommonRenderingEffect@@MEAA@XZ @ 0x1800D0048 (--1CCommonRenderingEffect@@MEAA@XZ.c)
 *     ?Free@?$CThreadLocalObjectCache@VCCommonRenderingEffect@@V1@@@SAXPEAX@Z @ 0x1801DACDC (-Free@-$CThreadLocalObjectCache@VCCommonRenderingEffect@@V1@@@SAXPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x180217010 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 */

CProjectedShadowRenderingEffect *__fastcall CProjectedShadowRenderingEffect::`scalar deleting destructor'(
        CProjectedShadowRenderingEffect *this,
        char a2)
{
  CCommonRenderingEffect::~CCommonRenderingEffect(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease(this, 72LL);
    else
      CThreadLocalObjectCache<CCommonRenderingEffect,CCommonRenderingEffect>::Free(this);
  }
  return this;
}
