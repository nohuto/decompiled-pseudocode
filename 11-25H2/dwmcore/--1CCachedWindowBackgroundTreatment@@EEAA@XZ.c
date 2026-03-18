/*
 * XREFs of ??1CCachedWindowBackgroundTreatment@@EEAA@XZ @ 0x18022936C
 * Callers:
 *     ??_GCCachedWindowBackgroundTreatment@@EEAAPEAXI@Z @ 0x180229330 (--_GCCachedWindowBackgroundTreatment@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800AB610 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VIBitmapResource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x18010FE80 (-InternalRelease@-$CMILRefCountBaseT@VIBitmapResource@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 */

void __fastcall CCachedWindowBackgroundTreatment::~CCachedWindowBackgroundTreatment(
        CCachedWindowBackgroundTreatment *this)
{
  CEffectIntermediateProducer *v2; // rcx
  CResource *v3; // rcx

  v2 = (CEffectIntermediateProducer *)*((_QWORD *)this + 3);
  if ( v2 )
  {
    *((_QWORD *)this + 3) = 0LL;
    CMILRefCountBaseT<IBitmapResource,CMilObjectDeleter>::InternalRelease(v2);
  }
  v3 = (CResource *)*((_QWORD *)this + 2);
  if ( v3 )
  {
    *((_QWORD *)this + 2) = 0LL;
    CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v3);
  }
}
