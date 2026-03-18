/*
 * XREFs of ??_ECCompositionDistantLight@@EEAAPEAXI@Z @ 0x1802A09D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x180217010 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 *     ??1CCompositionDistantLight@@EEAA@XZ @ 0x1802A096C (--1CCompositionDistantLight@@EEAA@XZ.c)
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
