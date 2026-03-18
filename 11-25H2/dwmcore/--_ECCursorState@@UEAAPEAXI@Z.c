/*
 * XREFs of ??_ECCursorState@@UEAAPEAXI@Z @ 0x1802BB700
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x180217010 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 *     ??1CCursorState@@UEAA@XZ @ 0x1802BB4EC (--1CCursorState@@UEAA@XZ.c)
 */

CCursorState *__fastcall CCursorState::`vector deleting destructor'(CCursorState *this, char a2)
{
  CCursorState::~CCursorState(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease();
    else
      operator delete(this);
  }
  return this;
}
