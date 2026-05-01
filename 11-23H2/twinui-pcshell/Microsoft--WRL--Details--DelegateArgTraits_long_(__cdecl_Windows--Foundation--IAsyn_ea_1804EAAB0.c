/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IAsyncOperationCompletedHandler_impl_Windows::Foundation::Internal::AggregateType_bool_unsigned_char___::_)(Windows::Foundation::IAsyncOperation_bool____enum_ABI::Windows::Foundation::AsyncStatus)_::DelegateInvokeHelper_Windows::Foundation::IAsyncOperationCompletedHandler_bool___lambda_bd3c35641f5306c8094e2486c081427f___1_Windows::Foundation::IAsyncOperation_bool____enum_ABI::Windows::Foundation::AsyncStatus_::Invoke @ 0x1804EAAB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x1801A0934 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_7d871aeaf1dfcc39f2e35ad08026d9d4___ @ 0x1804E46A8 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_7d871aeaf1dfcc39f2e35ad08026d9d4.c)
 *     wil::details::lambda_call__lambda_49f0d603c537ac1ec5e9185e8119d3f7___::_lambda_call__lambda_49f0d603c537ac1ec5e9185e8119d3f7___ @ 0x1804E5BD0 (wil--details--lambda_call__lambda_49f0d603c537ac1ec5e9185e8119d3f7___--_lambda_call__lambda_49f0.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::IAsyncOperationCompletedHandler_impl_Windows::Foundation::Internal::AggregateType_bool_unsigned_char___::___Windows::Foundation::IAsyncOperation_bool____enum_ABI::Windows::Foundation::AsyncStatus__::DelegateInvokeHelper_Windows::Foundation::IAsyncOperationCompletedHandler_bool___lambda_bd3c35641f5306c8094e2486c081427f___1_Windows::Foundation::IAsyncOperation_bool____enum_ABI::Windows::Foundation::AsyncStatus_::Invoke(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rdi
  DWORD CurrentThreadId; // eax
  unsigned int v4; // ecx
  int v5; // eax
  unsigned int v6; // ebx
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h] BYREF
  char v10; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)&v8 = &v12;
  v9 = v2;
  *((_QWORD *)&v8 + 1) = a1 + 32;
  v12 = a2;
  v10 = 1;
  CurrentThreadId = GetCurrentThreadId();
  v5 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_7d871aeaf1dfcc39f2e35ad08026d9d4___(
         v4,
         CurrentThreadId,
         &v8);
  v6 = v5;
  if ( v5 >= 0 )
  {
    *(_BYTE *)(v2 + 573) = 0;
    return 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3E1,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)v5);
    wil::details::lambda_call__lambda_49f0d603c537ac1ec5e9185e8119d3f7___::_lambda_call__lambda_49f0d603c537ac1ec5e9185e8119d3f7___(&v9);
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot(v6);
  }
  return v6;
}
