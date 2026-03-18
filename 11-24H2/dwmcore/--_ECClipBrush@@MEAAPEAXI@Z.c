/*
 * XREFs of ??_ECClipBrush@@MEAAPEAXI@Z @ 0x180293BA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x18020AD40 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 *     ??1CClipBrush@@MEAA@XZ @ 0x180293B1C (--1CClipBrush@@MEAA@XZ.c)
 */

CClipBrush *__fastcall CClipBrush::`vector deleting destructor'(CClipBrush *this, char a2)
{
  CClipBrush::~CClipBrush(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease();
    else
      operator delete(this);
  }
  return this;
}
