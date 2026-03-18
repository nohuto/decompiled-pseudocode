/*
 * XREFs of ??1CCachedWindowBackgroundTreatment@@EEAA@XZ @ 0x18021DB1C
 * Callers:
 *     ??_GCCachedWindowBackgroundTreatment@@EEAAPEAXI@Z @ 0x18021DAE0 (--_GCCachedWindowBackgroundTreatment@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800797F0 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VIBitmapResource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800DA5C0 (-InternalRelease@-$CMILRefCountBaseT@VIBitmapResource@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 */

void __fastcall CCachedWindowBackgroundTreatment::~CCachedWindowBackgroundTreatment(
        CCachedWindowBackgroundTreatment *this,
        __int64 a2,
        __int64 a3)
{
  CEffectIntermediateProducer *v4; // rcx
  CCachedVisualImage *v5; // rcx

  v4 = (CEffectIntermediateProducer *)*((_QWORD *)this + 3);
  if ( v4 )
  {
    *((_QWORD *)this + 3) = 0LL;
    CMILRefCountBaseT<IBitmapResource,CMilObjectDeleter>::InternalRelease(v4);
  }
  v5 = (CCachedVisualImage *)*((_QWORD *)this + 2);
  if ( v5 )
  {
    *((_QWORD *)this + 2) = 0LL;
    CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v5, a2, a3);
  }
}
