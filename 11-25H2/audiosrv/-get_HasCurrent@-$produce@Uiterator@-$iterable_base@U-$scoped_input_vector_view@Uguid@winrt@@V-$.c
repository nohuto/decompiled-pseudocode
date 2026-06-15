/*
 * XREFs of ?get_HasCurrent@?$produce@Uiterator@?$iterable_base@U?$scoped_input_vector_view@Uguid@winrt@@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@Uguid@winrt@@@std@@@std@@@std@@@impl@winrt@@Uguid@3@Uno_collection_version@23@@winrt@@U?$IIterator@Uguid@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEA_N@Z @ 0x1800E3560
 * Callers:
 *     <none>
 * Callees:
 *     ??0hresult_illegal_method_call@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x1800DF2A4 (--0hresult_illegal_method_call@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1800E328C (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     _CxxThrowException_0 @ 0x18015E870 (_CxxThrowException_0.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::iterable_base<winrt::impl::scoped_input_vector_view<winrt::guid,std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<winrt::guid>>>>,winrt::guid,winrt::impl::no_collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::guid>>::get_HasCurrent(
        __int64 a1,
        bool *a2)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rcx
  const struct winrt::impl::slim_source_location *v7; // rax
  __int64 *v8; // rdx
  __int64 v9; // [rsp+0h] [rbp-58h] BYREF
  _BYTE pExceptionObject[24]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v11[32]; // [rsp+38h] [rbp-20h] BYREF
  unsigned int v12; // [rsp+60h] [rbp+8h]

  v3 = a1 + 8;
  if ( !a1 )
    v3 = 24LL;
  if ( *(_BYTE *)(*(_QWORD *)v3 + 32LL) )
  {
    v7 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current((__int64)v11);
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
      return v12;
    }
  }
  v4 = a1 + 24;
  if ( !a1 )
    v4 = 40LL;
  v5 = a1 + 16;
  if ( !a1 )
    v5 = 32LL;
  *a2 = *(_QWORD *)v5 != *(_QWORD *)v4;
  return 0LL;
}
