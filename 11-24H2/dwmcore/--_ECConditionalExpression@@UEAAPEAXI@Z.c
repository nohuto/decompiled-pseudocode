/*
 * XREFs of ??_ECConditionalExpression@@UEAAPEAXI@Z @ 0x1800E8110
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ??1CConditionalExpression@@UEAA@XZ @ 0x1800E815C (--1CConditionalExpression@@UEAA@XZ.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x18020AD40 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 */

CConditionalExpression *__fastcall CConditionalExpression::`vector deleting destructor'(
        CConditionalExpression *this,
        char a2)
{
  CConditionalExpression::~CConditionalExpression(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease(this, 368LL);
    else
      operator delete(this);
  }
  return this;
}
