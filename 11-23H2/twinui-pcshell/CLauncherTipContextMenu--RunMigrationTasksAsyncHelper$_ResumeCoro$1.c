/*
 * XREFs of CLauncherTipContextMenu::RunMigrationTasksAsyncHelper$_ResumeCoro$1 @ 0x180258100
 * Callers:
 *     CLauncherTipContextMenu::RunMigrationTasksAsyncHelper$_InitCoro$2 @ 0x180258048 (CLauncherTipContextMenu--RunMigrationTasksAsyncHelper$_InitCoro$2.c)
 * Callees:
 *     ?final_suspend@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVXamlLauncher@@UDismissShellViewRequestedEventArgs@Shell@UI@WindowsUdk@2@@experimental@std@@QEBA?AUsuspend_never@34@XZ @ 0x180059E08 (-final_suspend@promise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAVXamlLauncher@@UDismis.c)
 *     ?await_ready@?$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ @ 0x18007386C (-await_ready@-$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1800A8AF0 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?await_resume@?$notify_awaiter@Uawaitable@?1??resume_background@winrt@@YA@XZ@@impl@winrt@@QEAA@XZ @ 0x1801BA18C (-await_resume@-$notify_awaiter@Uawaitable@-1--resume_background@winrt@@YA@XZ@@impl@winrt@@QEAA@X.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@2@@experimental@std@@@?$notify_awaiter@Uawaitable@?1??resume_background@winrt@@YA@XZ@@impl@winrt@@QEAA?A_PU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@2@@experimental@std@@@experimental@std@@@Z @ 0x1802D2E70 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@U-$IAsyncOperation@UIR.c)
 *     ?SHRegSetDWORD@@YAJPEAUHKEY__@@PEBG1K@Z @ 0x1803DFDA4 (-SHRegSetDWORD@@YAJPEAUHKEY__@@PEBG1K@Z.c)
 *     ?CleanupObsoleteLinks@CLauncherTipContextMenu@@AEAAJXZ @ 0x1806CC758 (-CleanupObsoleteLinks@CLauncherTipContextMenu@@AEAAJXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_WinXDeleteFileHang_40463712@@@details@wil@@QEAA_NXZ @ 0x1806DFB54 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_WinXDeleteFileHang_4046.c)
 */

// Hidden C++ exception states: #try_helpers=1
void __fastcall CLauncherTipContextMenu::RunMigrationTasksAsyncHelper__ResumeCoro_1(__int64 a1)
{
  _DWORD *v2; // rsi
  __int64 v3; // rcx
  CLauncherTipContextMenu *v4; // rcx
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  switch ( *(_WORD *)(a1 + 8) )
  {
    case 0xFFFF:
    case 3:
    case 5:
      goto LABEL_15;
    case 2:
      v2 = (_DWORD *)(a1 + 16);
      *(_DWORD *)(a1 + 16) = 0;
      if ( SHRegGetDWORD(
             HKEY_CURRENT_USER,
             L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Advanced",
             L"WinXMigrationLevel",
             (unsigned int *)(a1 + 16)) )
      {
        *v2 = 0;
      }
      if ( *v2 )
        goto LABEL_14;
      *(_BYTE *)(a1 + 20) = 0;
      *(_QWORD *)(a1 + 24) = a1 + 20;
      if ( winrt::impl::notify_awaiter<winrt::apartment_context &>::await_ready() )
      {
LABEL_8:
        _await_resume___notify_awaiter_Uawaitable__1__resume_background_winrt__YA_XZ__impl_winrt__QEAA_XZ();
        if ( !*(_DWORD *)(a1 + 16) )
        {
          if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_WinXDeleteFileHang_40463712>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_WinXDeleteFileHang_40463712>::GetImpl'::`2'::impl) )
            SHRegSetDWORD(
              HKEY_CURRENT_USER,
              L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Advanced",
              L"WinXMigrationLevel",
              1u);
          v5 = CLauncherTipContextMenu::CleanupObsoleteLinks(v4);
          if ( v5 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x1CE,
              (int)"pcshell\\twinui\\launchertipcontextmenu\\lib\\launchertipcontextmenu.cpp",
              (const char *)(unsigned int)v5);
        }
        SHRegSetDWORD(
          HKEY_CURRENT_USER,
          L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Advanced",
          L"WinXMigrationLevel",
          1u);
LABEL_14:
        std::experimental::coroutine_traits<winrt::fire_and_forget,XamlLauncher *,winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs>::promise_type::final_suspend(
          a1,
          (_BYTE *)(a1 + 32));
LABEL_15:
        if ( *(_WORD *)(a1 + 10) )
          operator delete((void *)a1);
      }
      else
      {
        *(_WORD *)(a1 + 8) = 4;
        ___await_suspend_Upromise_type___coroutine_traits_Ufire_and_forget_winrt__U__IAsyncOperation_UIRandomAccessStreamReference_Streams_Storage_Windows_winrt___Foundation_Windows_2__experimental_std_____notify_awaiter_Uawaitable__1__resume_background_winrt__YA_XZ__impl_winrt__QEAA_A_PU__coroutine_handle_Upromise_type___coroutine_traits_Ufire_and_forget_winrt__U__IAsyncOperation_UIRandomAccessStreamReference_Streams_Storage_Windows_winrt___Foundation_Windows_2__experimental_std___experimental_std___Z(
          v3,
          a1);
      }
      return;
    case 4:
      goto LABEL_8;
    default:
      __debugbreak();
      return;
  }
}
