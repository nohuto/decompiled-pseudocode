/*
 * XREFs of ??1?$unique_storage@U?$resource_policy@PEAU_TP_WAIT@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolWait@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1800CEE44
 * Callers:
 *     ??1event_watcher_state@details@wil@@QEAA@XZ @ 0x1800CEF00 (--1event_watcher_state@details@wil@@QEAA@XZ.c)
 *     ??1CallbackData@CallOnThreadExit@@QEAA@XZ @ 0x18012EB78 (--1CallbackData@CallOnThreadExit@@QEAA@XZ.c)
 *     ??1registry_watcher_state@details@wil@@QEAA@XZ @ 0x1801B311C (--1registry_watcher_state@details@wil@@QEAA@XZ.c)
 * Callees:
 *     ?Destroy@?$DestroyThreadPoolWait@$0A@@details@wil@@SAXPEAU_TP_WAIT@@@Z @ 0x1800CF05C (-Destroy@-$DestroyThreadPoolWait@$0A@@details@wil@@SAXPEAU_TP_WAIT@@@Z.c)
 */

__int64 __fastcall wil::details::unique_storage<wil::details::resource_policy<_TP_WAIT *,void (*)(_TP_WAIT *),&public: static void wil::details::DestroyThreadPoolWait<0>::Destroy(_TP_WAIT *),wistd::integral_constant<unsigned __int64,0>,_TP_WAIT *,_TP_WAIT *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_TP_WAIT *,void (*)(_TP_WAIT *),&public: static void wil::details::DestroyThreadPoolWait<0>::Destroy(_TP_WAIT *),wistd::integral_constant<unsigned __int64,0>,_TP_WAIT *,_TP_WAIT *,0,std::nullptr_t>>(
        struct _TP_WAIT **a1)
{
  struct _TP_WAIT *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return wil::details::DestroyThreadPoolWait<0>::Destroy(v1);
  return result;
}
