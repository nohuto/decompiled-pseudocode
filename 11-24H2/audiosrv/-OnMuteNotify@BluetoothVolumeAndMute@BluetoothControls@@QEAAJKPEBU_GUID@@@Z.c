/*
 * XREFs of ?OnMuteNotify@BluetoothVolumeAndMute@BluetoothControls@@QEAAJKPEBU_GUID@@@Z @ 0x1800D5BC0
 * Callers:
 *     ?OnNotify@CBluetoothMuteInterceptor@BluetoothControls@@UEAAJKPEBU_GUID@@@Z @ 0x1800D5C80 (-OnNotify@CBluetoothMuteInterceptor@BluetoothControls@@UEAAJKPEBU_GUID@@@Z.c)
 *     ?OnNotify@CBluetoothVolumeInterceptor@BluetoothControls@@UEAAJKPEBU_GUID@@@Z @ 0x1800D5D00 (-OnNotify@CBluetoothVolumeInterceptor@BluetoothControls@@UEAAJKPEBU_GUID@@@Z.c)
 * Callees:
 *     ?NotifyProvider@BluetoothVolumeAndMute@BluetoothControls@@AEAAXKPEBU_GUID@@@Z @ 0x1800D59FC (-NotifyProvider@BluetoothVolumeAndMute@BluetoothControls@@AEAAXKPEBU_GUID@@@Z.c)
 *     ?SyncVolumeAndMuteState@BluetoothVolumeAndMute@BluetoothControls@@AEAAJKPEBU_GUID@@@Z @ 0x1800D8148 (-SyncVolumeAndMuteState@BluetoothVolumeAndMute@BluetoothControls@@AEAAJKPEBU_GUID@@@Z.c)
 */

__int64 __fastcall BluetoothControls::BluetoothVolumeAndMute::OnMuteNotify(
        BluetoothControls::BluetoothVolumeAndMute *this,
        unsigned int a2,
        const struct _GUID *a3)
{
  if ( a3 && *(_QWORD *)&a3->Data1 == EVENTCONTEXT_HARDWARE_INITIATED && *(_QWORD *)a3->Data4 == 0x2ADE9700B0F38CBDLL )
    BluetoothControls::BluetoothVolumeAndMute::SyncVolumeAndMuteState(this, a2, a3);
  else
    BluetoothControls::BluetoothVolumeAndMute::NotifyProvider(this, a2, a3);
  return 0LL;
}
