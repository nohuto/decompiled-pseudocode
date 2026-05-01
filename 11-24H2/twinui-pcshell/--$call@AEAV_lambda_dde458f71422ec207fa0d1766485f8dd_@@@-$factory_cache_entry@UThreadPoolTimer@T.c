/*
 * XREFs of ??$call@AEAV_lambda_dde458f71422ec207fa0d1766485f8dd_@@@?$factory_cache_entry@UThreadPoolTimer@Threading@System@Windows@winrt@@UIThreadPoolTimerStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_dde458f71422ec207fa0d1766485f8dd_@@@Z @ 0x1805A9430
 * Callers:
 *     ?EnsureUpdateTimer@InteractionTracker@SnapInteraction@@AEAAXAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1802022EC (-EnsureUpdateTimer@InteractionTracker@SnapInteraction@@AEAAXAEBV-$unique_any_t@V-$unique_storage.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1801CAB80 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     ??R_lambda_dde458f71422ec207fa0d1766485f8dd_@@QEBA@AEBUIThreadPoolTimerStatics@Threading@System@Windows@winrt@@@Z @ 0x1802B6E24 (--R_lambda_dde458f71422ec207fa0d1766485f8dd_@@QEBA@AEBUIThreadPoolTimerStatics@Threading@System@.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1802DB14D (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     ??$get_activation_factory@UIThreadPoolTimerStatics@Threading@System@Windows@winrt@@@winrt@@YA?AUIThreadPoolTimerStatics@Threading@System@Windows@0@AEBUhstring@param@0@@Z @ 0x1803455C0 (--$get_activation_factory@UIThreadPoolTimerStatics@Threading@System@Windows@winrt@@@winrt@@YA-AU.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::impl::factory_cache_entry<winrt::Windows::System::Threading::ThreadPoolTimer,winrt::Windows::System::Threading::IThreadPoolTimerStatics>::call<_lambda_dde458f71422ec207fa0d1766485f8dd_ &>(
        __int64 *a1,
        _QWORD *a2,
        _QWORD **a3)
{
  __int64 v6[2]; // [rsp+28h] [rbp-48h] BYREF
  __int64 v7[2]; // [rsp+38h] [rbp-38h] BYREF
  __int64 v8[5]; // [rsp+48h] [rbp-28h] BYREF
  __int64 *v9; // [rsp+80h] [rbp+10h] BYREF
  __int64 v10; // [rsp+98h] [rbp+28h] BYREF

  v9 = a1;
  v7[0] = (__int64)L"Windows.System.Threading.ThreadPoolTimer";
  v7[1] = 40LL;
  winrt::param::hstring::hstring((__int64)v8, v7);
  winrt::get_activation_factory<winrt::Windows::System::Threading::IThreadPoolTimerStatics>(&v9, v8);
  if ( v9
    && (v10 = 0LL,
        (*(void (__fastcall **)(__int64 *, __int64 *, __int64 *))*v9)(
          v9,
          &winrt::impl::guid_v<winrt::impl::IAgileObject>,
          &v10),
        (v6[0] = v10) != 0) )
  {
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v6);
    v6[1] = (__int64)&qword_1808CA538;
    _InterlockedIncrement64(&qword_1808CA538);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::System::Threading::ThreadPoolTimer,winrt::Windows::System::Threading::IThreadPoolTimerStatics>,
            (signed __int64)v9,
            0LL) )
    {
      v9 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1808CA540);
    }
    _lambda_dde458f71422ec207fa0d1766485f8dd_::operator()(
      a3,
      a2,
      (__int64 **)&winrt::impl::factory_cache_entry_v<winrt::Windows::System::Threading::ThreadPoolTimer,winrt::Windows::System::Threading::IThreadPoolTimerStatics>);
    _InterlockedDecrement64(&qword_1808CA538);
  }
  else
  {
    _lambda_dde458f71422ec207fa0d1766485f8dd_::operator()(a3, a2, &v9);
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v9);
  return a2;
}
