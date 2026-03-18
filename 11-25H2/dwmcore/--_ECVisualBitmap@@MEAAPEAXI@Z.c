/*
 * XREFs of ??_ECVisualBitmap@@MEAAPEAXI@Z @ 0x180280A80
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ??1CVisualBitmap@@MEAA@XZ @ 0x1801EFBF4 (--1CVisualBitmap@@MEAA@XZ.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x180217010 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 */

CVisualBitmap *__fastcall CVisualBitmap::`vector deleting destructor'(CVisualBitmap *this, char a2)
{
  CVisualBitmap::~CVisualBitmap(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease();
    else
      operator delete(this);
  }
  return this;
}
