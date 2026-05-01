/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::EventHandler_winrt::Windows::Internal::Shell::RemoteSystemDisplayInfoChangedEventArgs___lambda_d2929146ab183b5cd17811f33a4bdab8___::Invoke @ 0x18065A9D0
 * Callers:
 *     <none>
 * Callees:
 *     ?BackupDeveloperModeAsync@?$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7@UIAppListBackupExtensionStatics7@UserProfile@System@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x180052A5C (-BackupDeveloperModeAsync@-$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics.c)
 *     ?CreateInstanceAsync@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics@UITaskGroupDataSourceAdapterStatics@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180052F5C (-CreateInstanceAsync@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStat.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1801BCA28 (-unconditional_release_ref@-$com_ptr@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUr.c)
 *     ?get@?$weak_ref@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEBA@XZ @ 0x18065D734 (-get@-$weak_ref@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@@winrt@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::EventHandler_winrt::Windows::Internal::Shell::RemoteSystemDisplayInfoChangedEventArgs___lambda_d2929146ab183b5cd17811f33a4bdab8___::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  _QWORD *v3; // rbx
  __int64 v4; // rdi
  void (__fastcall *v5)(__int64, _QWORD *, _QWORD *); // r14
  _QWORD *v6; // rsi
  _QWORD *v7; // rax
  __int64 result; // rax
  volatile signed __int32 *v9[5]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD *v10; // [rsp+50h] [rbp+8h] BYREF
  __int64 *v11; // [rsp+60h] [rbp+18h] BYREF
  volatile signed __int32 *v12; // [rsp+68h] [rbp+20h] BYREF

  v11 = a3;
  winrt::weak_ref<winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager>::get(a1 + 16, &v10);
  try
  {
    v3 = v10;
    if ( v10 )
    {
      v4 = v10[5];
      v5 = *(void (__fastcall **)(__int64, _QWORD *, _QWORD *))(*(_QWORD *)v4 + 56LL);
      v6 = winrt::impl::consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7<winrt::WindowsUdk::System::UserProfile::IAppListBackupExtensionStatics7>::BackupDeveloperModeAsync(
             &v11,
             v9);
      v7 = winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
             &v11,
             &v12);
      v5(v4, v7, v6);
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v12);
      winrt::handle_type<winrt::impl::hstring_traits>::close(v9);
    }
    if ( v3 )
      winrt::com_ptr<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref(&v10);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v10);
  }
  return result;
}
