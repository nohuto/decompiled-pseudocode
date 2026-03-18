/*
 * XREFs of ?erase@?$vector_facade@PEAVCBlurredBackdropCache@@V?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@@detail@@QEAA?AV?$basic_iterator@PEAVCBlurredBackdropCache@@@2@V?$basic_iterator@QEAVCBlurredBackdropCache@@@2@@Z @ 0x18003FAA0
 * Callers:
 *     ?InvalidateBlurCache@CBackdropVisualImage@@AEAAXPEBVCCachedTarget@CCachedVisualImage@@@Z @ 0x18003F7FC (-InvalidateBlurCache@CBackdropVisualImage@@AEAAXPEBVCCachedTarget@CCachedVisualImage@@@Z.c)
 *     ?UnregisterBlurCache@CBackdropVisualImage@@QEAAXPEAVCBlurredBackdropCache@@@Z @ 0x18022B324 (-UnregisterBlurCache@CBackdropVisualImage@@QEAAXPEAVCBlurredBackdropCache@@@Z.c)
 * Callees:
 *     ?erase_unchecked@?$vector_facade@PEAVCBlurredBackdropCache@@V?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@@detail@@IEAA?AV?$basic_iterator@PEAVCBlurredBackdropCache@@@2@V?$basic_iterator@QEAVCBlurredBackdropCache@@@2@0@Z @ 0x18003FAD8 (-erase_unchecked@-$vector_facade@PEAVCBlurredBackdropCache@@V-$pointer_buffer_impl@PEAVCBlurredB.c)
 */

__int64 __fastcall detail::vector_facade<CBlurredBackdropCache *,detail::pointer_buffer_impl<CBlurredBackdropCache *>>::erase(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = *a3;
  v5 = v6 + 8;
  detail::vector_facade<CBlurredBackdropCache *,detail::pointer_buffer_impl<CBlurredBackdropCache *>>::erase_unchecked(
    a1,
    a2,
    &v6,
    &v5);
  return a2;
}
