/*
 * XREFs of _lambda_67a01f9610c8ee33e005e0a83cb8b51b_::operator() @ 0x18030D1A0
 * Callers:
 *     wil::details::lambda_call__lambda_67a01f9610c8ee33e005e0a83cb8b51b___::_lambda_call__lambda_67a01f9610c8ee33e005e0a83cb8b51b___ @ 0x18030CAAC (wil--details--lambda_call__lambda_67a01f9610c8ee33e005e0a83cb8b51b___--_lambda_call__lambda_67a0.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002AEA8 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x18002B164 (-InternalRelease@-$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x18002B1E4 (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18002EBC0 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 *     _lambda_7ad3d37a1216ab960a86f5745ba39ded_::operator() @ 0x18030D2A8 (_lambda_7ad3d37a1216ab960a86f5745ba39ded_--operator().c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
_DWORD *__fastcall lambda_67a01f9610c8ee33e005e0a83cb8b51b_::operator()(__int64 a1)
{
  _DWORD *result; // rax
  int (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rdi
  int (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v5; // rbx
  int (__fastcall *v6)(__int64, __int64 *); // rdi
  __int64 v7; // [rsp+20h] [rbp-20h] BYREF
  __int64 v8; // [rsp+28h] [rbp-18h]
  __int64 v9; // [rsp+30h] [rbp-10h]
  __int64 v10; // [rsp+60h] [rbp+20h] BYREF
  volatile signed __int32 *v11; // [rsp+68h] [rbp+28h] BYREF
  __int64 *v12; // [rsp+70h] [rbp+30h] BYREF

  result = *(_DWORD **)a1;
  if ( !**(_DWORD **)a1 )
  {
    v10 = 0LL;
    v3 = **(int (__fastcall *****)(_QWORD, GUID *, __int64 *))(a1 + 8);
    v4 = **v3;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v10);
    if ( v4(v3, &GUID_979cde28_2164_437c_b963_55e5d4ac1d02, &v10) >= 0 )
    {
      v7 = 0LL;
      v8 = 0LL;
      v9 = 0LL;
      v5 = v10;
      v6 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v10 + 32LL);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v7);
      v8 = -1LL;
      v9 = -1LL;
      if ( v6(v5, &v7) >= 0 )
      {
        v12 = &v7;
        GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get((__int64 *)&v11);
        if ( v11 )
          lambda_7ad3d37a1216ab960a86f5745ba39ded_::operator()(&v12);
        Microsoft::WRL::ComPtr<NotificationDispatcher>::InternalRelease(&v11);
      }
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v7);
    }
    CApplicationViewManager::RaiseApplicationViewChanged(
      *(_QWORD *)(a1 + 16) + 136LL,
      **(int (__fastcall *****)(_QWORD, GUID *, LPMALLOC *))(a1 + 8),
      2u,
      0LL);
    return (_DWORD *)Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v10);
  }
  return result;
}
