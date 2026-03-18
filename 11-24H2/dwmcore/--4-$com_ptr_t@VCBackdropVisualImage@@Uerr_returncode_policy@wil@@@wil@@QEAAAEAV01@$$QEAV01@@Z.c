/*
 * XREFs of ??4?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180266E90
 * Callers:
 *     ??$move@V?$move_iterator@PEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@@std@@V?$checked_array_iterator@PEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@@stdext@@V?$move_iterator@PEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@@0@0V12@@Z @ 0x180266D5C (--$move@V-$move_iterator@PEAV-$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil.c)
 *     ??$move_backward@V?$move_iterator@PEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@@std@@V?$checked_array_iterator@PEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@@stdext@@V?$move_iterator@PEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@@0@0V12@@Z @ 0x180266DF4 (--$move_backward@V-$move_iterator@PEAV-$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@.c)
 * Callees:
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800797F0 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 */

CCachedVisualImage **__fastcall wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy>::operator=(
        CCachedVisualImage **a1,
        CCachedVisualImage **a2,
        __int64 a3)
{
  CCachedVisualImage *v3; // rax
  CCachedVisualImage *v5; // rcx

  v3 = *a2;
  *a2 = 0LL;
  v5 = *a1;
  *a1 = v3;
  if ( v5 )
    CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v5, (__int64)a2, a3);
  return a1;
}
