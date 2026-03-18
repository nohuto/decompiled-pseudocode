/*
 * XREFs of ?replace@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@AEAAPEADPEAU?$aligned_storage_for@PEAVCBlurredBackdropCache@@@2@@Z @ 0x18028E5D0
 * Callers:
 *     ?ensure_extra_capacity@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEAAX_K@Z @ 0x1801D2424 (-ensure_extra_capacity@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEAAX_K@Z.c)
 * Callees:
 *     ?first@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEBAPEAPEAVCBlurredBackdropCache@@XZ @ 0x1801D2784 (-first@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEBAPEAPEAVCBlurredBackdropCach.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 */

unsigned __int64 __fastcall detail::pointer_buffer_impl<CBlurredBackdropCache *>::replace(__int64 *a1, __int64 a2)
{
  unsigned __int64 result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (*(_DWORD *)a1 & 3) != 0 )
  {
    if ( (*(_DWORD *)a1 & 3) == 1LL )
    {
      result = detail::pointer_buffer_impl<CBlurredBackdropCache *>::first(a1) - 16;
      *a1 = a2 | 1;
      return result;
    }
    if ( (unsigned __int64)(*(_DWORD *)a1 & 3) - 2 >= 2 )
      ModuleFailFastForHRESULT(0x8000FFFF, retaddr);
  }
  *a1 = a2 | 1;
  return 0LL;
}
