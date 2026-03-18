/*
 * XREFs of ??_ECVisualReferenceController@@MEAAPEAXI@Z @ 0x1800966D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CVisualReferenceController@@MEAA@XZ @ 0x18009671C (--1CVisualReferenceController@@MEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x18020AD40 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 */

CVisualReferenceController *__fastcall CVisualReferenceController::`vector deleting destructor'(
        CVisualReferenceController *this,
        char a2)
{
  CVisualReferenceController::~CVisualReferenceController(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease(this, 88LL);
    else
      operator delete(this);
  }
  return this;
}
