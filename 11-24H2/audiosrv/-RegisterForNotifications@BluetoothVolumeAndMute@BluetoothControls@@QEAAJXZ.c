/*
 * XREFs of ?RegisterForNotifications@BluetoothVolumeAndMute@BluetoothControls@@QEAAJXZ @ 0x1800D6264
 * Callers:
 *     ?RegisterForNotifications@CBluetoothMuteInterceptor@BluetoothControls@@UEAAJXZ @ 0x1800D6370 (-RegisterForNotifications@CBluetoothMuteInterceptor@BluetoothControls@@UEAAJXZ.c)
 *     ?RegisterForNotifications@CBluetoothVolumeInterceptor@BluetoothControls@@UEAAJXZ @ 0x1800D63D0 (-RegisterForNotifications@CBluetoothVolumeInterceptor@BluetoothControls@@UEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryGetTargetedMuteControl@BluetoothVolumeAndMute@BluetoothControls@@QEAAJAEAV?$com_ptr_t@VIMuteControlHandler@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800D83DC (-TryGetTargetedMuteControl@BluetoothVolumeAndMute@BluetoothControls@@QEAAJAEAV-$com_ptr_t@VIMute.c)
 *     ?TryGetTargetedVolumeControl@BluetoothVolumeAndMute@BluetoothControls@@QEAAJAEAV?$com_ptr_t@VIVolumeControlHandler@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800D846C (-TryGetTargetedVolumeControl@BluetoothVolumeAndMute@BluetoothControls@@QEAAJAEAV-$com_ptr_t@VIVo.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall BluetoothControls::BluetoothVolumeAndMute::RegisterForNotifications(
        BluetoothControls::BluetoothVolumeAndMute *this)
{
  int TargetedVolumeControl; // eax
  unsigned int v4; // ebx
  int TargetedMuteControl; // eax
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  if ( _InterlockedExchange((volatile __int32 *)this + 70, 1) )
    return 0LL;
  v9 = 0LL;
  TargetedVolumeControl = BluetoothControls::BluetoothVolumeAndMute::TryGetTargetedVolumeControl(this, &v9);
  v4 = TargetedVolumeControl;
  if ( TargetedVolumeControl >= 0 )
  {
    v8 = 0LL;
    TargetedMuteControl = BluetoothControls::BluetoothVolumeAndMute::TryGetTargetedMuteControl(this, &v8);
    v4 = TargetedMuteControl;
    if ( TargetedMuteControl >= 0 )
    {
      TargetedMuteControl = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 216LL))(v9);
      v4 = TargetedMuteControl;
      if ( TargetedMuteControl >= 0 )
      {
        TargetedMuteControl = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 72LL))(v8);
        v4 = TargetedMuteControl;
        if ( TargetedMuteControl >= 0 )
        {
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v8);
          v4 = 0;
          goto LABEL_13;
        }
        v6 = 1569LL;
      }
      else
      {
        v6 = 1568LL;
      }
    }
    else
    {
      v6 = 1566LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
      (const char *)(unsigned int)TargetedMuteControl);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v8);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x61C,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
      (const char *)(unsigned int)TargetedVolumeControl);
  }
LABEL_13:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v9);
  return v4;
}
