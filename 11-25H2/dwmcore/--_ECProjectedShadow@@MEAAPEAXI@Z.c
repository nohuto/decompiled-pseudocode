/*
 * XREFs of ??_ECProjectedShadow@@MEAAPEAXI@Z @ 0x1801E34B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ??1CProjectedShadow@@MEAA@XZ @ 0x1801E34FC (--1CProjectedShadow@@MEAA@XZ.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x180217010 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 */

CProjectedShadow *__fastcall CProjectedShadow::`vector deleting destructor'(CProjectedShadow *this, char a2)
{
  CProjectedShadow::~CProjectedShadow(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease(this, 392LL);
    else
      operator delete(this);
  }
  return this;
}
