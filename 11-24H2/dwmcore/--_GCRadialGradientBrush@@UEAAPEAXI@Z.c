/*
 * XREFs of ??_GCRadialGradientBrush@@UEAAPEAXI@Z @ 0x18020FEF0
 * Callers:
 *     ??_ECRadialGradientBrush@@WGI@EAAPEAXI@Z @ 0x1802754F0 (--_ECRadialGradientBrush@@WGI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x18020AD40 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 *     ??1CRadialGradientBrush@@UEAA@XZ @ 0x18020FF3C (--1CRadialGradientBrush@@UEAA@XZ.c)
 */

CRadialGradientBrush *__fastcall CRadialGradientBrush::`scalar deleting destructor'(
        CRadialGradientBrush *this,
        char a2)
{
  CRadialGradientBrush::~CRadialGradientBrush(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease();
    else
      operator delete(this);
  }
  return this;
}
