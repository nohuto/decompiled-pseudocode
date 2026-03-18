/*
 * XREFs of ??_GCInteractionContextWrapper@@EEAAPEAXI@Z @ 0x1801F2660
 * Callers:
 *     ?InternalRelease@?$CMILRefCountBaseT@UIInteractionContextWrapper@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1801F25C0 (-InternalRelease@-$CMILRefCountBaseT@UIInteractionContextWrapper@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ??1CInteractionContextWrapper@@EEAA@XZ @ 0x1801F26AC (--1CInteractionContextWrapper@@EEAA@XZ.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x18020AD40 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 */

CInteractionContextWrapper *__fastcall CInteractionContextWrapper::`scalar deleting destructor'(
        CInteractionContextWrapper *this,
        char a2)
{
  CInteractionContextWrapper::~CInteractionContextWrapper(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease(this, 632LL);
    else
      operator delete(this);
  }
  return this;
}
