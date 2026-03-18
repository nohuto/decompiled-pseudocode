/*
 * XREFs of ??$Delete@VIBitmapResource@@@CMilObjectDeleter@@SAXPEAV?$CMILRefCountBaseT@VIBitmapResource@@VCMilObjectDeleter@@@@@Z @ 0x18020658C
 * Callers:
 *     _lambda_6f49ef1c5e266dfff6ad3ca7d4dec8df_::_lambda_invoker_cdecl_ @ 0x1800492C0 (_lambda_6f49ef1c5e266dfff6ad3ca7d4dec8df_--_lambda_invoker_cdecl_.c)
 *     _lambda_6f49ef1c5e266dfff6ad3ca7d4dec8df_::operator() @ 0x180049670 (_lambda_6f49ef1c5e266dfff6ad3ca7d4dec8df_--operator().c)
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x1800D0080 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800D0690 (--1-$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?IsReadyToDraw@CBitmapRenderStrategy@@UEBA_NPEBVCSurfaceBrush@@PEAVCDrawingContext@@PEA_N@Z @ 0x1800D0A30 (-IsReadyToDraw@CBitmapRenderStrategy@@UEBA_NPEBVCSurfaceBrush@@PEAVCDrawingContext@@PEA_N@Z.c)
 *     ?FillShapeWithBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBVCShape@@AEBVMILMatrix3x2@@_N@Z @ 0x1800E1440 (-FillShapeWithBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBVCShape@@AEBVMI.c)
 * Callees:
 *     ??_ECEffectIntermediateProducer@@EEAAPEAXI@Z @ 0x1800DD080 (--_ECEffectIntermediateProducer@@EEAAPEAXI@Z.c)
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
