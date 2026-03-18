/*
 * XREFs of ?ComputeShadowColor@CProjectedShadow@@AEBA?AU_D3DCOLORVALUE@@PEAVCDrawingContext@@@Z @ 0x1801D2F10
 * Callers:
 *     ?Draw@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801D2CA0 (-Draw@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?GetEffectiveAlpha@CProjectedShadowCaster@@QEBAMPEBVCVisualTree@@PEA_N@Z @ 0x180167F28 (-GetEffectiveAlpha@CProjectedShadowCaster@@QEBAMPEBVCVisualTree@@PEA_N@Z.c)
 *     ?GetEffectiveMaskBrush@CProjectedShadowCaster@@QEBAPEAVCBrush@@XZ @ 0x180168620 (-GetEffectiveMaskBrush@CProjectedShadowCaster@@QEBAPEAVCBrush@@XZ.c)
 *     ?GetColor@CProjectedShadowCaster@@QEBA?AU_D3DCOLORVALUE@@XZ @ 0x1801D3130 (-GetColor@CProjectedShadowCaster@@QEBA-AU_D3DCOLORVALUE@@XZ.c)
 *     ?GetBlurForBoundary@CProjectedShadow@@AEBAMW4Enum@ApproxBlurStageBoundary@@@Z @ 0x180225920 (-GetBlurForBoundary@CProjectedShadow@@AEBAMW4Enum@ApproxBlurStageBoundary@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct _D3DCOLORVALUE *__fastcall CProjectedShadow::ComputeShadowColor(
        CProjectedShadowCaster **this,
        struct _D3DCOLORVALUE *__return_ptr retstr,
        struct CDrawingContext *a3)
{
  __int64 v5; // r8
  float v6; // xmm1_4
  int v7; // eax
  float *EffectiveMaskBrush; // rdi
  float v9; // xmm0_4
  double BlurForBoundary; // xmm0_8

  CProjectedShadowCaster::GetColor(this[10], retstr);
  v6 = (float)(CProjectedShadowCaster::GetEffectiveAlpha(
                 this[10],
                 *(const struct CVisualTree **)(v5 + 7944),
                 (bool *)v5)
             * *((float *)this + 25))
     * retstr->a;
  retstr->a = v6;
  v7 = *((_DWORD *)this + 63);
  if ( v7 != 1 )
  {
    if ( v7 != 5 )
      return retstr;
    BlurForBoundary = CProjectedShadow::GetBlurForBoundary(this, 3LL);
    v9 = (float)(*(float *)&BlurForBoundary / *((float *)this + 24)) * v6;
    goto LABEL_4;
  }
  EffectiveMaskBrush = (float *)CProjectedShadowCaster::GetEffectiveMaskBrush(this[10]);
  if ( (*(unsigned __int8 (__fastcall **)(float *, __int64))(*(_QWORD *)EffectiveMaskBrush + 64LL))(
         EffectiveMaskBrush,
         22LL) )
  {
    v9 = EffectiveMaskBrush[29] * retstr->a;
LABEL_4:
    retstr->a = v9;
  }
  return retstr;
}
