/*
 * XREFs of ??_ECCaptureController@@EEAAPEAXI@Z @ 0x1801EC5A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ??1CCaptureController@@EEAA@XZ @ 0x1801EC5EC (--1CCaptureController@@EEAA@XZ.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x18020AD40 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 */

CCaptureController *__fastcall CCaptureController::`vector deleting destructor'(CCaptureController *this, char a2)
{
  CCaptureController::~CCaptureController(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease(this, 176LL);
    else
      operator delete(this);
  }
  return this;
}
