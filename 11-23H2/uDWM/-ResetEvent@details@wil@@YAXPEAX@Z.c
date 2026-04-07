/*
 * XREFs of ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x180025D10
 * Callers:
 *     ?InitializeGraphicsDevice@CGraphicsDeviceManager@@IEAAJXZ @ 0x180028220 (-InitializeGraphicsDevice@CGraphicsDeviceManager@@IEAAJXZ.c)
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x180045FF0 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 *     ?wait_callback@?$event_watcher_t@V?$unique_storage@U?$resource_policy@PEAUevent_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_event_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x1800A6210 (-wait_callback@-$event_watcher_t@V-$unique_storage@U-$resource_policy@PEAUevent_watcher_state@de.c)
 *     ?ReleaseGraphicsDevice@CGraphicsDeviceManager@@IEAAJXZ @ 0x1800C15B8 (-ReleaseGraphicsDevice@CGraphicsDeviceManager@@IEAAJXZ.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18009DC38 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall wil::details::ResetEvent(wil::details *this, void *a2)
{
  unsigned int v2; // r8d
  const char *v3; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !ResetEvent(this) )
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x932, v2, v3);
}
