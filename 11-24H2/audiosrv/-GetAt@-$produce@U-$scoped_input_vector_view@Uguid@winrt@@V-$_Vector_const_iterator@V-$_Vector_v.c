/*
 * XREFs of ?GetAt@?$produce@U?$scoped_input_vector_view@Uguid@winrt@@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@Uguid@winrt@@@std@@@std@@@std@@@impl@winrt@@U?$IVectorView@Uguid@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIPEAUguid@3@@Z @ 0x1800E5890
 * Callers:
 *     <none>
 * Callees:
 *     ??0hresult_illegal_method_call@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x1800E3C90 (--0hresult_illegal_method_call@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 *     ??0hresult_out_of_bounds@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x1800E3D80 (--0hresult_out_of_bounds@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1800E7CEC (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     _CxxThrowException_0 @ 0x180167F30 (_CxxThrowException_0.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::impl::scoped_input_vector_view<winrt::guid,std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<winrt::guid>>>>,winrt::Windows::Foundation::Collections::IVectorView<winrt::guid>>::GetAt(
        __int64 a1,
        unsigned int a2,
        _OWORD *a3)
{
  __int64 v3; // r9
  __int64 v4; // r10
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  const struct winrt::impl::slim_source_location *v9; // rax
  const struct winrt::impl::slim_source_location *v10; // rax
  __int64 *v11; // rdx
  __int64 v12; // [rsp+0h] [rbp-78h] BYREF
  _BYTE pExceptionObject[24]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v14[24]; // [rsp+38h] [rbp-40h] BYREF
  _BYTE v15[40]; // [rsp+50h] [rbp-28h] BYREF
  unsigned int v16; // [rsp+80h] [rbp+8h]

  v3 = a2;
  v4 = a1 - 16;
  v5 = a1 + 16;
  if ( !a1 )
    v5 = 32LL;
  if ( *(_BYTE *)v5 )
  {
    v9 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current(v15, 32LL, a3);
    winrt::hresult_illegal_method_call::hresult_illegal_method_call(
      (winrt::hresult_illegal_method_call *)pExceptionObject,
      v9);
    try
    {
      throw (winrt::hresult_illegal_method_call *)pExceptionObject;
    }
    catch ( ... )
    {
      v11 = &v12;
      *((_DWORD *)v11 + 32) = *(_DWORD *)winrt::to_hresult(v11 + 16);
      return v16;
    }
  }
  v6 = v4 & -(__int64)(a1 != 0) & -(__int64)((v4 & -(__int64)(a1 != 0)) != -33);
  v7 = *(_QWORD *)(v6 + 40);
  if ( (unsigned int)v3 >= (unsigned int)((*(_QWORD *)(v6 + 48) - v7) >> 4) )
  {
    v10 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current(v15, v7, a3);
    winrt::hresult_out_of_bounds::hresult_out_of_bounds((winrt::hresult_out_of_bounds *)v14, v10);
    throw (winrt::hresult_out_of_bounds *)v14;
  }
  *a3 = *(_OWORD *)(v7 + 16 * v3);
  return 0LL;
}
