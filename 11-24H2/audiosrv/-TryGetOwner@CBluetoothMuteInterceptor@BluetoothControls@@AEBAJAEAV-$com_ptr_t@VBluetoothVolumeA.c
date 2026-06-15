/*
 * XREFs of ?TryGetOwner@CBluetoothMuteInterceptor@BluetoothControls@@AEBAJAEAV?$com_ptr_t@VBluetoothVolumeAndMute@BluetoothControls@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800D8210
 * Callers:
 *     ?GetMute@CBluetoothMuteInterceptor@BluetoothControls@@UEAAJPEAH@Z @ 0x1800D4600 (-GetMute@CBluetoothMuteInterceptor@BluetoothControls@@UEAAJPEAH@Z.c)
 *     ?InitializeAPOs@CBluetoothMuteInterceptor@BluetoothControls@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x1800D5090 (-InitializeAPOs@CBluetoothMuteInterceptor@BluetoothControls@@UEAAJ_KIPEAPEAUIAudioProcessingObje.c)
 *     ?IsMuteAPORequired@CBluetoothMuteInterceptor@BluetoothControls@@UEBA_NXZ @ 0x1800D53A0 (-IsMuteAPORequired@CBluetoothMuteInterceptor@BluetoothControls@@UEBA_NXZ.c)
 *     ?NotifyAudioDGTerminated@CBluetoothMuteInterceptor@BluetoothControls@@UEAAXXZ @ 0x1800D5980 (-NotifyAudioDGTerminated@CBluetoothMuteInterceptor@BluetoothControls@@UEAAXXZ.c)
 *     ?OnNotify@CBluetoothMuteInterceptor@BluetoothControls@@UEAAJKPEBU_GUID@@@Z @ 0x1800D5C80 (-OnNotify@CBluetoothMuteInterceptor@BluetoothControls@@UEAAJKPEBU_GUID@@@Z.c)
 *     ?RegisterForNotifications@CBluetoothMuteInterceptor@BluetoothControls@@UEAAJXZ @ 0x1800D6370 (-RegisterForNotifications@CBluetoothMuteInterceptor@BluetoothControls@@UEAAJXZ.c)
 *     ?ReloadMuteState@CBluetoothMuteInterceptor@BluetoothControls@@UEAAXXZ @ 0x1800D64D0 (-ReloadMuteState@CBluetoothMuteInterceptor@BluetoothControls@@UEAAXXZ.c)
 *     ?RequiresRefreshOnEndpointActivation@CBluetoothMuteInterceptor@BluetoothControls@@UEBA_NXZ @ 0x1800D6930 (-RequiresRefreshOnEndpointActivation@CBluetoothMuteInterceptor@BluetoothControls@@UEBA_NXZ.c)
 *     ?SetMute@CBluetoothMuteInterceptor@BluetoothControls@@UEAAJHPEBU_GUID@@PEAH@Z @ 0x1800D7FB0 (-SetMute@CBluetoothMuteInterceptor@BluetoothControls@@UEAAJHPEBU_GUID@@PEAH@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$com_ptr_t@VBluetoothVolumeAndMute@BluetoothControls@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAVBluetoothVolumeAndMute@BluetoothControls@@@Z @ 0x1800D286C (--4-$com_ptr_t@VBluetoothVolumeAndMute@BluetoothControls@@Uerr_exception_policy@wil@@@wil@@QEAAA.c)
 */

__int64 __fastcall BluetoothControls::CBluetoothMuteInterceptor::TryGetOwner(__int64 a1, volatile signed __int32 **a2)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  wil::com_ptr_t<BluetoothControls::BluetoothVolumeAndMute,wil::err_exception_policy>::operator=(
    a2,
    *(volatile int **)(a1 + 16));
  if ( *a2 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x566,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
    (const char *)0x80004003LL);
  return 2147500035LL;
}
