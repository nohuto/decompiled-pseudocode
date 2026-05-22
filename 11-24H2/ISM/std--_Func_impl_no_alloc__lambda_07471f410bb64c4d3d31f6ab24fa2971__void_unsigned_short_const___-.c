/*
 * XREFs of std::_Func_impl_no_alloc__lambda_07471f410bb64c4d3d31f6ab24fa2971__void_unsigned_short_const___::_Func_impl_no_alloc__lambda_07471f410bb64c4d3d31f6ab24fa2971__void_unsigned_short_const_____lambda_07471f410bb64c4d3d31f6ab24fa2971__0_ @ 0x180168DFC
 * Callers:
 *     ?CreateStringVectorPrincipal@MPCConstantManagerClient@@AEAA?AV?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$AsyncDeferral@V?$CMarshaledInterfaceResult@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Internal@Windows@@@Internal@Windows@@P6A?AV?$com_ptr_t@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@3@PEBG@Z@Z @ 0x18016DF24 (-CreateStringVectorPrincipal@MPCConstantManagerClient@@AEAA-AV-$com_ptr_t@VAsyncStringPrincipal@.c)
 *     std::_Func_impl_no_alloc__lambda_07471f410bb64c4d3d31f6ab24fa2971__void_unsigned_short_const___::_Move @ 0x1801726F0 (std--_Func_impl_no_alloc__lambda_07471f410bb64c4d3d31f6ab24fa2971__void_unsigned_sh_ea_1801726F0.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Func_impl_no_alloc__lambda_07471f410bb64c4d3d31f6ab24fa2971__void_unsigned_short_const___::_Func_impl_no_alloc__lambda_07471f410bb64c4d3d31f6ab24fa2971__void_unsigned_short_const_____lambda_07471f410bb64c4d3d31f6ab24fa2971__0_(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v2; // r8

  *a1 = off_1801EDE70;
  v2 = a2 + 2;
  a1[1] = *a2;
  a1[2] = a2[1];
  a1[3] = 0LL;
  if ( a1 + 3 != a2 + 2 )
  {
    a1[3] = *v2;
    *v2 = 0LL;
  }
  a1[4] = a2[3];
  return a1;
}
