/*
 * XREFs of ?UpdateCachedBlur@CBlurredBackdropCache@@QEAAXPEAVCBackdropVisualImage@@AEBVRenderTargetInfo@@AEBUEffectInput@@@Z @ 0x18003FB58
 * Callers:
 *     ?ExecuteBlur@CRenderingTechnique@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@AEBUD2D_VECTOR_2F@@PEBUD2D_SIZE_F@@PEAU3@@Z @ 0x1800DDD70 (-ExecuteBlur@CRenderingTechnique@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@AEBUD2D_VECTOR_2F@@.c)
 * Callees:
 *     ?reserve_region@?$vector_facade@UCachedBlur@CBlurredBackdropCache@@V?$buffer_impl@UCachedBlur@CBlurredBackdropCache@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUCachedBlur@CBlurredBackdropCache@@_K0@Z @ 0x18003FDE4 (-reserve_region@-$vector_facade@UCachedBlur@CBlurredBackdropCache@@V-$buffer_impl@UCachedBlur@CB.c)
 *     ?RegisterBlurCache@CBackdropVisualImage@@QEAAXPEAVCBlurredBackdropCache@@@Z @ 0x1800401B0 (-RegisterBlurCache@CBackdropVisualImage@@QEAAXPEAVCBlurredBackdropCache@@@Z.c)
 *     ??4EffectInput@@QEAAAEAU0@AEBU0@@Z @ 0x18007D7F8 (--4EffectInput@@QEAAAEAU0@AEBU0@@Z.c)
 *     ??$construct@UEffectInput@@U1@@detail@@YAPEAUEffectInput@@PEAU1@$$QEAU1@@Z @ 0x18007E01C (--$construct@UEffectInput@@U1@@detail@@YAPEAUEffectInput@@PEAU1@$$QEAU1@@Z.c)
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x1800D0080 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ?IsUsableOnTarget@CBlurredBackdropCache@@CA_NAEBVCDrawListBitmap@@AEBVRenderTargetInfo@@_N@Z @ 0x1802358EC (-IsUsableOnTarget@CBlurredBackdropCache@@CA_NAEBVCDrawListBitmap@@AEBVRenderTargetInfo@@_N@Z.c)
 */

void __fastcall CBlurredBackdropCache::UpdateCachedBlur(
        struct CBackdropVisualImage ***this,
        struct CBackdropVisualImage *a2,
        const struct RenderTargetInfo *a3,
        const struct EffectInput *a4)
{
  struct CBackdropVisualImage **v5; // rbx
  struct CBackdropVisualImage **v9; // rbp
  char v10; // r13
  const struct CDrawListBitmap *v11; // rdi
  CDrawListBitmap *v12; // rdi
  CDrawListBitmap *v13; // rbx
  _QWORD *v14; // rax
  _BYTE v15[112]; // [rsp+20h] [rbp-118h] BYREF
  _BYTE v16[168]; // [rsp+90h] [rbp-A8h] BYREF

  v5 = *this;
  v9 = 0LL;
  v10 = *((_BYTE *)g_pComposition + 6490);
  v11 = (const struct CDrawListBitmap *)(*this + 2);
  while ( v5 != this[1] )
  {
    if ( a2 == *v5 && CBlurredBackdropCache::IsUsableOnTarget(v11, a3, v10) )
    {
      v9 = v5;
      EffectInput::operator=(v11, a4);
    }
    v5 += 16;
    v11 = (const struct CDrawListBitmap *)((char *)v11 + 128);
  }
  if ( !v9 )
  {
    v12 = (CDrawListBitmap *)detail::construct<EffectInput,EffectInput>(v15, a4);
    v13 = (CDrawListBitmap *)detail::construct<EffectInput,EffectInput>(v16, v12);
    v14 = (_QWORD *)detail::vector_facade<CBlurredBackdropCache::CachedBlur,detail::buffer_impl<CBlurredBackdropCache::CachedBlur,2,1,detail::liberal_expansion_policy>>::reserve_region(
                      this,
                      ((char *)this[1] - (char *)*this) >> 7);
    v14[1] = 0LL;
    *v14 = a2;
    detail::construct<EffectInput,EffectInput>(v14 + 2, v13);
    CDrawListBitmap::~CDrawListBitmap(v13);
    CDrawListBitmap::~CDrawListBitmap(v12);
    CBackdropVisualImage::RegisterBlurCache(a2, (struct CBlurredBackdropCache *)this);
  }
}
