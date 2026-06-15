/*
 * XREFs of std::_Func_impl_no_alloc__lambda_d6992668c4bfc33c09c8caf2c3b97d3f__void_::_Copy @ 0x1800F94C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCEndpointCharacteristics@@@Z @ 0x1800A1B1C (--0-$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCEndpointCh.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_d6992668c4bfc33c09c8caf2c3b97d3f__void_::_Copy(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a2 = off_1801732E8;
  wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>(
    (_QWORD *)(a2 + 8),
    *(_QWORD *)(a1 + 8));
  result = a2;
  *(_OWORD *)(a2 + 16) = *(_OWORD *)(a1 + 16);
  return result;
}
