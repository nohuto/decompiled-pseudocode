/*
 * XREFs of ??_ECManipulation@@UEAAPEAXI@Z @ 0x1800E5F10
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ??1CManipulation@@UEAA@XZ @ 0x1800E6100 (--1CManipulation@@UEAA@XZ.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x18020AD40 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 */

CManipulation *__fastcall CManipulation::`vector deleting destructor'(CManipulation *this, char a2)
{
  CManipulation::~CManipulation(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease(this, 736LL);
    else
      operator delete(this);
  }
  return this;
}
