/*
 * XREFs of ?create@?$event_watcher_t@V?$unique_storage@U?$resource_policy@PEAUevent_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_event_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEAAJPEAX$$QEAV?$function@$$A6AXXZ@wistd@@@Z @ 0x180078F48
 * Callers:
 *     ?CreateDetachWatcher@HolographicDriverDetectedWatcher@Mirage@Windows@@QEAAJV?$function@$$A6AXXZ@wistd@@@Z @ 0x1800968A4 (-CreateDetachWatcher@HolographicDriverDetectedWatcher@Mirage@Windows@@QEAAJV-$function@$$A6AXXZ@.c)
 *     ?CreateAttachWatcher@HolographicDriverDetectedWatcher@Mirage@Windows@@QEAAJV?$function@$$A6AXXZ@wistd@@@Z @ 0x180096944 (-CreateAttachWatcher@HolographicDriverDetectedWatcher@Mirage@Windows@@QEAAJV-$function@$$A6AXXZ@.c)
 * Callees:
 *     ?create_take_hevent_ownership@?$event_watcher_t@V?$unique_storage@U?$resource_policy@PEAUevent_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_event_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@AEAAJPEAX$$QEAV?$function@$$A6AXXZ@wistd@@@Z @ 0x180079008 (-create_take_hevent_ownership@-$event_watcher_t@V-$unique_storage@U-$resource_policy@PEAUevent_w.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x180079228 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x180095768 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::event_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::event_watcher_state *,void (*)(wil::details::event_watcher_state *),&void wil::details::delete_event_watcher_state(wil::details::event_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::event_watcher_state *,wil::details::event_watcher_state *,0,std::nullptr_t>>,wil::err_returncode_policy>::create(
        __int64 a1,
        void *a2,
        __int64 a3)
{
  HANDLE CurrentProcess; // rbx
  HANDLE v7; // rax
  wil::details *v8; // rcx
  HANDLE v9; // rdx
  unsigned int take_hevent_ownership; // eax
  void *v11; // rdx
  unsigned int v12; // ebx
  HANDLE TargetHandle; // [rsp+68h] [rbp+20h] BYREF

  TargetHandle = 0LL;
  CurrentProcess = GetCurrentProcess();
  v7 = GetCurrentProcess();
  if ( DuplicateHandle(v7, a2, CurrentProcess, &TargetHandle, 0, 0, 2u) )
  {
    v9 = TargetHandle;
    TargetHandle = 0LL;
    take_hevent_ownership = wil::event_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::event_watcher_state *,void (*)(wil::details::event_watcher_state *),&void wil::details::delete_event_watcher_state(wil::details::event_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::event_watcher_state *,wil::details::event_watcher_state *,0,std::nullptr_t>>,wil::err_returncode_policy>::create_take_hevent_ownership(
                              a1,
                              v9,
                              a3);
  }
  else
  {
    take_hevent_ownership = wil::details::GetLastErrorFailHr(v8);
  }
  v12 = take_hevent_ownership;
  if ( TargetHandle )
    wil::details::CloseHandle((wil::details *)TargetHandle, v11);
  return v12;
}
