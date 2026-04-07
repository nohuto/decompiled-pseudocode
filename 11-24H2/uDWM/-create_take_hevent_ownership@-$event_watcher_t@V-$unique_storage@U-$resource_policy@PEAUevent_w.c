/*
 * XREFs of ?create_take_hevent_ownership@?$event_watcher_t@V?$unique_storage@U?$resource_policy@PEAUevent_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_event_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@AEAAJPEAX$$QEAV?$function@$$A6AXXZ@wistd@@@Z @ 0x180079008
 * Callers:
 *     ?create@?$event_watcher_t@V?$unique_storage@U?$resource_policy@PEAUevent_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_event_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEAAJPEAX$$QEAV?$function@$$A6AXXZ@wistd@@@Z @ 0x180078F48 (-create@-$event_watcher_t@V-$unique_storage@U-$resource_policy@PEAUevent_watcher_state@details@w.c)
 * Callees:
 *     ??0?$function@$$A6AXXZ@wistd@@QEAA@$$QEAV01@@Z @ 0x1800791C8 (--0-$function@$$A6AXXZ@wistd@@QEAA@$$QEAV01@@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x180079228 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180095474 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18009564C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180096A00 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0last_error_context@wil@@QEAA@XZ @ 0x18009DE70 (--0last_error_context@wil@@QEAA@XZ.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x18009E0E8 (--1last_error_context@wil@@QEAA@XZ.c)
 *     ??_Gevent_watcher_state@details@wil@@QEAAPEAXI@Z @ 0x1800A3130 (--_Gevent_watcher_state@details@wil@@QEAAPEAXI@Z.c)
 *     ?Destroy@?$DestroyThreadPoolWait@$0A@@details@wil@@SAXPEAU_TP_WAIT@@@Z @ 0x1800A31CC (-Destroy@-$DestroyThreadPoolWait@$0A@@details@wil@@SAXPEAU_TP_WAIT@@@Z.c)
 *     ?delete_event_watcher_state@details@wil@@YAXPEAUevent_watcher_state@12@@Z @ 0x1800A4534 (-delete_event_watcher_state@details@wil@@YAXPEAUevent_watcher_state@12@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall wil::event_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::event_watcher_state *,void (*)(wil::details::event_watcher_state *),&void wil::details::delete_event_watcher_state(wil::details::event_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::event_watcher_state *,wil::details::event_watcher_state *,0,std::nullptr_t>>,wil::err_returncode_policy>::create_take_hevent_ownership(
        wil::details **a1,
        const struct std::nothrow_t *a2,
        __int64 a3,
        const char *a4)
{
  wil::details *v5; // rbx
  void *v7; // rax
  void *v8; // rdi
  wil::details *v9; // rsi
  void *v10; // rdx
  PTP_WAIT ThreadpoolWait; // rsi
  const char *v13; // r9
  struct _TP_WAIT *v14; // rbp
  unsigned int LastError; // esi
  unsigned int v16; // edx
  void *v17; // rdx
  wil::details *v18; // rsi
  void *v19; // rdx
  struct wil::details::event_watcher_state *v20; // rdx
  int v21; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  const struct std::nothrow_t *v23; // [rsp+48h] [rbp+10h] BYREF
  void *v24; // [rsp+58h] [rbp+20h]

  v5 = a2;
  if ( !a2 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xF67,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/resource.h",
      a4);
  v23 = a2;
  v7 = operator new[](0x88uLL, a2);
  v8 = v7;
  v24 = v7;
  if ( v7 )
  {
    wistd::function<void (void)>::function<void (void)>(v7, a3);
    *((_QWORD *)v8 + 15) = v5;
    v5 = 0LL;
    *((_QWORD *)v8 + 16) = 0LL;
    v9 = 0LL;
  }
  else
  {
    v8 = 0LL;
    v9 = v5;
  }
  if ( v8 )
  {
    ThreadpoolWait = CreateThreadpoolWait(
                       wil::event_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::event_watcher_state *,void (*)(wil::details::event_watcher_state *),&void wil::details::delete_event_watcher_state(wil::details::event_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::event_watcher_state *,wil::details::event_watcher_state *,0,std::nullptr_t>>,wil::err_returncode_policy>::wait_callback,
                       v8,
                       0LL);
    v14 = (struct _TP_WAIT *)*((_QWORD *)v8 + 16);
    if ( v14 )
    {
      wil::last_error_context::last_error_context((wil::last_error_context *)&v23);
      wil::details::DestroyThreadPoolWait<0>::Destroy(v14);
      wil::last_error_context::~last_error_context((wil::last_error_context *)&v23);
    }
    *((_QWORD *)v8 + 16) = ThreadpoolWait;
    if ( ThreadpoolWait )
    {
      v18 = *a1;
      if ( *a1 )
      {
        wil::last_error_context::last_error_context((wil::last_error_context *)&v23);
        wil::details::delete_event_watcher_state(v18, v20);
        wil::last_error_context::~last_error_context((wil::last_error_context *)&v23);
      }
      *a1 = (wil::details *)v8;
      SetThreadpoolWait(*((PTP_WAIT *)v8 + 16), *((HANDLE *)v8 + 15), 0LL);
      if ( v5 )
        wil::details::CloseHandle(v5, v19);
      return 0LL;
    }
    else
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0xF6E,
                    (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/resource.h",
                    v13);
      wil::details::event_watcher_state::`scalar deleting destructor'((wil::details::event_watcher_state *)v8, v16);
      if ( v5 )
        wil::details::CloseHandle(v5, v17);
      return LastError;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF6B,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/resource.h",
      (const char *)0x8007000ELL,
      v21);
    if ( v9 )
      wil::details::CloseHandle(v5, v10);
    return 2147942414LL;
  }
}
