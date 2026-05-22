/*
 * XREFs of std::_Func_impl_no_alloc__lambda_f331ad8aa7f9e8b97a1a62f842df472b__void_long_::_Func_impl_no_alloc__lambda_f331ad8aa7f9e8b97a1a62f842df472b__void_long___lambda_f331ad8aa7f9e8b97a1a62f842df472b__0_ @ 0x180168EF4
 * Callers:
 *     ?CreateHRPrincipal@MPCConstantManagerClient@@AEAA?AV?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$AsyncDeferral@VCNoResult@Internal@Windows@@@Internal@Windows@@@Z @ 0x18016D72C (-CreateHRPrincipal@MPCConstantManagerClient@@AEAA-AV-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exc.c)
 *     std::_Func_impl_no_alloc__lambda_f331ad8aa7f9e8b97a1a62f842df472b__void_long_::_Move @ 0x180172770 (std--_Func_impl_no_alloc__lambda_f331ad8aa7f9e8b97a1a62f842df472b__void_long_--_Move.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Func_impl_no_alloc__lambda_f331ad8aa7f9e8b97a1a62f842df472b__void_long_::_Func_impl_no_alloc__lambda_f331ad8aa7f9e8b97a1a62f842df472b__void_long___lambda_f331ad8aa7f9e8b97a1a62f842df472b__0_(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v2; // rax
  _QWORD *v3; // rdx

  *a1 = off_1801EDE10;
  v2 = *a2;
  v3 = a2 + 1;
  a1[1] = v2;
  a1[2] = 0LL;
  if ( a1 + 2 != v3 )
  {
    a1[2] = *v3;
    *v3 = 0LL;
  }
  return a1;
}
