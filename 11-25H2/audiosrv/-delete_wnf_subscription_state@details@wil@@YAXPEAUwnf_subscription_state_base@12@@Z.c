/*
 * XREFs of ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x1800C1648
 * Callers:
 *     ??1CAudioStream@@UEAA@XZ @ 0x18006D94C (--1CAudioStream@@UEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUwnf_subscription_state_base@23@@Z @ 0x180073E74 (-reset@-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18007E2FC (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@w.c)
 *     ?SubscribeToWnfAudioRenderEndpointChanges@CAudioRenderEndpointChangeDelegator@@QEAAJXZ @ 0x1800A0F84 (-SubscribeToWnfAudioRenderEndpointChanges@CAudioRenderEndpointChangeDelegator@@QEAAJXZ.c)
 *     ??1CAudioRenderEndpointChangeDelegator@@UEAA@XZ @ 0x1800B7450 (--1CAudioRenderEndpointChangeDelegator@@UEAA@XZ.c)
 *     ?SetUpAudioEffectsWatcher@CAudioStream@@AEAAJXZ @ 0x1800CADF4 (-SetUpAudioEffectsWatcher@CAudioStream@@AEAAJXZ.c)
 *     ??1CAudioSrv@@UEAA@XZ @ 0x1800CC2E4 (--1CAudioSrv@@UEAA@XZ.c)
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x1800CF034 (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 *     ??1BluetoothBroadcastProvider@@UEAA@XZ @ 0x1800DF684 (--1BluetoothBroadcastProvider@@UEAA@XZ.c)
 *     ?RuntimeClassInitialize@BluetoothBroadcastProvider@@QEAAJPEAUIMulticastManagerNotificationClient@@@Z @ 0x1800E27F0 (-RuntimeClassInitialize@BluetoothBroadcastProvider@@QEAAJPEAUIMulticastManagerNotificationClient.c)
 *     ??1CExclusiveModeListener@@UEAA@XZ @ 0x180143174 (--1CExclusiveModeListener@@UEAA@XZ.c)
 *     ?RuntimeClassInitialize@CExclusiveModeListener@@QEAAJPEBU_tlgProvider_t@@_N@Z @ 0x1801442E0 (-RuntimeClassInitialize@CExclusiveModeListener@@QEAAJPEBU_tlgProvider_t@@_N@Z.c)
 *     ??1AtmosCheck@@UEAA@XZ @ 0x180147150 (--1AtmosCheck@@UEAA@XZ.c)
 *     ?RegisterForShellReadyNotifications@AtmosCheck@@AEAAJXZ @ 0x1801494B4 (-RegisterForShellReadyNotifications@AtmosCheck@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall wil::details::delete_wnf_subscription_state(
        wil::details *this,
        struct wil::details::wnf_subscription_state_base *a2)
{
  if ( this )
    (**(void (__fastcall ***)(wil::details *, __int64))this)(this, 1LL);
}
