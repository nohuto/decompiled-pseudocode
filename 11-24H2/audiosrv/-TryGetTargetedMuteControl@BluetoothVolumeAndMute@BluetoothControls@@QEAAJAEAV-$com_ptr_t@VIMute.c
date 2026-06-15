/*
 * XREFs of ?TryGetTargetedMuteControl@BluetoothVolumeAndMute@BluetoothControls@@QEAAJAEAV?$com_ptr_t@VIMuteControlHandler@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800D83DC
 * Callers:
 *     ?ApplyUpdatePlan@BluetoothVolumeAndMute@BluetoothControls@@AEAAJAEBUUpdatePlan@12@@Z @ 0x1800D2AEC (-ApplyUpdatePlan@BluetoothVolumeAndMute@BluetoothControls@@AEAAJAEBUUpdatePlan@12@@Z.c)
 *     ?BuildPlanFromHardwareState@BluetoothVolumeAndMute@BluetoothControls@@AEAAJAEAUUpdatePlan@12@@Z @ 0x1800D2C94 (-BuildPlanFromHardwareState@BluetoothVolumeAndMute@BluetoothControls@@AEAAJAEAUUpdatePlan@12@@Z.c)
 *     ?HandleGetMute@BluetoothVolumeAndMute@BluetoothControls@@QEAAJPEAH@Z @ 0x1800D4AEC (-HandleGetMute@BluetoothVolumeAndMute@BluetoothControls@@QEAAJPEAH@Z.c)
 *     ?InitializeAPOs@CBluetoothMuteInterceptor@BluetoothControls@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x1800D5090 (-InitializeAPOs@CBluetoothMuteInterceptor@BluetoothControls@@UEAAJ_KIPEAPEAUIAudioProcessingObje.c)
 *     ?IsMuteAPORequired@CBluetoothMuteInterceptor@BluetoothControls@@UEBA_NXZ @ 0x1800D53A0 (-IsMuteAPORequired@CBluetoothMuteInterceptor@BluetoothControls@@UEBA_NXZ.c)
 *     ?NotifyAudioDGTerminated@BluetoothVolumeAndMute@BluetoothControls@@QEAAXXZ @ 0x1800D58F8 (-NotifyAudioDGTerminated@BluetoothVolumeAndMute@BluetoothControls@@QEAAXXZ.c)
 *     ?RegisterForNotifications@BluetoothVolumeAndMute@BluetoothControls@@QEAAJXZ @ 0x1800D6264 (-RegisterForNotifications@BluetoothVolumeAndMute@BluetoothControls@@QEAAJXZ.c)
 *     ?ReloadMuteState@CBluetoothMuteInterceptor@BluetoothControls@@UEAAXXZ @ 0x1800D64D0 (-ReloadMuteState@CBluetoothMuteInterceptor@BluetoothControls@@UEAAXXZ.c)
 *     ?RequiresRefreshOnEndpointActivation@CBluetoothMuteInterceptor@BluetoothControls@@UEBA_NXZ @ 0x1800D6930 (-RequiresRefreshOnEndpointActivation@CBluetoothMuteInterceptor@BluetoothControls@@UEBA_NXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180054958 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ??4?$com_ptr_t@VIMuteControlHandler@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAVIMuteControlHandler@@@Z @ 0x1800A0888 (--4-$com_ptr_t@VIMuteControlHandler@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAVIMuteContro.c)
 */

__int64 __fastcall BluetoothControls::BluetoothVolumeAndMute::TryGetTargetedMuteControl(__int64 a1, __int64 *a2)
{
  RTL_SRWLOCK *v2; // rbx
  char v5; // al
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = (RTL_SRWLOCK *)(a1 + 168);
  AcquireSRWLockShared((PSRWLOCK)(a1 + 168));
  v5 = *(_BYTE *)(a1 + 276);
  v9 = v2;
  v6 = 0;
  if ( v5 )
  {
    v6 = -2147467261;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x63C,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
      (const char *)0x80004003LL);
  }
  else
  {
    wil::com_ptr_t<IMuteControlHandler,wil::err_exception_policy>::operator=(a2, *(_QWORD *)(a1 + 136));
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v9);
  return v6;
}
