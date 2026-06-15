/*
 * XREFs of std::_Func_impl_no_alloc__lambda_574d5d0e55cfdb3d7e70cee17ad133ad__void_::_Copy @ 0x18003AD30
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x180018A8C (--0-$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_574d5d0e55cfdb3d7e70cee17ad133ad__void_::_Copy(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // r10
  __int64 result; // rax

  *(_QWORD *)a2 = off_180051148;
  wil::com_ptr_t<CProcess,wil::err_returncode_policy>::com_ptr_t<CProcess,wil::err_returncode_policy>(
    (__int64 *)(a2 + 8),
    (__int64 *)(a1 + 8));
  result = a2;
  *(_DWORD *)(a2 + 16) = *(_DWORD *)(v3 + 8);
  return result;
}
