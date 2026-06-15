/*
 * XREFs of ??1iterator@?$iterable_base@U?$scoped_input_vector_view@Uguid@winrt@@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@Uguid@winrt@@@std@@@std@@@std@@@impl@winrt@@Uguid@3@Uno_collection_version@23@@winrt@@UEAA@XZ @ 0x1800E4170
 * Callers:
 *     ??_G?$heap_implements@Uiterator@?$iterable_base@U?$scoped_input_vector_view@Uguid@winrt@@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@Uguid@winrt@@@std@@@std@@@std@@@impl@winrt@@Uguid@3@Uno_collection_version@23@@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x1800E4FC0 (--_G-$heap_implements@Uiterator@-$iterable_base@U-$scoped_input_vector_view@Uguid@winrt@@V-$_Vec.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@U?$scoped_input_vector_view@Uguid@winrt@@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@Uguid@winrt@@@std@@@std@@@std@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800E8C34 (-unconditional_release_ref@-$com_ptr@U-$scoped_input_vector_view@Uguid@winrt@@V-$_Vector_const_i.c)
 */

__int64 __fastcall winrt::iterable_base<winrt::impl::scoped_input_vector_view<winrt::guid,std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<winrt::guid>>>>,winrt::guid,winrt::impl::no_collection_version>::iterator::~iterator(
        __int64 a1)
{
  if ( *(_QWORD *)(a1 + 24) )
    winrt::com_ptr<winrt::impl::scoped_input_vector_view<winrt::guid,std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<winrt::guid>>>>>::unconditional_release_ref();
  return winrt::impl::root_implements<winrt::iterable_base<winrt::impl::scoped_input_vector_view<winrt::guid,std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<winrt::guid>>>>,winrt::guid,winrt::impl::no_collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::guid>>::~root_implements<winrt::iterable_base<winrt::impl::scoped_input_vector_view<winrt::guid,std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<winrt::guid>>>>,winrt::guid,winrt::impl::no_collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::guid>>();
}
