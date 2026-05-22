/*
 * XREFs of std::_Func_impl_no_alloc__lambda_82df5eb55bcd175fe38d7bfb3ca3561b__void_tagPROPVARIANT_const_&_::_Func_impl_no_alloc__lambda_82df5eb55bcd175fe38d7bfb3ca3561b__void_tagPROPVARIANT_const_&___lambda_82df5eb55bcd175fe38d7bfb3ca3561b__0_ @ 0x180168E7C
 * Callers:
 *     ?CreatePVPrincipal@MPCConstantManagerClient@@AEAA?AV?$com_ptr_t@VAsyncPVPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$AsyncDeferral@V?$CMarshaledInterfaceResult@UIPropertyValue@Foundation@Windows@@@Internal@Windows@@@Internal@Windows@@@Z @ 0x18016DA58 (-CreatePVPrincipal@MPCConstantManagerClient@@AEAA-AV-$com_ptr_t@VAsyncPVPrincipal@@Uerr_exceptio.c)
 *     std::_Func_impl_no_alloc__lambda_82df5eb55bcd175fe38d7bfb3ca3561b__void_tagPROPVARIANT_const_&_::_Move @ 0x180172730 (std--_Func_impl_no_alloc__lambda_82df5eb55bcd175fe38d7bfb3ca3561b__void_tagPROPVARI_ea_180172730.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Func_impl_no_alloc__lambda_82df5eb55bcd175fe38d7bfb3ca3561b__void_tagPROPVARIANT_const___::_Func_impl_no_alloc__lambda_82df5eb55bcd175fe38d7bfb3ca3561b__void_tagPROPVARIANT_const_____lambda_82df5eb55bcd175fe38d7bfb3ca3561b__0_(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v2; // rax
  _QWORD *v3; // rdx

  *a1 = off_1801EDDC0;
  a1[1] = *a2;
  v2 = a2[1];
  v3 = a2 + 2;
  a1[2] = v2;
  a1[3] = 0LL;
  if ( a1 + 3 != v3 )
  {
    a1[3] = *v3;
    *v3 = 0LL;
  }
  return a1;
}
