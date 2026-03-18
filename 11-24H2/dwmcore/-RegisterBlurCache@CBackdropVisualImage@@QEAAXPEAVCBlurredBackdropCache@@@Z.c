/*
 * XREFs of ?RegisterBlurCache@CBackdropVisualImage@@QEAAXPEAVCBlurredBackdropCache@@@Z @ 0x1801D261C
 * Callers:
 *     ?UpdateCachedBlur@CBlurredBackdropCache@@QEAAXPEAVCBackdropVisualImage@@PEBXAEBUEffectInput@@@Z @ 0x180243F24 (-UpdateCachedBlur@CBlurredBackdropCache@@QEAAXPEAVCBackdropVisualImage@@PEBXAEBUEffectInput@@@Z.c)
 * Callees:
 *     ?last@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEBAPEAPEAVCBlurredBackdropCache@@XZ @ 0x1801D26F4 (-last@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEBAPEAPEAVCBlurredBackdropCache.c)
 *     ?first@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEBAPEAPEAVCBlurredBackdropCache@@XZ @ 0x1801D2784 (-first@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEBAPEAPEAVCBlurredBackdropCach.c)
 *     ?reserve_region@?$vector_facade@PEAVCBlurredBackdropCache@@V?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@@detail@@IEAAPEAPEAVCBlurredBackdropCache@@_K0@Z @ 0x1801D27D0 (-reserve_region@-$vector_facade@PEAVCBlurredBackdropCache@@V-$pointer_buffer_impl@PEAVCBlurredBa.c)
 */

void __fastcall CBackdropVisualImage::RegisterBlurCache(CBackdropVisualImage *this, struct CBlurredBackdropCache *a2)
{
  char *v2; // rsi
  __int64 v4; // rdi
  struct CBlurredBackdropCache **i; // rbx
  __int64 v6; // rbx
  __int64 v7; // rax

  v2 = (char *)this + 2160;
  v4 = detail::pointer_buffer_impl<CBlurredBackdropCache *>::last((char *)this + 2160);
  for ( i = (struct CBlurredBackdropCache **)detail::pointer_buffer_impl<CBlurredBackdropCache *>::first(v2);
        i != (struct CBlurredBackdropCache **)v4 && *i != a2;
        ++i )
  {
    ;
  }
  if ( i == (struct CBlurredBackdropCache **)detail::pointer_buffer_impl<CBlurredBackdropCache *>::last(v2) )
  {
    v6 = detail::pointer_buffer_impl<CBlurredBackdropCache *>::last(v2);
    v7 = detail::pointer_buffer_impl<CBlurredBackdropCache *>::first(v2);
    *(_QWORD *)detail::vector_facade<CBlurredBackdropCache *,detail::pointer_buffer_impl<CBlurredBackdropCache *>>::reserve_region(
                 v2,
                 (v6 - v7) >> 3) = a2;
    detail::pointer_buffer_impl<CBlurredBackdropCache *>::first(v2);
  }
}
