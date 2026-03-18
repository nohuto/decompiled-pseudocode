/*
 * XREFs of ??_GCLinearGradientLegacyMilBrush@@MEAAPEAXI@Z @ 0x180275AF0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ??1CLinearGradientLegacyMilBrush@@MEAA@XZ @ 0x1801E8CCC (--1CLinearGradientLegacyMilBrush@@MEAA@XZ.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x18020AD40 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 */

CLinearGradientLegacyMilBrush *__fastcall CLinearGradientLegacyMilBrush::`scalar deleting destructor'(
        CLinearGradientLegacyMilBrush *this,
        char a2)
{
  CLinearGradientLegacyMilBrush::~CLinearGradientLegacyMilBrush(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease();
    else
      operator delete(this);
  }
  return this;
}
