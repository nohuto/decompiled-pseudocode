/*
 * XREFs of ??_ECCursorState@@UEAAPEAXI@Z @ 0x1802B1B70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x18020AD40 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 *     ??1CCursorState@@UEAA@XZ @ 0x1802B19D8 (--1CCursorState@@UEAA@XZ.c)
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
