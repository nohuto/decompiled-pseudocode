/*
 * XREFs of std::_Func_impl_no_alloc__lambda_7be77f52425797de9629a1559daf9291__void_::_Copy @ 0x18002D360
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x18001895C (--0-$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_7be77f52425797de9629a1559daf9291__void_::_Copy(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // r10
  __int64 result; // rax

  *(_QWORD *)a2 = off_180052CB8;
  wil::com_ptr_t<CProcess,wil::err_returncode_policy>::com_ptr_t<CProcess,wil::err_returncode_policy>(
    (__int64 *)(a2 + 8),
    (__int64 *)(a1 + 8));
  result = a2;
  *(_BYTE *)(a2 + 16) = *(_BYTE *)(v3 + 8);
  return result;
}
