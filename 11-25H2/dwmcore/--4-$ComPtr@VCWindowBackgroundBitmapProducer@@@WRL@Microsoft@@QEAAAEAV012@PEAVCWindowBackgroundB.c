/*
 * XREFs of ??4?$ComPtr@VCWindowBackgroundBitmapProducer@@@WRL@Microsoft@@QEAAAEAV012@PEAVCWindowBackgroundBitmapProducer@@@Z @ 0x1801C2678
 * Callers:
 *     ?Update@CCachedWindowBackgroundTreatment@@QEAAJPEAVCWindowBackgroundTreatment@@AEBVCMILMatrix@@AEBU_D3DCOLORVALUE@@@Z @ 0x1801C2568 (-Update@CCachedWindowBackgroundTreatment@@QEAAJPEAVCWindowBackgroundTreatment@@AEBVCMILMatrix@@A.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VIBitmapResource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x18010FE80 (-InternalRelease@-$CMILRefCountBaseT@VIBitmapResource@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 */

CEffectIntermediateProducer **__fastcall Microsoft::WRL::ComPtr<CWindowBackgroundBitmapProducer>::operator=(
        CEffectIntermediateProducer **a1,
        __int64 a2)
{
  CEffectIntermediateProducer *v5; // rcx

  if ( *a1 != (CEffectIntermediateProducer *)a2 )
  {
    if ( a2 )
      CMILRefCountImpl::AddReference((CMILRefCountImpl *)(a2 + 8));
    v5 = *a1;
    *a1 = (CEffectIntermediateProducer *)a2;
    if ( v5 )
      CMILRefCountBaseT<IBitmapResource,CMilObjectDeleter>::InternalRelease(v5);
  }
  return a1;
}
