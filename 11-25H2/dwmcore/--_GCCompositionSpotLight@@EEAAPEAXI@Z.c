/*
 * XREFs of ??_GCCompositionSpotLight@@EEAAPEAXI@Z @ 0x1800C05C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CCompositionSpotLight@@EEAA@XZ @ 0x1800C0640 (--1CCompositionSpotLight@@EEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x180217010 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 */

CCompositionSpotLight *__fastcall CCompositionSpotLight::`scalar deleting destructor'(
        CCompositionSpotLight *this,
        char a2)
{
  CCompositionSpotLight::~CCompositionSpotLight(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease(this, 408LL);
    else
      operator delete(this);
  }
  return this;
}
