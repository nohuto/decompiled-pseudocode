/*
 * XREFs of std::_Func_impl_no_alloc__lambda_1908bf4dcb0a72ead8215abd107bde15__void_winrt::guid_const_&_::_Copy @ 0x18027C630
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall std::_Func_impl_no_alloc__lambda_1908bf4dcb0a72ead8215abd107bde15__void_winrt::guid_const___::_Copy(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v3; // rcx

  *a2 = off_1807CB4C8;
  v3 = *(_QWORD *)(a1 + 8);
  a2[1] = v3;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return a2;
}
