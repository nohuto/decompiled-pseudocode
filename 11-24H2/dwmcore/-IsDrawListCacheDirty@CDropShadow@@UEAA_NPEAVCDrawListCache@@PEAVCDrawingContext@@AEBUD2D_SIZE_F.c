/*
 * XREFs of ?IsDrawListCacheDirty@CDropShadow@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x180299D40
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ @ 0x18001BF90 (-GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ.c)
 *     ?GetEffectiveShadowIntermediates@CDropShadow@@AEBAPEAVShadowIntermediates@1@PEAVCVisual@@@Z @ 0x18014F544 (-GetEffectiveShadowIntermediates@CDropShadow@@AEBAPEAVShadowIntermediates@1@PEAVCVisual@@@Z.c)
 *     ?IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18028CCC0 (-IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@.c)
 */

char __fastcall CDropShadow::IsDrawListCacheDirty(
        CDropShadow *this,
        __m128 *a2,
        struct CDrawingContext *a3,
        const struct D2D_SIZE_F *a4)
{
  struct CVisual *CurrentVisual; // rax
  unsigned __int64 v9; // rdx

  CurrentVisual = CDrawingContext::GetCurrentVisual(a3);
  v9 = *(_QWORD *)CDropShadow::GetEffectiveShadowIntermediates(this, CurrentVisual);
  if ( v9 && v9 <= a2[1].m128_u64[1] )
    return CContent::IsDrawListCacheDirty(this, a2, a3, a4);
  else
    return 1;
}
