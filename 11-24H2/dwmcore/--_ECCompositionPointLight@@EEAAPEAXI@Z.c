/*
 * XREFs of ??_ECCompositionPointLight@@EEAAPEAXI@Z @ 0x180298040
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x18020AD40 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 *     ??1CCompositionPointLight@@EEAA@XZ @ 0x180297FE0 (--1CCompositionPointLight@@EEAA@XZ.c)
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
