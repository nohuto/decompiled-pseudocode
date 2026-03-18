/*
 * XREFs of ??_GCAnimationController@@UEAAPEAXI@Z @ 0x180113DE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ??1CAnimationController@@UEAA@XZ @ 0x180113E2C (--1CAnimationController@@UEAA@XZ.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x180217010 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 */

CAnimationController *__fastcall CAnimationController::`scalar deleting destructor'(
        CAnimationController *this,
        char a2)
{
  CAnimationController::~CAnimationController(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease(this, 128LL);
    else
      operator delete(this);
  }
  return this;
}
