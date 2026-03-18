/*
 * XREFs of ??_GCImageLegacyMilBrush@@UEAAPEAXI@Z @ 0x1802071B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ??1?$CImageLegacyMilBrushGeneratedT@VCImageLegacyMilBrush@@VCLegacyMilBrush@@@@MEAA@XZ @ 0x1802071FC (--1-$CImageLegacyMilBrushGeneratedT@VCImageLegacyMilBrush@@VCLegacyMilBrush@@@@MEAA@XZ.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x18020AD40 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 */

CImageLegacyMilBrush *__fastcall CImageLegacyMilBrush::`scalar deleting destructor'(
        CImageLegacyMilBrush *this,
        char a2)
{
  CImageLegacyMilBrushGeneratedT<CImageLegacyMilBrush,CLegacyMilBrush>::~CImageLegacyMilBrushGeneratedT<CImageLegacyMilBrush,CLegacyMilBrush>(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease(this, 264LL);
    else
      operator delete(this);
  }
  return this;
}
