/*
 * XREFs of ?get_local_iids@?$implements@U?$scoped_input_vector_view@Uguid@winrt@@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@Uguid@winrt@@@std@@@std@@@std@@@impl@winrt@@Unon_agile@3@Uno_weak_ref@3@U?$IVectorView@Uguid@winrt@@@Collections@Foundation@Windows@3@U?$IIterable@Uguid@winrt@@@7893@@winrt@@UEBA?AU?$pair@IPEBUguid@winrt@@@std@@XZ @ 0x1800E80E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::impl::scoped_input_vector_view<winrt::guid,std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<winrt::guid>>>>,winrt::non_agile,winrt::no_weak_ref,winrt::Windows::Foundation::Collections::IVectorView<winrt::guid>,winrt::Windows::Foundation::Collections::IIterable<winrt::guid>>::get_local_iids(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)a2 = 2;
  *(_QWORD *)(a2 + 8) = &winrt::impl::uncloaked_iids<winrt::impl::interface_list<winrt::Windows::Foundation::Collections::IVectorView<winrt::guid>,winrt::Windows::Foundation::Collections::IIterable<winrt::guid>>>::value;
  return a2;
}
