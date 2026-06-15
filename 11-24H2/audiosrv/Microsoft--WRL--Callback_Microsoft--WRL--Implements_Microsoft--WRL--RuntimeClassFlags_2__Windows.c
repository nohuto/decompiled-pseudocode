/*
 * XREFs of Microsoft::WRL::Callback_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::System::UserWatcher___Windows::System::UserChangedEventArgs____Microsoft::WRL::FtmBase___lambda_4accf571eb38f7e0aa8a7d61bf2f02b1___ @ 0x18014EF10
 * Callers:
 *     ?RegisterForUserWatcherNotifications@AtmosCheck@@AEAAJXZ @ 0x1801522E4 (-RegisterForUserWatcherNotifications@AtmosCheck@@AEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A42B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::System::UserWatcher___Windows::System::IUserWatcher____Windows::Foundation::Internal::AggregateType_Windows::System::UserChangedEventArgs___Windows::System::IUserChangedEventArgs_____::_)(Windows::System::IUserWatcher___Windows::System::IUserChangedEventArgs__)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::System::UserWatcher___Windows::System::UserChangedEventArgs____Microsoft::WRL::FtmBase___lambda_4accf571eb38f7e0aa8a7d61bf2f02b1___1_Windows::System::IUserWatcher___Windows::System::IUserChangedEventArgs___::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::System::UserWatcher___Windows::System::UserChangedEventArgs____Microsoft::WRL::FtmBase___lambda_4accf571eb38f7e0aa8a7d61bf2f02b1___1_Windows::System::IUserWatcher___Windows::System::IUserChangedEventArgs___ @ 0x18014F89C (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_18014F89C.c)
 *     Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f5f4f75dc837a2f22584ae1b4b94d09e_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f5f4f75dc837a2f22584ae1b4b94d09e_____ @ 0x18014FA9C (Microsoft--WRL--Details--MakeAllocator_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_f5f4.c)
 */

__int64 *__fastcall Microsoft::WRL::Callback_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::System::UserWatcher___Windows::System::UserChangedEventArgs____Microsoft::WRL::FtmBase___lambda_4accf571eb38f7e0aa8a7d61bf2f02b1___(
        __int64 *a1,
        __int64 a2)
{
  __int64 v4; // rbx
  LPVOID v5; // rax
  __int64 v6; // rax
  __int64 *result; // rax
  LPVOID v8; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  v5 = operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v5;
  if ( v5 )
  {
    v6 = Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::System::UserWatcher___Windows::System::IUserWatcher____Windows::Foundation::Internal::AggregateType_Windows::System::UserChangedEventArgs___Windows::System::IUserChangedEventArgs_____::___Windows::System::IUserWatcher___Windows::System::IUserChangedEventArgs____::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::System::UserWatcher___Windows::System::UserChangedEventArgs____Microsoft::WRL::FtmBase___lambda_4accf571eb38f7e0aa8a7d61bf2f02b1___1_Windows::System::IUserWatcher___Windows::System::IUserChangedEventArgs___::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::System::UserWatcher___Windows::System::UserChangedEventArgs____Microsoft::WRL::FtmBase___lambda_4accf571eb38f7e0aa8a7d61bf2f02b1___1_Windows::System::IUserWatcher___Windows::System::IUserChangedEventArgs___(
           v5,
           a2);
    v8 = 0LL;
    v4 = v6;
  }
  Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f5f4f75dc837a2f22584ae1b4b94d09e_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f5f4f75dc837a2f22584ae1b4b94d09e_____(&v8);
  result = a1;
  *a1 = v4;
  return result;
}
