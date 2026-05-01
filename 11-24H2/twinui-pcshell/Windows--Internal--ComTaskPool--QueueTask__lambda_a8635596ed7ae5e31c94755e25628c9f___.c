/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_a8635596ed7ae5e31c94755e25628c9f___ @ 0x1801CA7CC
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostWindow_winrt::Windows::Internal::Shell::XamlExplorerHost::ActivationChangedEventArgs___lambda_abf37a923c4e39d61bd96b31f9d5bb1d___::Invoke @ 0x1801CA6F0 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--Internal--Sh.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180136920 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a8635596ed7ae5e31c94755e25628c9f_____lambda_a8635596ed7ae5e31c94755e25628c9f___ @ 0x1801CA858 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_a8635596ed7ae.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 Windows::Internal::ComTaskPool::QueueTask__lambda_a8635596ed7ae5e31c94755e25628c9f___()
{
  __int64 *v0; // rax
  __int64 v1; // rbx
  volatile signed __int32 *v2; // rcx
  DWORD CurrentThreadId; // eax
  unsigned int v4; // edi
  volatile signed __int32 *v6; // [rsp+50h] [rbp+18h] BYREF

  v0 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a8635596ed7ae5e31c94755e25628c9f_____lambda_a8635596ed7ae5e31c94755e25628c9f___(&v6);
  v1 = *v0;
  *v0 = 0LL;
  v2 = v6;
  if ( v6 )
  {
    v6 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(v2);
  }
  CurrentThreadId = GetCurrentThreadId();
  v4 = SHTaskPoolQueueTask(2LL, 0LL, CurrentThreadId);
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return v4;
}
