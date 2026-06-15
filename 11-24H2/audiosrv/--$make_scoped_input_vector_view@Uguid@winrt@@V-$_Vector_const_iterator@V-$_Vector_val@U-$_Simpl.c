/*
 * XREFs of ??$make_scoped_input_vector_view@Uguid@winrt@@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@Uguid@winrt@@@std@@@std@@@std@@@impl@winrt@@YA?A_PV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@Uguid@winrt@@@std@@@std@@@std@@0@Z @ 0x1800E34E4
 * Callers:
 *     _lambda_82b4d950fa5d9eeb82537f57bcb68a2f_::operator() @ 0x1800E4970 (_lambda_82b4d950fa5d9eeb82537f57bcb68a2f_--operator().c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180015ED0 (--2@YAPEAX_K@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800E8C8C (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 */

__int64 *__fastcall winrt::impl::make_scoped_input_vector_view<winrt::guid,std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<winrt::guid>>>>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  _BYTE *v6; // rax
  _BYTE *v7; // rsi

  *a1 = 0LL;
  a1[1] = 0LL;
  v6 = operator new(0x38uLL);
  v7 = v6;
  if ( v6 )
  {
    v6[32] = 0;
    *((_QWORD *)v6 + 2) = &winrt::impl::produce<winrt::impl::scoped_input_vector_view<winrt::guid,std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<winrt::guid>>>>,winrt::Windows::Foundation::Collections::IVectorView<winrt::guid>>::`vftable';
    *((_QWORD *)v6 + 3) = &winrt::impl::produce<winrt::impl::scoped_input_vector_view<winrt::guid,std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<winrt::guid>>>>,winrt::Windows::Foundation::Collections::IIterable<winrt::guid>>::`vftable';
    _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
    *((_DWORD *)v6 + 2) = 1;
    *(_QWORD *)v6 = &winrt::impl::scoped_input_vector_view<winrt::guid,std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<winrt::guid>>>>::`vftable';
    *((_QWORD *)v6 + 5) = a2;
    *((_QWORD *)v6 + 6) = a3;
  }
  else
  {
    v7 = 0LL;
  }
  if ( *a1 )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(a1);
  *a1 = (unsigned __int64)(v7 + 16) & -(__int64)(v7 != 0LL);
  a1[1] = (unsigned __int64)(v7 + 32) & -(__int64)(v7 != 0LL);
  return a1;
}
