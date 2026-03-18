/*
 * XREFs of ?GetBrushParameters@CWindowBackdropBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1802280F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x180033CD4 (-GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@.c)
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x18004D620 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x1800A0750 (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     ??1?$unique_ptr@VCSurfaceDrawListBrush@@U?$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x1800B9E10 (--1-$unique_ptr@VCSurfaceDrawListBrush@@U-$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@QE.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCSurfaceDrawListBrush@@U?$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x1800B9E3C (--1-$out_param_t@V-$unique_ptr@VCSurfaceDrawListBrush@@U-$default_delete@VCSurfaceDrawListBrush@.c)
 *     ?CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@PEAPEAV1@@Z @ 0x1800BA640 (-CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMat.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x18016AC8C (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ??1?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x18016BE30 (--1-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 */

__int64 __fastcall CWindowBackdropBrush::GetBrushParameters(
        CWindowBackdropBrush *this,
        struct CBrushDrawListGenerator *a2,
        __int64 a3)
{
  int WindowBackgroundTreatmentEffectInput; // eax
  int v5; // edi
  CMultiPrimitiveDrawListBrush *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // r8
  __int16 v12; // [rsp+30h] [rbp-69h] BYREF
  char v13; // [rsp+32h] [rbp-67h]
  CSurfaceDrawListBrush *v14; // [rsp+40h] [rbp-59h] BYREF
  CMultiPrimitiveDrawListBrush *v15; // [rsp+48h] [rbp-51h] BYREF
  CSurfaceDrawListBrush **v16; // [rsp+50h] [rbp-49h] BYREF
  __int64 v17; // [rsp+58h] [rbp-41h] BYREF
  char v18; // [rsp+60h] [rbp-39h]
  __int128 v19; // [rsp+70h] [rbp-29h] BYREF
  char v20; // [rsp+80h] [rbp-19h]
  __int128 v21; // [rsp+88h] [rbp-11h]
  char v22; // [rsp+9Dh] [rbp+4h]
  _OWORD v23[4]; // [rsp+A0h] [rbp+7h] BYREF

  CBrushDrawListGenerator::Reset(a2, (__int64)a2, a3);
  v20 = 0;
  v19 = 0LL;
  v23[0] = 0LL;
  CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&v19);
  memset_0(&v19, 0, 0x70uLL);
  WindowBackgroundTreatmentEffectInput = CDrawingContext::GetWindowBackgroundTreatmentEffectInput(
                                           *(const struct CVisualTree ***)a2,
                                           (const struct D2D_SIZE_F *)((char *)a2 + 44),
                                           (struct EffectInput *)&v19);
  if ( WindowBackgroundTreatmentEffectInput < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, WindowBackgroundTreatmentEffectInput, 0x30u, 0LL);
    goto LABEL_8;
  }
  if ( v22 )
  {
    *(_OWORD *)((char *)a2 + 56) = v21;
    goto LABEL_9;
  }
  v14 = 0LL;
  v17 = 0LL;
  v16 = &v14;
  v12 = SamplerMode::k_ClampClampLinear;
  v13 = 1;
  v18 = 1;
  v5 = CSurfaceDrawListBrush::CreateWithTextureTransform((__int64)&v19, &v12, (__int64)v23, &v17);
  wil::details::out_param_t<std::unique_ptr<CSurfaceDrawListBrush>>::~out_param_t<std::unique_ptr<CSurfaceDrawListBrush>>((__int64)&v16);
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, 0x3Au, 0LL);
    std::unique_ptr<CSurfaceDrawListBrush>::~unique_ptr<CSurfaceDrawListBrush>(&v14);
LABEL_8:
    CBrushDrawListGenerator::Reset(a2, v9, v10);
    goto LABEL_9;
  }
  v6 = v14;
  v14 = 0LL;
  v15 = v6;
  CBrushDrawListGenerator::AttachInput((__int64)a2, 0, (__int64 *)&v15);
  std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>(&v15, v7, v8);
  *((_DWORD *)a2 + 13) |= 0x200u;
  std::unique_ptr<CSurfaceDrawListBrush>::~unique_ptr<CSurfaceDrawListBrush>(&v14);
LABEL_9:
  CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&v19);
  return 0LL;
}
