/*
 * XREFs of wistd::__function::__func__lambda_f9d92d283d219251b39b1fca3d115af1__void___cdecl(enum_wil::RegistryChangeKind)_::destroy @ 0x180640F30
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall wistd::__function::__func__lambda_f9d92d283d219251b39b1fca3d115af1__void___cdecl_enum_wil::RegistryChangeKind__::destroy(
        __int64 a1)
{
  std::_Ref_count_base *v1; // rcx

  v1 = *(std::_Ref_count_base **)(a1 + 16);
  if ( v1 )
    std::_Ref_count_base::_Decref(v1);
}
