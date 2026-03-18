/*
 * XREFs of ??4?$com_ptr_t@UID2D1Bitmap1@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x18022ACB8
 * Callers:
 *     ?EnsureBitmap@CD2DBitmap@@IEAAJXZ @ 0x1801D6A18 (-EnsureBitmap@CD2DBitmap@@IEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 *__fastcall wil::com_ptr_t<ID2D1Bitmap1,wil::err_returncode_policy>::operator=(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rbx
  __int64 v4; // rcx

  v2 = *a1;
  v4 = *a2;
  *a1 = *a2;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  return a1;
}
