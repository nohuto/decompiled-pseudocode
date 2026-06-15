/*
 * XREFs of ?GetMany@?$produce@U?$scoped_input_vector_view@Uguid@winrt@@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@Uguid@winrt@@@std@@@std@@@std@@@impl@winrt@@U?$IVectorView@Uguid@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIIPEAUguid@3@PEAI@Z @ 0x1800E5AD0
 * Callers:
 *     <none>
 * Callees:
 *     ??0hresult_illegal_method_call@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x1800E3C90 (--0hresult_illegal_method_call@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 *     ?GetMany@?$vector_view_base@U?$scoped_input_vector_view@Uguid@winrt@@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@Uguid@winrt@@@std@@@std@@@std@@@impl@winrt@@Uguid@3@Uno_collection_version@23@@winrt@@QEBAIIU?$array_view@Uguid@winrt@@@2@@Z @ 0x1800E5C44 (-GetMany@-$vector_view_base@U-$scoped_input_vector_view@Uguid@winrt@@V-$_Vector_const_iterator@V.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1800E7CEC (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     _CxxThrowException_0 @ 0x180167F30 (_CxxThrowException_0.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::impl::scoped_input_vector_view<winrt::guid,std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<winrt::guid>>>>,winrt::Windows::Foundation::Collections::IVectorView<winrt::guid>>::GetMany(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  const struct winrt::impl::slim_source_location *v9; // rax
  __int64 *v10; // rdx
  __int64 v11; // [rsp+0h] [rbp-68h] BYREF
  __int64 v12; // [rsp+20h] [rbp-48h] BYREF
  int v13; // [rsp+28h] [rbp-40h]
  _BYTE pExceptionObject[40]; // [rsp+40h] [rbp-28h] BYREF
  unsigned int v15; // [rsp+70h] [rbp+8h]

  v6 = a1 + 16;
  if ( !a1 )
    v6 = 32LL;
  if ( *(_BYTE *)v6 )
  {
    v9 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current(&v12, a2, a3);
    winrt::hresult_illegal_method_call::hresult_illegal_method_call(
      (winrt::hresult_illegal_method_call *)pExceptionObject,
      v9);
    try
    {
      throw (winrt::hresult_illegal_method_call *)pExceptionObject;
    }
    catch ( ... )
    {
      v10 = &v11;
      *((_DWORD *)v10 + 28) = *(_DWORD *)winrt::to_hresult(v10 + 14);
      return v15;
    }
  }
  v7 = a1 + 17;
  if ( !a1 )
    v7 = 33LL;
  v12 = a4;
  v13 = a3;
  *a5 = winrt::vector_view_base<winrt::impl::scoped_input_vector_view<winrt::guid,std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<winrt::guid>>>>,winrt::guid,winrt::impl::no_collection_version>::GetMany(
          v7,
          a2,
          &v12);
  return 0LL;
}
