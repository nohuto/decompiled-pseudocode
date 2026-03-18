/*
 * XREFs of ??1CSurfaceDrawListBrush@@UEAA@XZ @ 0x1800BA42C
 * Callers:
 *     ?GetBrushParametersWorker@CBitmapResourceRenderStrategy@@KAJPEBVCSurfaceBrush@@PEAVIBitmapResource@@PEAULayoutData@CContent@@W4D2D1_INTERPOLATION_MODE@@PEAVCBrushDrawListGenerator@@@Z @ 0x18004BDEC (-GetBrushParametersWorker@CBitmapResourceRenderStrategy@@KAJPEBVCSurfaceBrush@@PEAVIBitmapResour.c)
 *     ?GetBrushParameters@CBitmapRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGenerator@@@Z @ 0x18004C190 (-GetBrushParameters@CBitmapRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGenerator@@.c)
 *     ??R?$default_delete@VCSurfaceDrawListBrush@@@std@@QEBAXPEAVCSurfaceDrawListBrush@@@Z @ 0x1800B9DE4 (--R-$default_delete@VCSurfaceDrawListBrush@@@std@@QEBAXPEAVCSurfaceDrawListBrush@@@Z.c)
 *     ??1?$unique_ptr@VCSurfaceDrawListBrush@@U?$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x1800B9E10 (--1-$unique_ptr@VCSurfaceDrawListBrush@@U-$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@QE.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCSurfaceDrawListBrush@@U?$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x1800B9E3C (--1-$out_param_t@V-$unique_ptr@VCSurfaceDrawListBrush@@U-$default_delete@VCSurfaceDrawListBrush@.c)
 *     ?FillRectanglesWithDrawListBitmap@CDrawingContext@@AEAAJAEBVCDrawListBitmap@@AEBV?$span@$$CBUD2D_RECT_F@@$0?0@gsl@@AEBVMILMatrix3x2@@@Z @ 0x1800BA8F0 (-FillRectanglesWithDrawListBitmap@CDrawingContext@@AEAAJAEBVCDrawListBitmap@@AEBV-$span@$$CBUD2D.c)
 *     ?FillShapeWithBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBVCShape@@AEBVMILMatrix3x2@@_N@Z @ 0x1800BB170 (-FillShapeWithBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBVCShape@@AEBVMI.c)
 *     ?FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBVCMILMatrix@@AEBVCShape@@_NH@Z @ 0x1800BC1A0 (-FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBVCMILMatrix@@AEBVCShape@@_NH@.c)
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@VIBitmapResource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800DA5C0 (-InternalRelease@-$CMILRefCountBaseT@VIBitmapResource@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CSurfaceDrawListBrush::~CSurfaceDrawListBrush(CSurfaceDrawListBrush *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  CEffectIntermediateProducer *v5; // rcx
  void (*v6)(void); // rax

  v4 = *((_QWORD *)this + 8);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = (CEffectIntermediateProducer *)*((_QWORD *)this + 7);
  if ( v5 )
  {
    v6 = *(void (**)(void))(*(_QWORD *)v5 + 16LL);
    if ( (char *)v6 == (char *)CMILRefCountBaseT<IBitmapResource,CMilObjectDeleter>::InternalRelease )
    {
      CMILRefCountBaseT<IBitmapResource,CMilObjectDeleter>::InternalRelease(v5);
    }
    else if ( (char *)v6 == (char *)CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
    {
      CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(
        v5,
        (__int64)CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease,
        a3);
    }
    else
    {
      v6();
    }
  }
}
