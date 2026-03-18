/*
 * XREFs of ??_ECCompositionDistantLight@@EEAAPEAXI@Z @ 0x180295080
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x18020AD40 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 *     ??1CCompositionDistantLight@@EEAA@XZ @ 0x18029501C (--1CCompositionDistantLight@@EEAA@XZ.c)
 */

CCompositionDistantLight *__fastcall CCompositionDistantLight::`vector deleting destructor'(
        CCompositionDistantLight *this,
        char a2)
{
  CCompositionDistantLight::~CCompositionDistantLight(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease();
    else
      operator delete(this);
  }
  return this;
}
