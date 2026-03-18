/*
 * XREFs of ??_ECInteractionTrackerPositionAnimation@@UEAAPEAXI@Z @ 0x1802B5520
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ??1CInteractionTrackerPositionAnimation@@UEAA@XZ @ 0x1800F1194 (--1CInteractionTrackerPositionAnimation@@UEAA@XZ.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x180217010 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
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
