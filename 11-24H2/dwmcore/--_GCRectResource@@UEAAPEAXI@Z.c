/*
 * XREFs of ??_GCRectResource@@UEAAPEAXI@Z @ 0x1802157B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x18020AD40 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 *     ??1?$TValueResource@UD2D_MATRIX_3X2_F@@UtagMILCMD_MATRIXRESOURCE@@$0GM@@@UEAA@XZ @ 0x180275074 (--1-$TValueResource@UD2D_MATRIX_3X2_F@@UtagMILCMD_MATRIXRESOURCE@@$0GM@@@UEAA@XZ.c)
 */

CRectResource *__fastcall CRectResource::`scalar deleting destructor'(CRectResource *this, char a2)
{
  TValueResource<D2D_MATRIX_3X2_F,tagMILCMD_MATRIXRESOURCE,108>::~TValueResource<D2D_MATRIX_3X2_F,tagMILCMD_MATRIXRESOURCE,108>();
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease();
    else
      operator delete(this);
  }
  return this;
}
