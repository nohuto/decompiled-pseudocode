/*
 * XREFs of ??_ECMaskBrush@@MEAAPEAXI@Z @ 0x180132730
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ??1CMaskBrush@@MEAA@XZ @ 0x18013277C (--1CMaskBrush@@MEAA@XZ.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x18020AD40 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 */

CMaskBrush *__fastcall CMaskBrush::`vector deleting destructor'(CMaskBrush *this, char a2)
{
  CMaskBrush::~CMaskBrush(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease(this, 128LL);
    else
      operator delete(this);
  }
  return this;
}
