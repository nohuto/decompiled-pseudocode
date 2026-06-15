/*
 * XREFs of ??$create_and_initialize@Uiterator@?$iterable_base@U?$scoped_input_vector_view@Uguid@winrt@@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@Uguid@winrt@@@std@@@std@@@std@@@impl@winrt@@Uguid@3@Uno_collection_version@23@@winrt@@PEAU?$scoped_input_vector_view@Uguid@winrt@@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@Uguid@winrt@@@std@@@std@@@std@@@impl@3@@impl@winrt@@YAPEAUiterator@?$iterable_base@U?$scoped_input_vector_view@Uguid@winrt@@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@Uguid@winrt@@@std@@@std@@@std@@@impl@winrt@@Uguid@3@Uno_collection_version@23@@1@$$QEAPEAU?$scoped_input_vector_view@Uguid@winrt@@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@Uguid@winrt@@@std@@@std@@@std@@@01@@Z @ 0x1800DE7BC
 * Callers:
 *     ?First@?$produce@U?$scoped_input_vector_view@Uguid@winrt@@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@Uguid@winrt@@@std@@@std@@@std@@@impl@winrt@@U?$IIterable@Uguid@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1800E0D80 (-First@-$produce@U-$scoped_input_vector_view@Uguid@winrt@@V-$_Vector_const_iterator@V-$_Vector_v.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18001C1A0 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::impl::create_and_initialize<winrt::iterable_base<winrt::impl::scoped_input_vector_view<winrt::guid,std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<winrt::guid>>>>,winrt::guid,winrt::impl::no_collection_version>::iterator,winrt::impl::scoped_input_vector_view<winrt::guid,std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<winrt::guid>>>> *>(
        __int64 *a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rdx
  __int64 v4; // rcx

  v2 = operator new(0x30uLL);
  v3 = v2;
  if ( !v2 )
    return 0LL;
  v4 = *a1;
  v2[2] = &winrt::impl::produce<winrt::iterable_base<winrt::impl::scoped_input_vector_view<winrt::guid,std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<winrt::guid>>>>,winrt::guid,winrt::impl::no_collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::guid>>::`vftable';
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  v2[1] = 1LL;
  *v2 = &winrt::impl::heap_implements<winrt::iterable_base<winrt::impl::scoped_input_vector_view<winrt::guid,std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<winrt::guid>>>>,winrt::guid,winrt::impl::no_collection_version>::iterator>::`vftable';
  v2[3] = 0LL;
  v2[4] = *(_QWORD *)(v4 + 40);
  v2[5] = *(_QWORD *)(v4 + 48);
  if ( v4 )
  {
    v2[3] = v4;
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
  }
  *v2 = &winrt::impl::heap_implements<winrt::iterable_base<winrt::impl::scoped_input_vector_view<winrt::guid,std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<winrt::guid>>>>,winrt::guid,winrt::impl::no_collection_version>::iterator>::`vftable';
  return v3;
}
