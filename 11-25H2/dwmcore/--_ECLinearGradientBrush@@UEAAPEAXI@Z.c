/*
 * XREFs of ??_ECLinearGradientBrush@@UEAAPEAXI@Z @ 0x18019F6B0
 * Callers:
 *     ??_ECLinearGradientBrush@@WGI@EAAPEAXI@Z @ 0x1802A8D00 (--_ECLinearGradientBrush@@WGI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ??1CGradientBrush@@MEAA@XZ @ 0x18019F6FC (--1CGradientBrush@@MEAA@XZ.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x180217010 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 */

CLinearGradientBrush *__fastcall CLinearGradientBrush::`vector deleting destructor'(
        CLinearGradientBrush *this,
        char a2)
{
  CGradientBrush::~CGradientBrush(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease(this, 256LL);
    else
      operator delete(this);
  }
  return this;
}
