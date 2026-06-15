/*
 * XREFs of ?NotifyProvider@BluetoothVolumeAndMute@BluetoothControls@@AEAAXKPEBU_GUID@@@Z @ 0x1800D59FC
 * Callers:
 *     ?DrainPendingRequests@BluetoothVolumeAndMute@BluetoothControls@@AEAAJXZ @ 0x1800D33BC (-DrainPendingRequests@BluetoothVolumeAndMute@BluetoothControls@@AEAAJXZ.c)
 *     ?OnMuteNotify@BluetoothVolumeAndMute@BluetoothControls@@QEAAJKPEBU_GUID@@@Z @ 0x1800D5BC0 (-OnMuteNotify@BluetoothVolumeAndMute@BluetoothControls@@QEAAJKPEBU_GUID@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall BluetoothControls::BluetoothVolumeAndMute::NotifyProvider(
        BluetoothControls::BluetoothVolumeAndMute *this,
        unsigned int a2,
        const struct _GUID *a3)
{
  __int64 v5; // rbx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v5 = *((_QWORD *)this + 13);
  v6 = v5;
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    (*(void (__fastcall **)(__int64, _QWORD, const struct _GUID *))(*(_QWORD *)v5 + 24LL))(v5, a2, a3);
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v6);
}
