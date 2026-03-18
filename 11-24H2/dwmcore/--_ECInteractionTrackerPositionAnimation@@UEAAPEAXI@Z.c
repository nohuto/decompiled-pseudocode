/*
 * XREFs of ??_ECInteractionTrackerPositionAnimation@@UEAAPEAXI@Z @ 0x1802AB930
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ??1CInteractionTrackerPositionAnimation@@UEAA@XZ @ 0x1801EB710 (--1CInteractionTrackerPositionAnimation@@UEAA@XZ.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x18020AD40 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 */

CInteractionTrackerPositionAnimation *__fastcall CInteractionTrackerPositionAnimation::`vector deleting destructor'(
        CInteractionTrackerPositionAnimation *this,
        char a2)
{
  CInteractionTrackerPositionAnimation::~CInteractionTrackerPositionAnimation(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease();
    else
      operator delete(this);
  }
  return this;
}
