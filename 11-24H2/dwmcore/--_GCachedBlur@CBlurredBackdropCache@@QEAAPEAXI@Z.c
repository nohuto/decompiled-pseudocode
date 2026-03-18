/*
 * XREFs of ??_GCachedBlur@CBlurredBackdropCache@@QEAAPEAXI@Z @ 0x1801E3A44
 * Callers:
 *     ??$destruct_range@UCachedBlur@CBlurredBackdropCache@@@detail@@YAXPEAUCachedBlur@CBlurredBackdropCache@@0@Z @ 0x1801E37BC (--$destruct_range@UCachedBlur@CBlurredBackdropCache@@@detail@@YAXPEAUCachedBlur@CBlurredBackdrop.c)
 *     ?reserve_region@?$vector_facade@UCachedBlur@CBlurredBackdropCache@@V?$buffer_impl@UCachedBlur@CBlurredBackdropCache@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUCachedBlur@CBlurredBackdropCache@@_K0@Z @ 0x1801E37F4 (-reserve_region@-$vector_facade@UCachedBlur@CBlurredBackdropCache@@V-$buffer_impl@UCachedBlur@CB.c)
 *     ?clear_region@?$vector_facade@UCachedBlur@CBlurredBackdropCache@@V?$buffer_impl@UCachedBlur@CBlurredBackdropCache@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801E3950 (-clear_region@-$vector_facade@UCachedBlur@CBlurredBackdropCache@@V-$buffer_impl@UCachedBlur@CBlu.c)
 * Callees:
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x18004D620 (--1CDrawListBitmap@@QEAA@XZ.c)
 */

CBlurredBackdropCache::CachedBlur *__fastcall CBlurredBackdropCache::CachedBlur::`scalar deleting destructor'(
        CBlurredBackdropCache::CachedBlur *this)
{
  CDrawListBitmap::~CDrawListBitmap((CBlurredBackdropCache::CachedBlur *)((char *)this + 16));
  return this;
}
