/*
 * XREFs of ?size@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@AEBA_KXZ @ 0x1801D24DC
 * Callers:
 *     ?ensure_extra_capacity@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEAAX_K@Z @ 0x1801D2424 (-ensure_extra_capacity@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEAAX_K@Z.c)
 * Callees:
 *     ?first@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEBAPEAPEAVCBlurredBackdropCache@@XZ @ 0x1801D2784 (-first@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEBAPEAPEAVCBlurredBackdropCach.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall detail::pointer_buffer_impl<CBlurredBackdropCache *>::size(_DWORD *a1)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (*a1 & 3) == 0 )
    return 1LL;
  if ( (*a1 & 3) == 1LL )
    return *(_QWORD *)(detail::pointer_buffer_impl<CBlurredBackdropCache *>::first(a1) - 16);
  if ( (unsigned __int64)(*a1 & 3) - 2 > 1 )
    ModuleFailFastForHRESULT(-2147418113, retaddr);
  return 0LL;
}
