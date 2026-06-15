/*
 * XREFs of _lambda_8758ae7f98e4e08b9091e4a99aebcd74_::operator() @ 0x18010B964
 * Callers:
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x180110120 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     ??4?$com_ptr_t@VResourceGroupInstance@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x1800B5300 (--4-$com_ptr_t@VResourceGroupInstance@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 *__fastcall lambda_8758ae7f98e4e08b9091e4a99aebcd74_::operator()(_QWORD *a1, __int64 *a2)
{
  __int64 *result; // rax
  __int64 *v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rbx
  _BYTE v8[16]; // [rsp+20h] [rbp-38h] BYREF

  result = (__int64 *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)*a2 + 40LL))(*a2, v8);
  if ( *result == *a1 )
  {
    result = (__int64 *)result[1];
    if ( result == (__int64 *)a1[1] )
    {
      v5 = (__int64 *)a1[2];
      if ( !*v5 )
        return wil::com_ptr_t<ResourceGroupInstance,wil::err_exception_policy>::operator=(v5, a2);
      v6 = *a2;
      v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*v5 + 32LL))(*v5);
      result = (__int64 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 32LL))(v6);
      if ( (__int64)result < v7 )
        return wil::com_ptr_t<ResourceGroupInstance,wil::err_exception_policy>::operator=(v5, a2);
    }
  }
  return result;
}
