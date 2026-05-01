/*
 * XREFs of ?Invoke@?$delegate@U?$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@UWindowSnapEventArgs@23456@@Foundation@Windows@winrt@@V_lambda_53adb494cd4b0a5d81825cd29fd47ad5_@@@impl@winrt@@UEAAHPEAXUstruct_Windows_Internal_Shell_TaskGroups_WindowSnapEventArgs@23@@Z @ 0x180588090
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z @ 0x180050FE0 (-put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z.c)
 *     ??R?$AsyncOperationProgressHandler@UMeetAndChatInstallResult@MeetAndChat@Shell@Internal@Windows@winrt@@UMeetAndChatInstallProgress@23456@@Foundation@Windows@winrt@@QEBA@AEBU?$IAsyncOperationWithProgress@UMeetAndChatInstallResult@MeetAndChat@Shell@Internal@Windows@winrt@@UMeetAndChatInstallProgress@23456@@123@AEBUMeetAndChatInstallProgress@MeetAndChat@Shell@Internal@23@@Z @ 0x18026F4DC (--R-$AsyncOperationProgressHandler@UMeetAndChatInstallResult@MeetAndChat@Shell@Internal@Windows@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::WindowSnapEventArgs>,_lambda_53adb494cd4b0a5d81825cd29fd47ad5_>::Invoke(
        __int64 a1,
        struct IUnknown *a2,
        __int64 *a3)
{
  __int64 v5; // rdi
  void (__fastcall *v6)(__int64, __int64, void **); // rbx
  void **v7; // rax
  __int64 result; // rax
  __int64 *v9; // [rsp+20h] [rbp-28h] BYREF
  struct IUnknown *v10; // [rsp+28h] [rbp-20h] BYREF

  v10 = a2;
  v9 = 0LL;
  v5 = *(_QWORD *)(a1 + 16);
  v6 = *(void (__fastcall **)(__int64, __int64, void **))(*(_QWORD *)v5 + 24LL);
  v7 = winrt::put_abi((winrt *)&v9, a2);
  v6(v5, a1 + 24, v7);
  try
  {
    winrt::Windows::Foundation::AsyncOperationProgressHandler<winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallResult,winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallProgress>::operator()(
      &v9,
      (__int64 *)&v10,
      a3);
    if ( v9 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v9);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v9);
  }
  return result;
}
