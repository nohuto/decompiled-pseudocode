/*
 * XREFs of ??_ECVisualGroup@@UEAAPEAXI@Z @ 0x180265660
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x180217010 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 *     ??1CVisualGroup@@UEAA@XZ @ 0x180265428 (--1CVisualGroup@@UEAA@XZ.c)
 */

CVisualGroup *__fastcall CVisualGroup::`vector deleting destructor'(CVisualGroup *this, char a2)
{
  CVisualGroup::~CVisualGroup(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease();
    else
      operator delete(this);
  }
  return this;
}
