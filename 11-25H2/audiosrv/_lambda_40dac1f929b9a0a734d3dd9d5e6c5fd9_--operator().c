/*
 * XREFs of _lambda_40dac1f929b9a0a734d3dd9d5e6c5fd9_::operator() @ 0x180088520
 * Callers:
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_ISaDeviceProxy_________lambda_40dac1f929b9a0a734d3dd9d5e6c5fd9___ @ 0x180085C34 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--WRL--ComPtr_I.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     ??4?$com_ptr_t@VResourceGroupInstance@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x1800B5F1C (--4-$com_ptr_t@VResourceGroupInstance@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall lambda_40dac1f929b9a0a734d3dd9d5e6c5fd9_::operator()(_QWORD *a1, _QWORD *a2)
{
  _QWORD *result; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // rbx
  _BYTE v9[16]; // [rsp+20h] [rbp-38h] BYREF

  result = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*a2 + 40LL))(*a2, v9);
  v5 = *result - *a1;
  if ( *result == *a1 )
    v5 = result[1] - a1[1];
  if ( !v5 )
  {
    v6 = (_QWORD *)a1[2];
    if ( !*v6 )
      return (_QWORD *)wil::com_ptr_t<ResourceGroupInstance,wil::err_exception_policy>::operator=(v6, a2);
    v7 = *a2;
    v8 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v6 + 32LL))(*v6);
    result = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 32LL))(v7);
    if ( (__int64)result < v8 )
      return (_QWORD *)wil::com_ptr_t<ResourceGroupInstance,wil::err_exception_policy>::operator=(v6, a2);
  }
  return result;
}
