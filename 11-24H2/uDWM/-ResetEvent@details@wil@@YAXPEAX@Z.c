/*
 * XREFs of ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x18007DD1C
 * Callers:
 *     ?ValidateDXGIAdapterAndDevice@CGraphicsDeviceManager@@QEAAJPEA_N@Z @ 0x18007DCC0 (-ValidateDXGIAdapterAndDevice@CGraphicsDeviceManager@@QEAAJPEA_N@Z.c)
 *     ?CheckDXGIAdapter@CGraphicsDeviceManager@@IEAAJPEA_N@Z @ 0x18007DD4C (-CheckDXGIAdapter@CGraphicsDeviceManager@@IEAAJPEA_N@Z.c)
 *     ?ReleaseGraphicsDevice@CGraphicsDeviceManager@@IEAAJXZ @ 0x18009A974 (-ReleaseGraphicsDevice@CGraphicsDeviceManager@@IEAAJXZ.c)
 *     ?wait_callback@?$event_watcher_t@V?$unique_storage@U?$resource_policy@PEAUevent_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_event_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x1800A45D0 (-wait_callback@-$event_watcher_t@V-$unique_storage@U-$resource_policy@PEAUevent_watcher_state@de.c)
 *     ?InitializeGraphicsDeviceType@CGraphicsDeviceManager@@IEAAJW4D3D_DRIVER_TYPE@@@Z @ 0x1800C4150 (-InitializeGraphicsDeviceType@CGraphicsDeviceManager@@IEAAJW4D3D_DRIVER_TYPE@@@Z.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800A0818 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall wil::details::ResetEvent(wil::details *this, void *a2)
{
  unsigned int v2; // r8d
  const char *v3; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !ResetEvent(this) )
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x9D8, v2, v3);
}
