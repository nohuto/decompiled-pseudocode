/*
 * XREFs of Microsoft::WRL::Callback_Windows::Foundation::IEventHandler_bool___lambda_701f9db595b52d3fc136544516ee8948___ @ 0x1800E2AE0
 * Callers:
 *     ?EnsureAmbientManager@LampArrayRawInputProvider@@AEAAJXZ @ 0x1800E352C (-EnsureAmbientManager@LampArrayRawInputProvider@@AEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E848 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IEventHandler_impl_Windows::Foundation::Internal::AggregateType_bool_unsigned_char___::_)(IInspectable___unsigned_char)_::DelegateInvokeHelper_Windows::Foundation::IEventHandler_bool___lambda_701f9db595b52d3fc136544516ee8948___1_IInspectable___unsigned_char_::DelegateInvokeHelper_Windows::Foundation::IEventHandler_bool___lambda_701f9db595b52d3fc136544516ee8948___1_IInspectable___unsigned_char_ @ 0x1800E2DC0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IEventHandler_impl.c)
 *     Microsoft::WRL::Details::MakeAllocator_Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::System::IDispatcherQueueHandler::_)(void)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::System::IDispatcherQueueHandler_Microsoft::WRL::FtmBase___lambda_be14e41fc69e48f10010ada4f55a452e___1___::_MakeAllocator_Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::System::IDispatcherQueueHandler::_)(void)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::System::IDispatcherQueueHandler_Microsoft::WRL::FtmBase___lambda_be14e41fc69e48f10010ada4f55a452e___1___ @ 0x1800E2E98 (Microsoft--WRL--Details--MakeAllocator_Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_.c)
 */

__int64 *__fastcall Microsoft::WRL::Callback_Windows::Foundation::IEventHandler_bool___lambda_701f9db595b52d3fc136544516ee8948___(
        __int64 *a1,
        __int64 a2)
{
  __int64 v4; // rbx
  void *v5; // rax
  __int64 v6; // rax
  __int64 *result; // rax
  void *v8; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  v5 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v5;
  if ( v5 )
  {
    v6 = Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::IEventHandler_impl_Windows::Foundation::Internal::AggregateType_bool_unsigned_char___::___IInspectable___unsigned_char__::DelegateInvokeHelper_Windows::Foundation::IEventHandler_bool___lambda_701f9db595b52d3fc136544516ee8948___1_IInspectable___unsigned_char_::DelegateInvokeHelper_Windows::Foundation::IEventHandler_bool___lambda_701f9db595b52d3fc136544516ee8948___1_IInspectable___unsigned_char_(
           v5,
           a2);
    v8 = 0LL;
    v4 = v6;
  }
  Microsoft::WRL::Details::MakeAllocator_Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::System::IDispatcherQueueHandler::___void__::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::System::IDispatcherQueueHandler_Microsoft::WRL::FtmBase___lambda_be14e41fc69e48f10010ada4f55a452e___1___::_MakeAllocator_Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::System::IDispatcherQueueHandler::___void__::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::System::IDispatcherQueueHandler_Microsoft::WRL::FtmBase___lambda_be14e41fc69e48f10010ada4f55a452e___1___(&v8);
  result = a1;
  *a1 = v4;
  return result;
}
