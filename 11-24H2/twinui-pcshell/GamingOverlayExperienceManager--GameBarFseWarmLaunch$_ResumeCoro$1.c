/*
 * XREFs of GamingOverlayExperienceManager::GameBarFseWarmLaunch$_ResumeCoro$1 @ 0x18034D4B0
 * Callers:
 *     GamingOverlayExperienceManager::GameBarFseWarmLaunch$_InitCoro$2 @ 0x18034D450 (GamingOverlayExperienceManager--GameBarFseWarmLaunch$_InitCoro$2.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1801950E4 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?await_suspend@awaitable@?1??resume_background@winrt@@YA@XZ@QEBAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x1802135EC (-await_suspend@awaitable@-1--resume_background@winrt@@YA@XZ@QEBAXU-$coroutine_handle@X@experimen.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1timespan_awaiter@impl@winrt@@QEAA@XZ @ 0x18032D458 (--1timespan_awaiter@impl@winrt@@QEAA@XZ.c)
 *     ?await_resume@timespan_awaiter@impl@winrt@@QEAAXXZ @ 0x180335A08 (-await_resume@timespan_awaiter@impl@winrt@@QEAAXXZ.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUWindowTabHost@implementation@Shell@Internal@Windows@2@_K@experimental@std@@@timespan_awaiter@impl@winrt@@QEAAXU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUWindowTabHost@implementation@Shell@Internal@Windows@2@_K@experimental@std@@@experimental@std@@@Z @ 0x1803449EC (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAUWindowTabHost@impl.c)
 *     ??$com_weak_query@PEAVGamingOverlayExperienceManager@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@0@$$QEAPEAVGamingOverlayExperienceManager@@@Z @ 0x180344EEC (--$com_weak_query@PEAVGamingOverlayExperienceManager@@@wil@@YA-AV-$com_ptr_t@UIWeakReference@@Ue.c)
 *     ??$query@UIInspectable@@@weak_query_policy@details@wil@@SAJPEAUIWeakReference@@PEAPEAUIInspectable@@@Z @ 0x180345C20 (--$query@UIInspectable@@@weak_query_policy@details@wil@@SAJPEAUIWeakReference@@PEAPEAUIInspectab.c)
 *     ?LaunchGameBar@GamingOverlayExperienceManager@@AEAAJPEBGW4_BCASTDVR_COMMAND@@@Z @ 0x180354038 (-LaunchGameBar@GamingOverlayExperienceManager@@AEAAJPEBGW4_BCASTDVR_COMMAND@@@Z.c)
 *     ?IsLegacyNexusEnabled@NexusPolicyManager@@QEBA_NXZ @ 0x1803698F8 (-IsLegacyNexusEnabled@NexusPolicyManager@@QEBA_NXZ.c)
 */

// Hidden C++ exception states: #wind=4 #try_helpers=1
void __fastcall GamingOverlayExperienceManager::GameBarFseWarmLaunch__ResumeCoro_1(char *a1)
{
  __int64 v2; // rcx
  void *v3; // r8
  NexusPolicyManager *v4; // rcx
  unsigned int v5; // r14d
  unsigned int *v6; // rsi
  __int64 v7; // rdx
  const wchar_t *v8; // rdx
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  try
  {
    switch ( *((_WORD *)a1 + 4) )
    {
      case 0xFFFF:
      case 3:
        goto LABEL_23;
      case 2:
        *((_QWORD *)a1 + 2) = 0LL;
        *((_QWORD *)a1 + 3) = *(_QWORD *)(a1 + 97);
        wil::com_weak_query<GamingOverlayExperienceManager *>((__int64 *)a1 + 2, (__int64 *)a1 + 3);
        a1[32] = 0;
        *((_WORD *)a1 + 4) = 4;
        `winrt::resume_background'::`2'::awaitable::await_suspend(v2, (void (*)(void *, void *))a1, v3);
        return;
      case 4:
        v4 = *(NexusPolicyManager **)(*(_QWORD *)(a1 + 97) + 1040LL);
        if ( v4 && NexusPolicyManager::IsLegacyNexusEnabled(v4) )
          goto LABEL_7;
        if ( *(_DWORD *)(a1 + 105) )
          goto LABEL_15;
        v5 = 10;
        v6 = (unsigned int *)(a1 + 36);
        *((_DWORD *)a1 + 9) = 0;
        if ( SHRegGetDWORD(
               HKEY_CURRENT_USER,
               L"Software\\Microsoft\\GameBar",
               L"FseWarmLaunchDelaySeconds",
               (unsigned int *)a1 + 9) < 0
          || (v5 = *v6) != 0 )
        {
          v7 = 10000000LL * v5;
          *((_QWORD *)a1 + 5) = 0LL;
          *((_QWORD *)a1 + 6) = 0LL;
          *((_QWORD *)a1 + 7) = v7;
          *((_QWORD *)a1 + 8) = 0LL;
          *((_DWORD *)a1 + 18) = 0;
          if ( v7 )
          {
            *((_WORD *)a1 + 4) = 6;
            winrt::impl::timespan_awaiter::await_suspend<std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::implementation::WindowTabHost *,unsigned __int64>::promise_type>(
              (winrt::impl::timespan_awaiter *)(a1 + 40),
              (__int64)a1);
            return;
          }
LABEL_14:
          winrt::impl::timespan_awaiter::await_resume((winrt::impl::timespan_awaiter *)(a1 + 40));
          winrt::impl::timespan_awaiter::~timespan_awaiter((winrt::cancellable_promise **)a1 + 5);
LABEL_15:
          *((_QWORD *)a1 + 10) = 0LL;
          if ( *((_QWORD *)a1 + 2) )
            wil::details::weak_query_policy::query<IInspectable>(*((_QWORD *)a1 + 2), (_QWORD *)a1 + 10);
          if ( *((_QWORD *)a1 + 10) )
          {
            v8 = L"ms-gamebar://launch/?gamingFullScreen=shellReady";
            if ( *(_DWORD *)(a1 + 105) )
              v8 = L"ms-gamebar://launch/?gamingFullScreen=deviceUnlock";
            v9 = GamingOverlayExperienceManager::LaunchGameBar(*(_QWORD *)(a1 + 97), v8, 7LL);
            if ( v9 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x1823,
                (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
                (const char *)(unsigned int)v9);
          }
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)a1 + 10);
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)a1 + 2);
        }
        else
        {
LABEL_7:
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)a1 + 2);
        }
LABEL_23:
        if ( *((_WORD *)a1 + 5) )
          operator delete(a1, (const struct std::nothrow_t *)0x80);
        break;
      case 5:
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)a1 + 2);
        goto LABEL_23;
      case 6:
        goto LABEL_14;
      case 7:
        winrt::impl::timespan_awaiter::~timespan_awaiter((winrt::cancellable_promise **)a1 + 5);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)a1 + 2);
        goto LABEL_23;
      default:
        __debugbreak();
        return;
    }
  }
  catch ( ... )
  {
    *((_WORD *)a1 + 4) = -1;
    std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *>::promise_type::unhandled_exception((winrt *)0xFFFFFFFFLL);
  }
}
