/*
 * XREFs of ??_ECCompositionPointLight@@EEAAPEAXI@Z @ 0x1802A20C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x180217010 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 *     ??1CCompositionPointLight@@EEAA@XZ @ 0x1802A2060 (--1CCompositionPointLight@@EEAA@XZ.c)
 */

CCompositionPointLight *__fastcall CCompositionPointLight::`vector deleting destructor'(
        CCompositionPointLight *this,
        char a2)
{
  CCompositionPointLight::~CCompositionPointLight(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease();
    else
      operator delete(this);
  }
  return this;
}
