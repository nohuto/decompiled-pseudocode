/*
 * XREFs of ??_GCProjectedShadowRenderingEffect@@EEAAPEAXI@Z @ 0x1801CD5C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CCommonRenderingEffect@@MEAA@XZ @ 0x18004D5E8 (--1CCommonRenderingEffect@@MEAA@XZ.c)
 *     ?Free@?$CThreadLocalObjectCache@VCCommonRenderingEffect@@V1@@@SAXPEAX@Z @ 0x1801CD60C (-Free@-$CThreadLocalObjectCache@VCCommonRenderingEffect@@V1@@@SAXPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x18020AD40 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
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
