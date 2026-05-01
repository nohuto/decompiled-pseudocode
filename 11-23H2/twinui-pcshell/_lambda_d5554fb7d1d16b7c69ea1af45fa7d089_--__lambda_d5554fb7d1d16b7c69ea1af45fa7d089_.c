/*
 * XREFs of _lambda_d5554fb7d1d16b7c69ea1af45fa7d089_::__lambda_d5554fb7d1d16b7c69ea1af45fa7d089_ @ 0x1802824C0
 * Callers:
 *     std::function_void___cdecl(void)_::function_void___cdecl(void)___lambda_d5554fb7d1d16b7c69ea1af45fa7d089__0_ @ 0x180281DD0 (std--function_void___cdecl(void)_--function_void___cdecl(void)___lambda_d5554fb7d1d16b7c69ea1af4.c)
 *     _std::function_void___cdecl(void)_::function_void___cdecl(void)___lambda_d5554fb7d1d16b7c69ea1af45fa7d089__0__::_1_::dtor$0 @ 0x180281E12 (_std--function_void___cdecl(void)_--function_void___cdecl(void)___lambda_d5554fb7d1d16b7c69ea1af.c)
 *     std::_Func_impl_no_alloc__lambda_d5554fb7d1d16b7c69ea1af45fa7d089__void_::_Delete_this @ 0x180283AE0 (std--_Func_impl_no_alloc__lambda_d5554fb7d1d16b7c69ea1af45fa7d089__void_--_Delete_this.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1800B498C (--1hstring@winrt@@QEAA@XZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1801453A8 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall lambda_d5554fb7d1d16b7c69ea1af45fa7d089_::__lambda_d5554fb7d1d16b7c69ea1af45fa7d089_(__int64 a1)
{
  std::_Ref_count_base *v2; // rcx

  winrt::hstring::~hstring((void **)(a1 + 40));
  winrt::hstring::~hstring((void **)(a1 + 32));
  if ( *(_QWORD *)(a1 + 24) )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)(a1 + 24));
  if ( *(_QWORD *)(a1 + 16) )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)(a1 + 16));
  v2 = *(std::_Ref_count_base **)(a1 + 8);
  if ( v2 )
    std::_Ref_count_base::_Decwref(v2);
}
