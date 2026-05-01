/*
 * XREFs of ?WindowEventDispatcher_WindowManagerWatcherConnected@ViewManagerInteropTraceLogging@@SAXXZ @ 0x18023A558
 * Callers:
 *     ?WindowManagerWatcherConnectedBamo@UwpWindowManagerBridge@@AEAAJXZ @ 0x1802BF9D8 (-WindowManagerWatcherConnectedBamo@UwpWindowManagerBridge@@AEAAJXZ.c)
 *     ?WindowManagerWatcherConnected@WindowManagerBridge@@AEAAJXZ @ 0x180430E98 (-WindowManagerWatcherConnected@WindowManagerBridge@@AEAAJXZ.c)
 *     ?WindowManagerWatcherConnected@UwpWindowManagerBridge@@AEAAJUwrite_lock_required@wil@@@Z @ 0x180437240 (-WindowManagerWatcherConnected@UwpWindowManagerBridge@@AEAAJUwrite_lock_required@wil@@@Z.c)
 * Callees:
 *     ?Provider@ViewManagerInteropLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800207E4 (-Provider@ViewManagerInteropLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x1800B40C4 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 */

void ViewManagerInteropTraceLogging::WindowEventDispatcher_WindowManagerWatcherConnected(void)
{
  const struct _tlgProvider_t *v0; // rax

  v0 = ViewManagerInteropLogging::Provider();
  if ( *(_DWORD *)v0 > 5u )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)v0,
      byte_1807F85F0,
      0LL);
}
