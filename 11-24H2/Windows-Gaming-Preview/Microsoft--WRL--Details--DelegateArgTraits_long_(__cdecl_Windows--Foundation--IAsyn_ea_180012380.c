/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IAsyncOperationCompletedHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Storage::FileProperties::StorageItemThumbnail___Windows::Storage::Streams::IRandomAccessStreamWithContentType_____::_)(Windows::Foundation::IAsyncOperation_Windows::Storage::FileProperties::StorageItemThumbnail______enum_ABI::Windows::Foundation::AsyncStatus)_::DelegateInvokeHelper_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Storage::FileProperties::StorageItemThumbnail_____lambda_f58f8da4eea7e22484edf0ed17ac24c6___1_Windows::Foundation::IAsyncOperation_Windows::Storage::FileProperties::StorageItemThumbnail______enum_ABI::Windows::Foundation::AsyncStatus_::Invoke @ 0x180012380
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001087C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::IAsyncOperationCompletedHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Storage::FileProperties::StorageItemThumbnail___Windows::Storage::Streams::IRandomAccessStreamWithContentType_____::___Windows::Foundation::IAsyncOperation_Windows::Storage::FileProperties::StorageItemThumbnail______enum_ABI::Windows::Foundation::AsyncStatus__::DelegateInvokeHelper_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Storage::FileProperties::StorageItemThumbnail_____lambda_f58f8da4eea7e22484edf0ed17ac24c6___1_Windows::Foundation::IAsyncOperation_Windows::Storage::FileProperties::StorageItemThumbnail______enum_ABI::Windows::Foundation::AsyncStatus_::Invoke(
        __int64 a1,
        __int64 a2,
        unsigned int a3)
{
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rsi
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = 0LL;
  v6 = *(_QWORD *)(a1 + 16);
  if ( _Mtx_lock((_Mtx_t)(v6 + 88)) )
  {
    std::_Throw_Cpp_error(5);
    __debugbreak();
  }
  if ( *(_DWORD *)(v6 + 116) == 0x7FFFFFFF )
  {
    *(_DWORD *)(v6 + 116) = 2147483646;
    std::_Throw_Cpp_error(6);
    __debugbreak();
  }
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 120LL);
  if ( v7 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v7 + 8LL))(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 120LL));
    v5 = v7;
  }
  _Mtx_unlock((_Mtx_t)(v6 + 88));
  if ( v5 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v5 + 24LL))(v5, *(_QWORD *)(a1 + 16), a3);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x9A,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
        (const char *)(unsigned int)v8);
  }
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  return 0LL;
}
