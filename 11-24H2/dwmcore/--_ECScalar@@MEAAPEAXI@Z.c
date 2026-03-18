/*
 * XREFs of ??_ECScalar@@MEAAPEAXI@Z @ 0x180275C90
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x18020AD40 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 *     ??1CScalar@@MEAA@XZ @ 0x1802A3430 (--1CScalar@@MEAA@XZ.c)
 */

CScalar *__fastcall CScalar::`vector deleting destructor'(CScalar *this, char a2)
{
  CScalar::~CScalar(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease();
    else
      operator delete(this);
  }
  return this;
}
