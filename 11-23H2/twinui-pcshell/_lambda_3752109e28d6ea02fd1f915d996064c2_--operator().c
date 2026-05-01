/*
 * XREFs of _lambda_3752109e28d6ea02fd1f915d996064c2_::operator() @ 0x1800DF6FC
 * Callers:
 *     ?RemoveApplicationView@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4REMOVE_APPLICATION_VIEW_OPTIONS@@@Z @ 0x1800DF5E0 (-RemoveApplicationView@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4REMOVE_APPLICATION_.c)
 *     wil::details::lambda_call__lambda_3752109e28d6ea02fd1f915d996064c2___::_lambda_call__lambda_3752109e28d6ea02fd1f915d996064c2___ @ 0x1803CB8AC (wil--details--lambda_call__lambda_3752109e28d6ea02fd1f915d996064c2___--_lambda_call__lambda_3752.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800C8550 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 *     GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_996cccf22044f7b06fef961424ec8d78___ @ 0x1800DF874 (GlobalsUtility--CGlobals_ApplicationViewManagement--CGlobals_--Get__lambda_996cccf22044f7b06fef9.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18016270C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_DWORD *__fastcall lambda_3752109e28d6ea02fd1f915d996064c2_::operator()(__int64 a1)
{
  _DWORD *result; // rax
  int (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rdi
  int (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v5; // rbx
  int (__fastcall *v6)(__int64, __int64 *); // rdi
  __int64 v7; // [rsp+20h] [rbp-20h] BYREF
  __int64 v8; // [rsp+28h] [rbp-18h]
  __int64 v9; // [rsp+30h] [rbp-10h]
  __int64 v10; // [rsp+50h] [rbp+10h] BYREF

  result = *(_DWORD **)a1;
  if ( !**(_DWORD **)a1 )
  {
    v10 = 0LL;
    v3 = **(int (__fastcall *****)(_QWORD, GUID *, __int64 *))(a1 + 8);
    v4 = **v3;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
    if ( v4(v3, &GUID_979cde28_2164_437c_b963_55e5d4ac1d02, &v10) >= 0 )
    {
      v7 = 0LL;
      v8 = 0LL;
      v9 = 0LL;
      v5 = v10;
      v6 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v10 + 32LL);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&v7);
      v8 = -1LL;
      v9 = -1LL;
      if ( v6(v5, &v7) >= 0 )
        GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_996cccf22044f7b06fef961424ec8d78___(&v7);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&v7);
    }
    CApplicationViewManager::RaiseApplicationViewChanged(
      *(_QWORD *)(a1 + 16) + 136LL,
      **(void (__fastcall *****)(_QWORD, GUID *, __int64 *))(a1 + 8),
      2u,
      0LL);
    return (_DWORD *)Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
  }
  return result;
}
