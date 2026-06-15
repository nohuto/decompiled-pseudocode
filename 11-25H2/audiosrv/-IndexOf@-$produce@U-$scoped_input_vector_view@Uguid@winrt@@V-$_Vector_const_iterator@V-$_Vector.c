/*
 * XREFs of ?IndexOf@?$produce@U?$scoped_input_vector_view@Uguid@winrt@@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@Uguid@winrt@@@std@@@std@@@std@@@impl@winrt@@U?$IVectorView@Uguid@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHUguid@3@PEAIPEA_N@Z @ 0x1800E1460
 * Callers:
 *     <none>
 * Callees:
 *     ??0hresult_illegal_method_call@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x1800DF2A4 (--0hresult_illegal_method_call@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1800E328C (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     _CxxThrowException_0 @ 0x18015E870 (_CxxThrowException_0.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::impl::scoped_input_vector_view<winrt::guid,std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<winrt::guid>>>>,winrt::Windows::Foundation::Collections::IVectorView<winrt::guid>>::IndexOf(
        __int64 a1,
        _QWORD *a2,
        _DWORD *a3,
        bool *a4)
{
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdx
  char *v9; // r8
  char *i; // rcx
  __int64 v11; // rcx
  const struct winrt::impl::slim_source_location *v13; // rax
  _DWORD *v14; // rdx
  _DWORD v15[10]; // [rsp+0h] [rbp-68h] BYREF
  _BYTE pExceptionObject[24]; // [rsp+28h] [rbp-40h] BYREF
  char v17[40]; // [rsp+40h] [rbp-28h] BYREF

  v6 = a1 - 16;
  v7 = a1 + 16;
  if ( !a1 )
    v7 = 32LL;
  if ( *(_BYTE *)v7 )
  {
    v13 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current(v17, v6, 32LL);
    winrt::hresult_illegal_method_call::hresult_illegal_method_call(
      (winrt::hresult_illegal_method_call *)pExceptionObject,
      v13);
    try
    {
      throw (winrt::hresult_illegal_method_call *)pExceptionObject;
    }
    catch ( ... )
    {
      v14 = v15;
      v14[8] = *(_DWORD *)winrt::to_hresult(v14 + 8);
      return v15[8];
    }
  }
  v8 = v6 & -(__int64)(a1 != 0) & ((unsigned __int128)-(__int128)((v6 & (unsigned __int64)-(__int64)(a1 != 0)) + 33) >> 64);
  v9 = *(char **)(v8 + 0x28);
  for ( i = v9; i != *(char **)(v8 + 48); i += 16 )
  {
    if ( *a2 == *(_QWORD *)i && a2[1] == *((_QWORD *)i + 1) )
      break;
  }
  v11 = (i - v9) >> 4;
  *a3 = v11;
  *a4 = (unsigned int)v11 < (unsigned int)((__int64)(*(_QWORD *)(v8 + 48) - *(_QWORD *)(v8 + 40)) >> 4);
  return 0LL;
}
