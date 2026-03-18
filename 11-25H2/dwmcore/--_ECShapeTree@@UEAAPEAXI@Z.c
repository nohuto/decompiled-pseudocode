/*
 * XREFs of ??_ECShapeTree@@UEAAPEAXI@Z @ 0x1800782E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CContainerVectorShape@@MEAA@XZ @ 0x1800792AC (--1CContainerVectorShape@@MEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x180217010 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 */

CShapeTree *__fastcall CShapeTree::`vector deleting destructor'(CShapeTree *this, char a2)
{
  CContainerVectorShape::~CContainerVectorShape(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease(this, 128LL);
    else
      operator delete(this);
  }
  return this;
}
