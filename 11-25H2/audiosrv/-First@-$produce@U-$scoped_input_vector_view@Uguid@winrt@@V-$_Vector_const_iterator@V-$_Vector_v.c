/*
 * XREFs of ?First@?$produce@U?$scoped_input_vector_view@Uguid@winrt@@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@Uguid@winrt@@@std@@@std@@@std@@@impl@winrt@@U?$IIterable@Uguid@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1800E0D80
 * Callers:
 *     <none>
 * Callees:
 *     ??$create_and_initialize@Uiterator@?$iterable_base@U?$scoped_input_vector_view@Uguid@winrt@@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@Uguid@winrt@@@std@@@std@@@std@@@impl@winrt@@Uguid@3@Uno_collection_version@23@@winrt@@PEAU?$scoped_input_vector_view@Uguid@winrt@@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@Uguid@winrt@@@std@@@std@@@std@@@impl@3@@impl@winrt@@YAPEAUiterator@?$iterable_base@U?$scoped_input_vector_view@Uguid@winrt@@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@Uguid@winrt@@@std@@@std@@@std@@@impl@winrt@@Uguid@3@Uno_collection_version@23@@1@$$QEAPEAU?$scoped_input_vector_view@Uguid@winrt@@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@Uguid@winrt@@@std@@@std@@@std@@@01@@Z @ 0x1800DE7BC (--$create_and_initialize@Uiterator@-$iterable_base@U-$scoped_input_vector_view@Uguid@winrt@@V-$_.c)
 *     ??0hresult_illegal_method_call@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x1800DF2A4 (--0hresult_illegal_method_call@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 *     ??1?$IVectorView@Uguid@winrt@@@Collections@Foundation@Windows@winrt@@QEAA@XZ @ 0x1800DF5F8 (--1-$IVectorView@Uguid@winrt@@@Collections@Foundation@Windows@winrt@@QEAA@XZ.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1800E328C (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     _CxxThrowException_0 @ 0x18015E870 (_CxxThrowException_0.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::impl::scoped_input_vector_view<winrt::guid,std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<winrt::guid>>>>,winrt::Windows::Foundation::Collections::IIterable<winrt::guid>>::First(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v3; // r8
  __int64 v4; // rax
  _QWORD *v5; // rax
  const struct winrt::impl::slim_source_location *v7; // rax
  __int64 *v8; // rdx
  __int64 v9; // [rsp+0h] [rbp-58h] BYREF
  _BYTE pExceptionObject[24]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v11[32]; // [rsp+38h] [rbp-20h] BYREF
  __int64 v12; // [rsp+60h] [rbp+8h] BYREF

  *a2 = 0LL;
  v3 = a1 - 24;
  v4 = a1 + 8;
  if ( !a1 )
    v4 = 32LL;
  if ( *(_BYTE *)v4 )
  {
    v7 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current(v11, 32LL, v3);
    winrt::hresult_illegal_method_call::hresult_illegal_method_call(
      (winrt::hresult_illegal_method_call *)pExceptionObject,
      v7);
    try
    {
      throw (winrt::hresult_illegal_method_call *)pExceptionObject;
    }
    catch ( ... )
    {
      v8 = &v9;
      *((_DWORD *)v8 + 24) = *(_DWORD *)winrt::to_hresult(v8 + 12);
      return (unsigned int)v12;
    }
  }
  if ( !a1 || v3 == -33 )
    v3 = 0LL;
  v12 = v3;
  v5 = winrt::impl::create_and_initialize<winrt::iterable_base<winrt::impl::scoped_input_vector_view<winrt::guid,std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<winrt::guid>>>>,winrt::guid,winrt::impl::no_collection_version>::iterator,winrt::impl::scoped_input_vector_view<winrt::guid,std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<winrt::guid>>>> *>(&v12);
  v12 = 0LL;
  *a2 = (unsigned __int64)(v5 + 2) & ((unsigned __int128)-(__int128)(unsigned __int64)v5 >> 64);
  winrt::Windows::Foundation::Collections::IVectorView<winrt::guid>::~IVectorView<winrt::guid>(&v12);
  return 0LL;
}
