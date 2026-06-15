/*
 * XREFs of ?QueryInterface@?$produce_base@U?$scoped_input_vector_view@Uguid@winrt@@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@Uguid@winrt@@@std@@@std@@@std@@@impl@winrt@@U?$IVectorView@Uguid@winrt@@@Collections@Foundation@Windows@3@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800E6AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?query_interface_common@?$root_implements@U?$scoped_input_vector_view@Uguid@winrt@@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@Uguid@winrt@@@std@@@std@@@std@@@impl@winrt@@Unon_agile@3@Uno_weak_ref@3@U?$IVectorView@Uguid@winrt@@@Collections@Foundation@Windows@3@U?$IIterable@Uguid@winrt@@@7893@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800E86B0 (-query_interface_common@-$root_implements@U-$scoped_input_vector_view@Uguid@winrt@@V-$_Vector_co.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::produce_base<winrt::impl::scoped_input_vector_view<winrt::guid,std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<winrt::guid>>>>,winrt::Windows::Foundation::Collections::IVectorView<winrt::guid>,void>::QueryInterface(
        unsigned __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  volatile signed __int32 *v5; // rbx
  __int64 v6; // rax
  unsigned int v7; // ecx

  v5 = (volatile signed __int32 *)((a1 - 16) & ((unsigned __int128)-(__int128)a1 >> 64));
  v6 = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 48LL))(v5);
  v7 = 0;
  *a3 = v6;
  if ( v6 )
    _InterlockedIncrement(v5 + 2);
  else
    return (unsigned int)winrt::impl::root_implements<winrt::impl::scoped_input_vector_view<winrt::guid,std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<winrt::guid>>>>,winrt::non_agile,winrt::no_weak_ref,winrt::Windows::Foundation::Collections::IVectorView<winrt::guid>,winrt::Windows::Foundation::Collections::IIterable<winrt::guid>>::query_interface_common(
                           v5,
                           a2,
                           a3);
  return v7;
}
