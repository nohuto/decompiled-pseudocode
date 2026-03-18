/*
 * XREFs of ?GetBrushParameters@CWindowBackdropBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180233A30
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x180023C04 (-GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x1800CE780 (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x1800D0080 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x1800DEC4C (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ??1?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x1800E0800 (--1-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@PEAPEAV1@@Z @ 0x18019C4F0 (-CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMat.c)
 *     ??1?$unique_ptr@VCSurfaceDrawListBrush@@U?$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x18019D07C (--1-$unique_ptr@VCSurfaceDrawListBrush@@U-$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@QE.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCSurfaceDrawListBrush@@U?$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x18019D0A8 (--1-$out_param_t@V-$unique_ptr@VCSurfaceDrawListBrush@@U-$default_delete@VCSurfaceDrawListBrush@.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 */

__int64 __fastcall CWindowBackdropBrush::GetBrushParameters(
        CWindowBackdropBrush *this,
        struct CBrushDrawListGenerator *a2)
{
  int WindowBackgroundTreatmentEffectInput; // eax
  int v4; // edi
  CMultiPrimitiveDrawListBrush *v5; // rax
  __int16 v7; // [rsp+30h] [rbp-69h] BYREF
  char v8; // [rsp+32h] [rbp-67h]
  CSurfaceDrawListBrush *v9; // [rsp+40h] [rbp-59h] BYREF
  CMultiPrimitiveDrawListBrush *v10; // [rsp+48h] [rbp-51h] BYREF
  CSurfaceDrawListBrush **v11; // [rsp+50h] [rbp-49h] BYREF
  __int64 v12; // [rsp+58h] [rbp-41h] BYREF
  char v13; // [rsp+60h] [rbp-39h]
  __int128 v14; // [rsp+70h] [rbp-29h] BYREF
  char v15; // [rsp+80h] [rbp-19h]
  __int128 v16; // [rsp+88h] [rbp-11h]
  char v17; // [rsp+9Dh] [rbp+4h]
  _OWORD v18[4]; // [rsp+A0h] [rbp+7h] BYREF

  CBrushDrawListGenerator::Reset(a2);
  v15 = 0;
  v14 = 0LL;
  v18[0] = 0LL;
  CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&v14);
  memset_0(&v14, 0, 0x70uLL);
  WindowBackgroundTreatmentEffectInput = CDrawingContext::GetWindowBackgroundTreatmentEffectInput(
                                           *(const struct CVisualTree ***)a2,
                                           (const struct D2D_SIZE_F *)((char *)a2 + 44),
                                           (struct EffectInput *)&v14);
  if ( WindowBackgroundTreatmentEffectInput < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, WindowBackgroundTreatmentEffectInput, 0x30u, 0LL);
    goto LABEL_8;
  }
  if ( v17 )
  {
    *(_OWORD *)((char *)a2 + 56) = v16;
    goto LABEL_9;
  }
  v9 = 0LL;
  v12 = 0LL;
  v11 = &v9;
  v7 = SamplerMode::k_ClampClampLinear;
  v8 = 1;
  v13 = 1;
  v4 = CSurfaceDrawListBrush::CreateWithTextureTransform((__int64)&v14, &v7, v18, &v12);
  wil::details::out_param_t<std::unique_ptr<CSurfaceDrawListBrush>>::~out_param_t<std::unique_ptr<CSurfaceDrawListBrush>>((__int64)&v11);
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0x3Au, 0LL);
    std::unique_ptr<CSurfaceDrawListBrush>::~unique_ptr<CSurfaceDrawListBrush>(&v9);
LABEL_8:
    CBrushDrawListGenerator::Reset(a2);
    goto LABEL_9;
  }
  v5 = v9;
  v9 = 0LL;
  v10 = v5;
  CBrushDrawListGenerator::AttachInput((__int64)a2, 0, (__int64 *)&v10);
  std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>(&v10);
  *((_DWORD *)a2 + 13) |= 0x200u;
  std::unique_ptr<CSurfaceDrawListBrush>::~unique_ptr<CSurfaceDrawListBrush>(&v9);
LABEL_9:
  CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&v14);
  return 0LL;
}
