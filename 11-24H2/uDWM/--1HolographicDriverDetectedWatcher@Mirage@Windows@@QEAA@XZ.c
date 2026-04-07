/*
 * XREFs of ??1HolographicDriverDetectedWatcher@Mirage@Windows@@QEAA@XZ @ 0x180095F20
 * Callers:
 *     ??1CAnalogCompositorManager@@AEAA@XZ @ 0x180071EF4 (--1CAnalogCompositorManager@@AEAA@XZ.c)
 *     _CAnalogCompositorManager::CAnalogCompositorManager_::_1_::dtor$1 @ 0x1800F7787 (_CAnalogCompositorManager--CAnalogCompositorManager_--_1_--dtor$1.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180078F28 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$integ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUevent_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_event_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180095F9C (--1-$unique_storage@U-$resource_policy@PEAUevent_watcher_state@details@wil@@P6AXPEAU123@@Z$1-del.c)
 *     ?_FailFast_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1800A44FC (-_FailFast_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 */

void __fastcall Windows::Mirage::HolographicDriverDetectedWatcher::~HolographicDriverDetectedWatcher(
        Windows::Mirage::HolographicDriverDetectedWatcher *this)
{
  CONFIGRET v2; // eax
  DWORD v3; // eax
  unsigned int v4; // r8d
  void *v5; // rdx
  void *v6; // rdx
  unsigned int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_QWORD *)this + 4) )
  {
    v2 = CM_Unregister_Notification();
    v3 = CM_MapCrToWin32Err(v2, 0x507u);
    if ( v3 )
      wil::details::in1diag3::_FailFast_Win32(retaddr, (void *)0x65, v4, (const char *)v3, v7);
    *((_QWORD *)this + 4) = 0LL;
  }
  wil::details::unique_storage<wil::details::resource_policy<wil::details::event_watcher_state *,void (*)(wil::details::event_watcher_state *),&void wil::details::delete_event_watcher_state(wil::details::event_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::event_watcher_state *,wil::details::event_watcher_state *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wil::details::event_watcher_state *,void (*)(wil::details::event_watcher_state *),&void wil::details::delete_event_watcher_state(wil::details::event_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::event_watcher_state *,wil::details::event_watcher_state *,0,std::nullptr_t>>((char *)this + 24);
  wil::details::unique_storage<wil::details::resource_policy<wil::details::event_watcher_state *,void (*)(wil::details::event_watcher_state *),&void wil::details::delete_event_watcher_state(wil::details::event_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::event_watcher_state *,wil::details::event_watcher_state *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wil::details::event_watcher_state *,void (*)(wil::details::event_watcher_state *),&void wil::details::delete_event_watcher_state(wil::details::event_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::event_watcher_state *,wil::details::event_watcher_state *,0,std::nullptr_t>>((char *)this + 16);
  __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAA_XZ(
    (wil::details **)this + 1,
    v5);
  __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAA_XZ(
    (wil::details **)this,
    v6);
}
