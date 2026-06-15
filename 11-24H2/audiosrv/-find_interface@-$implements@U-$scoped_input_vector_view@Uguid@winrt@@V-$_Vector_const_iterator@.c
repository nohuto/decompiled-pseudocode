/*
 * XREFs of ?find_interface@?$implements@U?$scoped_input_vector_view@Uguid@winrt@@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@Uguid@winrt@@@std@@@std@@@std@@@impl@winrt@@Unon_agile@3@Uno_weak_ref@3@U?$IVectorView@Uguid@winrt@@@Collections@Foundation@Windows@3@U?$IIterable@Uguid@winrt@@@7893@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1800E7E60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::impl::scoped_input_vector_view<winrt::guid,std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<winrt::guid>>>>,winrt::non_agile,winrt::no_weak_ref,winrt::Windows::Foundation::Collections::IVectorView<winrt::guid>,winrt::Windows::Foundation::Collections::IIterable<winrt::guid>>::find_interface(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rax

  if ( *a2 == winrt::impl::guid_v<winrt::Windows::Foundation::Collections::IVectorView<winrt::guid>>
    && a2[1] == 0x8AF66CFA9131ED98uLL )
  {
    v2 = a1 + 16;
  }
  else
  {
    if ( *a2 != winrt::impl::guid_v<winrt::Windows::Foundation::Collections::IIterable<winrt::guid>>
      || a2[1] != 0x6E87A08C8DD82E98LL )
    {
      return 0LL;
    }
    v2 = a1 + 24;
  }
  return v2 & -(__int64)(a1 != 0);
}
