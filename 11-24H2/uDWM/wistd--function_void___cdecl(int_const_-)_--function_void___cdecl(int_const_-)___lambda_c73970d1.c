/*
 * XREFs of wistd::function_void___cdecl(int_const_&)_::function_void___cdecl(int_const_&)___lambda_c73970d199e871e177cfde716dc4ccf1__void_ @ 0x1800ED1AC
 * Callers:
 *     ?RegisterTransparencySystemPolicyChangeEvent@CWindowList@@AEAAJXZ @ 0x18004A13C (-RegisterTransparencySystemPolicyChangeEvent@CWindowList@@AEAAJXZ.c)
 * Callees:
 *     ?IsIndependent@CFadeOut@@UEAA_NXZ @ 0x1800715E0 (-IsIndependent@CFadeOut@@UEAA_NXZ.c)
 */

_QWORD *__fastcall wistd::function_void___cdecl_int_const____::function_void___cdecl_int_const______lambda_c73970d199e871e177cfde716dc4ccf1__void_(
        CFadeOut *a1)
{
  __int64 v1; // rdx
  _QWORD *v2; // rcx

  *((_QWORD *)a1 + 14) = 0LL;
  if ( CFadeOut::IsIndependent(a1) )
  {
    v2[2] = v1;
    v2[1] = off_1801025F0;
    v2[14] = v2 + 1;
  }
  return v2;
}
