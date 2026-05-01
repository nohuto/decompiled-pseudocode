/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IAsyncOperationCompletedHandler_impl_Windows::Foundation::Internal::AggregateType_bool_unsigned_char___::_)(Windows::Foundation::IAsyncOperation_bool____enum_ABI::Windows::Foundation::AsyncStatus)_::DelegateInvokeHelper_Windows::Foundation::IAsyncOperationCompletedHandler_bool___lambda_14f1fa27027dd44487d8ea4268af7d5d___1_Windows::Foundation::IAsyncOperation_bool____enum_ABI::Windows::Foundation::AsyncStatus_::Invoke @ 0x180440D00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x18013C198 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_db1d86ab27b88e65a689dd51387263d9___ @ 0x18043C5F0 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_db1d86ab27b88e65a689dd51387263d9.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::IAsyncOperationCompletedHandler_impl_Windows::Foundation::Internal::AggregateType_bool_unsigned_char___::___Windows::Foundation::IAsyncOperation_bool____enum_ABI::Windows::Foundation::AsyncStatus__::DelegateInvokeHelper_Windows::Foundation::IAsyncOperationCompletedHandler_bool___lambda_14f1fa27027dd44487d8ea4268af7d5d___1_Windows::Foundation::IAsyncOperation_bool____enum_ABI::Windows::Foundation::AsyncStatus_::Invoke(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v4; // rcx
  int v5; // eax
  signed int v6; // ebx
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)&v8 = &v10;
  *((_QWORD *)&v8 + 1) = a1 + 32;
  v10 = a2;
  CurrentThreadId = GetCurrentThreadId();
  v5 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_db1d86ab27b88e65a689dd51387263d9___(
         v4,
         CurrentThreadId,
         &v8);
  v6 = v5;
  if ( v5 >= 0 )
    v6 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3E0,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)v5);
  *(_BYTE *)(v2 + 549) = 0;
  if ( v6 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot(v6);
  return (unsigned int)v6;
}
