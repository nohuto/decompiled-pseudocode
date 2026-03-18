/*
 * XREFs of ?UnregisterBlurCache@CBackdropVisualImage@@QEAAXPEAVCBlurredBackdropCache@@@Z @ 0x18022B324
 * Callers:
 *     ??1CBlurredBackdropCache@@QEAA@XZ @ 0x180071C7C (--1CBlurredBackdropCache@@QEAA@XZ.c)
 * Callees:
 *     ?erase@?$vector_facade@PEAVCBlurredBackdropCache@@V?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@@detail@@QEAA?AV?$basic_iterator@PEAVCBlurredBackdropCache@@@2@V?$basic_iterator@QEAVCBlurredBackdropCache@@@2@@Z @ 0x18003FAA0 (-erase@-$vector_facade@PEAVCBlurredBackdropCache@@V-$pointer_buffer_impl@PEAVCBlurredBackdropCac.c)
 *     ?last@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEBAPEAPEAVCBlurredBackdropCache@@XZ @ 0x180040288 (-last@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEBAPEAPEAVCBlurredBackdropCache.c)
 *     ?first@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEBAPEAPEAVCBlurredBackdropCache@@XZ @ 0x180040318 (-first@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEBAPEAPEAVCBlurredBackdropCach.c)
 */

void __fastcall CBackdropVisualImage::UnregisterBlurCache(CBackdropVisualImage *this, struct CBlurredBackdropCache *a2)
{
  _QWORD *v2; // rsi
  unsigned __int64 v4; // rdi
  struct CBlurredBackdropCache **i; // rbx
  struct CBlurredBackdropCache **v6; // [rsp+40h] [rbp+8h] BYREF
  char v7; // [rsp+50h] [rbp+18h] BYREF

  v2 = (_QWORD *)((char *)this + 2160);
  v4 = detail::pointer_buffer_impl<CBlurredBackdropCache *>::last((_QWORD *)this + 270);
  for ( i = (struct CBlurredBackdropCache **)detail::pointer_buffer_impl<CBlurredBackdropCache *>::first(v2);
        i != (struct CBlurredBackdropCache **)v4 && *i != a2;
        ++i )
  {
    ;
  }
  if ( i != (struct CBlurredBackdropCache **)detail::pointer_buffer_impl<CBlurredBackdropCache *>::last(v2) )
  {
    v6 = i;
    detail::vector_facade<CBlurredBackdropCache *,detail::pointer_buffer_impl<CBlurredBackdropCache *>>::erase(
      (__int64)v2,
      (__int64)&v7,
      (__int64 *)&v6);
  }
}
