/*
 * XREFs of ??$call@P6A?AU?$IAsyncOperation@UIDataSourceAdapter@Multitasking@ComposableShell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@AEBUITaskGroupDataSourceAdapterStatics@TaskGroups@Shell@Internal@34@@Z@?$factory_cache_entry@UTaskGroupDataSourceAdapter@TaskGroups@Shell@Internal@Windows@winrt@@UITaskGroupDataSourceAdapterStatics@23456@@impl@winrt@@QEAA?A_P$$QEAP6A?AU?$IAsyncOperation@UIDataSourceAdapter@Multitasking@ComposableShell@Internal@Windows@winrt@@@Foundation@Windows@2@AEBUITaskGroupDataSourceAdapterStatics@TaskGroups@Shell@Internal@52@@Z@Z @ 0x1801EE054
 * Callers:
 *     ?CreateInstanceAsync@TaskGroupDataSourceAdapter@TaskGroups@Shell@Internal@Windows@winrt@@SA@XZ @ 0x1802B81AC (-CreateInstanceAsync@TaskGroupDataSourceAdapter@TaskGroups@Shell@Internal@Windows@winrt@@SA@XZ.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1802DB14D (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     ??$get_activation_factory@UITaskGroupDataSourceAdapterStatics@TaskGroups@Shell@Internal@Windows@winrt@@@winrt@@YA?AUITaskGroupDataSourceAdapterStatics@TaskGroups@Shell@Internal@Windows@0@AEBUhstring@param@0@@Z @ 0x18057CE58 (--$get_activation_factory@UITaskGroupDataSourceAdapterStatics@TaskGroups@Shell@Internal@Windows@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::impl::factory_cache_entry<winrt::Windows::Internal::Shell::TaskGroups::TaskGroupDataSourceAdapter,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::call<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Internal::ComposableShell::Multitasking::IDataSourceAdapter> (*)(winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics const &)>(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 *),
        __int64 a2,
        void (__fastcall **a3)(__int64, __int64 *))
{
  __int64 v6[2]; // [rsp+28h] [rbp-38h] BYREF
  _DWORD *v7; // [rsp+38h] [rbp-28h] BYREF
  _DWORD v8[4]; // [rsp+40h] [rbp-20h] BYREF
  const wchar_t *v9; // [rsp+50h] [rbp-10h]
  void (__fastcall ***v10)(_QWORD, __int64 *, __int64 *); // [rsp+80h] [rbp+20h] BYREF
  __int64 v11; // [rsp+98h] [rbp+38h] BYREF

  v10 = a1;
  if ( aWindowsInterna_3[60] )
    abort();
  v8[0] = 1;
  v8[1] = 60;
  v9 = L"Windows.Internal.Shell.TaskGroups.TaskGroupDataSourceAdapter";
  v7 = v8;
  winrt::get_activation_factory<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>(
    &v10,
    &v7);
  if ( v10 && (v11 = 0LL, (**v10)(v10, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v11), (v6[0] = v11) != 0) )
  {
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v6);
    v6[1] = (__int64)&qword_1808CB3B8;
    _InterlockedIncrement64(&qword_1808CB3B8);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::Shell::TaskGroups::TaskGroupDataSourceAdapter,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>,
            (signed __int64)v10,
            0LL) )
    {
      v10 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1808CB3C0);
    }
    (*a3)(
      a2,
      &winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::Shell::TaskGroups::TaskGroupDataSourceAdapter,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>);
    _InterlockedDecrement64(&qword_1808CB3B8);
  }
  else
  {
    (*a3)(a2, (__int64 *)&v10);
  }
  if ( v10 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v10);
  return a2;
}
