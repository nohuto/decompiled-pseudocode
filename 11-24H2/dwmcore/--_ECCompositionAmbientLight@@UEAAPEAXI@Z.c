/*
 * XREFs of ??_ECCompositionAmbientLight@@UEAAPEAXI@Z @ 0x1801EE3E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ??1CCompositionLight@@MEAA@XZ @ 0x1801EE42C (--1CCompositionLight@@MEAA@XZ.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x18020AD40 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 */

CCompositionAmbientLight *__fastcall CCompositionAmbientLight::`vector deleting destructor'(
        CCompositionAmbientLight *this,
        char a2)
{
  CCompositionLight::~CCompositionLight(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease(this, 280LL);
    else
      operator delete(this);
  }
  return this;
}
