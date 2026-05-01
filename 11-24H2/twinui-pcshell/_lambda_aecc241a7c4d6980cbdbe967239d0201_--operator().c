/*
 * XREFs of _lambda_aecc241a7c4d6980cbdbe967239d0201_::operator() @ 0x180464C0C
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IAsyncActionCompletedHandler::_)(Windows::Foundation::IAsyncAction___enum_ABI::Windows::Foundation::AsyncStatus)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IAsyncActionCompletedHandler_IUnknown___lambda_aecc241a7c4d6980cbdbe967239d0201___1_Windows::Foundation::IAsyncAction___enum_ABI::Windows::Foundation::AsyncStatus_::Invoke @ 0x180465810 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IAsyn_ea_180465810.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     wil::details::CallAndHandleErrorsWithReturnType_void__lambda_e369aae3ebba8282559023f1a5b0b63f__&_long_&_0_ @ 0x180463414 (wil--details--CallAndHandleErrorsWithReturnType_void__lambda_e369aae3ebba8282559023f1a5b0b63f__-.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_aecc241a7c4d6980cbdbe967239d0201_::operator()(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        int a3)
{
  __int64 (__fastcall *v5)(_QWORD, GUID *, __int64 *); // rbx
  int v6; // eax
  __int64 v8; // [rsp+40h] [rbp+20h] BYREF
  int v9; // [rsp+50h] [rbp+30h] BYREF

  v9 = 0;
  if ( a3 != 1 )
  {
    v8 = 0LL;
    v5 = **a2;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v8);
    v9 = v5(a2, &GUID_00000036_0000_0000_c000_000000000046, &v8);
    if ( v9 >= 0 )
    {
      v9 = -2147418113;
      v6 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v8 + 64LL))(v8, &v9);
      if ( v6 >= 0 )
        v6 = v9;
      v9 = v6;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v8);
  }
  return wil::details::CallAndHandleErrorsWithReturnType_void__lambda_e369aae3ebba8282559023f1a5b0b63f____long___0_(
           a1,
           &v9);
}
