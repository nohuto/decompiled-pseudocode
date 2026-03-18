/*
 * XREFs of ??_ECInteractionRoot@@EEAAPEAXI@Z @ 0x18021C500
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x18020AD40 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 *     ??1CInteractionRoot@@EEAA@XZ @ 0x18021C54C (--1CInteractionRoot@@EEAA@XZ.c)
 */

CInteractionRoot *__fastcall CInteractionRoot::`vector deleting destructor'(CInteractionRoot *this, char a2)
{
  CInteractionRoot::~CInteractionRoot(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease();
    else
      operator delete(this);
  }
  return this;
}
