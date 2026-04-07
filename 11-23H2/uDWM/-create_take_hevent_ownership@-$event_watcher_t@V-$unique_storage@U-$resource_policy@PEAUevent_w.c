/*
 * XREFs of ?create_take_hevent_ownership@?$event_watcher_t@V?$unique_storage@U?$resource_policy@PEAUevent_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_event_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@AEAAJPEAX$$QEAV?$function@$$A6AXXZ@wistd@@@Z @ 0x18002575C
 * Callers:
 *     ?create@?$event_watcher_t@V?$unique_storage@U?$resource_policy@PEAUevent_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_event_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEAAJPEAX$$QEAV?$function@$$A6AXXZ@wistd@@@Z @ 0x180025698 (-create@-$event_watcher_t@V-$unique_storage@U-$resource_policy@PEAUevent_watcher_state@details@w.c)
 * Callees:
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1800219A8 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ??0event_watcher_state@details@wil@@QEAA@$$QEAV?$unique_any_t@V?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@2@$$QEAV?$function@$$A6AXXZ@wistd@@@Z @ 0x180025860 (--0event_watcher_state@details@wil@@QEAA@$$QEAV-$unique_any_t@V-$event_t@V-$unique_storage@U-$re.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18009B0B8 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18009D234 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_Gevent_watcher_state@details@wil@@QEAAPEAXI@Z @ 0x1800A4ABC (--_Gevent_watcher_state@details@wil@@QEAAPEAXI@Z.c)
 *     ?Destroy@?$DestroyThreadPoolWait@$0A@@details@wil@@SAXPEAU_TP_WAIT@@@Z @ 0x1800A4B10 (-Destroy@-$DestroyThreadPoolWait@$0A@@details@wil@@SAXPEAU_TP_WAIT@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall wil::event_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::event_watcher_state *,void (*)(wil::details::event_watcher_state *),&void wil::details::delete_event_watcher_state(wil::details::event_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::event_watcher_state *,wil::details::event_watcher_state *,0,std::nullptr_t>>,wil::err_returncode_policy>::create_take_hevent_ownership(
        wil::details::event_watcher_state **a1,
        wil::details *a2,
        __int64 a3,
        const char *a4)
{
  wil::details *v5; // rbx
  __int64 v7; // rax
  __int64 v8; // rsi
  PTP_WAIT ThreadpoolWait; // rbp
  const char *v10; // r9
  struct _TP_WAIT *v11; // r15
  wil::details::event_watcher_state *v12; // rbp
  void *v13; // rdx
  unsigned int v15; // edi
  void *v16; // rdx
  unsigned int v17; // edx
  DWORD LastError; // edi
  DWORD v19; // edi
  unsigned int v20; // edx
  int v21; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  wil::details *v23; // [rsp+58h] [rbp+10h] BYREF
  __int64 v24; // [rsp+68h] [rbp+20h]

  v5 = a2;
  if ( !a2 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xE4C,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/resource.h",
      a4);
  v23 = a2;
  v7 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
         WPF::g_pProcessHeap,
         136LL);
  v24 = v7;
  if ( v7 )
  {
    v8 = wil::details::event_watcher_state::event_watcher_state(v7, &v23, a3);
    v5 = v23;
  }
  else
  {
    v8 = 0LL;
  }
  if ( v8 )
  {
    ThreadpoolWait = CreateThreadpoolWait(
                       wil::event_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::event_watcher_state *,void (*)(wil::details::event_watcher_state *),&void wil::details::delete_event_watcher_state(wil::details::event_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::event_watcher_state *,wil::details::event_watcher_state *,0,std::nullptr_t>>,wil::err_returncode_policy>::wait_callback,
                       (PVOID)v8,
                       0LL);
    v11 = *(struct _TP_WAIT **)(v8 + 128);
    if ( v11 )
    {
      LastError = GetLastError();
      wil::details::DestroyThreadPoolWait<0>::Destroy(v11);
      SetLastError(LastError);
    }
    *(_QWORD *)(v8 + 128) = ThreadpoolWait;
    if ( ThreadpoolWait )
    {
      v12 = *a1;
      if ( *a1 )
      {
        v19 = GetLastError();
        wil::details::event_watcher_state::`scalar deleting destructor'(v12, v20);
        SetLastError(v19);
      }
      *a1 = (wil::details::event_watcher_state *)v8;
      SetThreadpoolWait(*(PTP_WAIT *)(v8 + 128), *(HANDLE *)(v8 + 120), 0LL);
      if ( v5 )
        wil::details::CloseHandle(v5, v13);
      return 0LL;
    }
    v15 = wil::details::in1diag3::Return_GetLastError(
            retaddr,
            (void *)0xE52,
            (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/resource.h",
            v10);
    wil::details::event_watcher_state::`scalar deleting destructor'((wil::details::event_watcher_state *)v8, v17);
  }
  else
  {
    v15 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE4F,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/resource.h",
      (const char *)0x8007000ELL,
      v21);
  }
  if ( v5 )
    wil::details::CloseHandle(v5, v16);
  return v15;
}
