/*
 * XREFs of ??_ECGlobalManipulationManager@@EEAAPEAXI@Z @ 0x1802B6C10
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x18020AD40 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 *     ??1CGlobalManipulationManager@@EEAA@XZ @ 0x1802B6A38 (--1CGlobalManipulationManager@@EEAA@XZ.c)
 */

CGlobalManipulationManager *__fastcall CGlobalManipulationManager::`vector deleting destructor'(
        CGlobalManipulationManager *this,
        char a2)
{
  CGlobalManipulationManager::~CGlobalManipulationManager(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease();
    else
      operator delete(this);
  }
  return this;
}
