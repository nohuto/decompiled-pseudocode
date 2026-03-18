/*
 * XREFs of ??_GCWindowBackdropBrush@@UEAAPEAXI@Z @ 0x18021CA40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ??1CBrush@@MEAA@XZ @ 0x180133F8C (--1CBrush@@MEAA@XZ.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x180217010 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 */

CWindowBackdropBrush *__fastcall CWindowBackdropBrush::`scalar deleting destructor'(
        CWindowBackdropBrush *this,
        char a2)
{
  CBrush::~CBrush(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease();
    else
      operator delete(this);
  }
  return this;
}
