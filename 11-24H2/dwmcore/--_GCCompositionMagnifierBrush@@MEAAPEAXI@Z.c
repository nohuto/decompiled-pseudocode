/*
 * XREFs of ??_GCCompositionMagnifierBrush@@MEAAPEAXI@Z @ 0x180275730
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x18020AD40 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 *     ??1CCompositionMagnifierBrush@@MEAA@XZ @ 0x180295AD8 (--1CCompositionMagnifierBrush@@MEAA@XZ.c)
 */

CCompositionMagnifierBrush *__fastcall CCompositionMagnifierBrush::`scalar deleting destructor'(
        CCompositionMagnifierBrush *this,
        char a2)
{
  CCompositionMagnifierBrush::~CCompositionMagnifierBrush(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease();
    else
      operator delete(this);
  }
  return this;
}
