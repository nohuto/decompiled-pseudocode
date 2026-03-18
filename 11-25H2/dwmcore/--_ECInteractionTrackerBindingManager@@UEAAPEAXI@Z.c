/*
 * XREFs of ??_ECInteractionTrackerBindingManager@@UEAAPEAXI@Z @ 0x18023A5C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x180217010 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 *     ??1CInteractionTrackerBindingManager@@UEAA@XZ @ 0x180254150 (--1CInteractionTrackerBindingManager@@UEAA@XZ.c)
 */

CInteractionTrackerBindingManager *__fastcall CInteractionTrackerBindingManager::`vector deleting destructor'(
        CInteractionTrackerBindingManager *this,
        char a2)
{
  CInteractionTrackerBindingManager::~CInteractionTrackerBindingManager(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease();
    else
      operator delete(this);
  }
  return this;
}
