/*
 * XREFs of ??$Delete@VIBitmapResource@@@CMilObjectDeleter@@SAXPEAV?$CMILRefCountBaseT@VIBitmapResource@@VCMilObjectDeleter@@@@@Z @ 0x1800FDB88
 * Callers:
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x18004D620 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18004DC30 (--1-$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?IsReadyToDraw@CBitmapRenderStrategy@@UEBA_NPEBVCSurfaceBrush@@PEAVCDrawingContext@@PEA_N@Z @ 0x18004DFD0 (-IsReadyToDraw@CBitmapRenderStrategy@@UEBA_NPEBVCSurfaceBrush@@PEAVCDrawingContext@@PEA_N@Z.c)
 *     ?FillShapeWithBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBVCShape@@AEBVMILMatrix3x2@@_N@Z @ 0x1800BB170 (-FillShapeWithBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBVCShape@@AEBVMI.c)
 *     _lambda_6f49ef1c5e266dfff6ad3ca7d4dec8df_::_lambda_invoker_cdecl_ @ 0x18016CC00 (_lambda_6f49ef1c5e266dfff6ad3ca7d4dec8df_--_lambda_invoker_cdecl_.c)
 *     _lambda_6f49ef1c5e266dfff6ad3ca7d4dec8df_::operator() @ 0x18016CFB0 (_lambda_6f49ef1c5e266dfff6ad3ca7d4dec8df_--operator().c)
 * Callees:
 *     ??_ECEffectIntermediateProducer@@EEAAPEAXI@Z @ 0x1800FD180 (--_ECEffectIntermediateProducer@@EEAAPEAXI@Z.c)
 */

void __fastcall CMilObjectDeleter::Delete<IBitmapResource>(CEffectIntermediateProducer *a1)
{
  CEffectIntermediateProducer *(__fastcall *v1)(CEffectIntermediateProducer *, char); // rax

  if ( a1 )
  {
    v1 = *(CEffectIntermediateProducer *(__fastcall **)(CEffectIntermediateProducer *, char))(*(_QWORD *)a1 + 72LL);
    if ( v1 == CEffectIntermediateProducer::`vector deleting destructor' )
      CEffectIntermediateProducer::`vector deleting destructor'(a1, 1);
    else
      v1(a1, 1);
  }
}
