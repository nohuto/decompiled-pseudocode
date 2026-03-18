/*
 * XREFs of ??1?$vector_facade@PEAVCBlurredBackdropCache@@V?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@@detail@@QEAA@XZ @ 0x18022069C
 * Callers:
 *     ??1CBackdropVisualImage@@UEAA@XZ @ 0x18021CF7C (--1CBackdropVisualImage@@UEAA@XZ.c)
 * Callees:
 *     ?size@?$vector_facade@PEAVCBlurredBackdropCache@@V?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@@detail@@QEBA_KXZ @ 0x180040250 (-size@-$vector_facade@PEAVCBlurredBackdropCache@@V-$pointer_buffer_impl@PEAVCBlurredBackdropCach.c)
 *     ?clear_region@?$vector_facade@PEAVCBlurredBackdropCache@@V?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800405F8 (-clear_region@-$vector_facade@PEAVCBlurredBackdropCache@@V-$pointer_buffer_impl@PEAVCBlurredBack.c)
 */

__int64 __fastcall detail::vector_facade<CBlurredBackdropCache *,detail::pointer_buffer_impl<CBlurredBackdropCache *>>::~vector_facade<CBlurredBackdropCache *,detail::pointer_buffer_impl<CBlurredBackdropCache *>>(
        _QWORD *a1)
{
  __int64 v2; // rax

  v2 = detail::vector_facade<CBlurredBackdropCache *,detail::pointer_buffer_impl<CBlurredBackdropCache *>>::size((__int64)a1);
  if ( v2 )
    detail::vector_facade<CBlurredBackdropCache *,detail::pointer_buffer_impl<CBlurredBackdropCache *>>::clear_region(
      a1,
      0LL,
      v2);
  return detail::pointer_buffer_impl<CBlurredBackdropCache *>::~pointer_buffer_impl<CBlurredBackdropCache *>(a1);
}
