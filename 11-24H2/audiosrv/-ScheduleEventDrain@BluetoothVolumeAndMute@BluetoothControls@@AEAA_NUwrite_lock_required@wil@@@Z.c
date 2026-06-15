/*
 * XREFs of ?ScheduleEventDrain@BluetoothVolumeAndMute@BluetoothControls@@AEAA_NUwrite_lock_required@wil@@@Z @ 0x1800D7744
 * Callers:
 *     ?HandleSetMasterVolumeLevelScalar@BluetoothVolumeAndMute@BluetoothControls@@QEAAJMPEBU_GUID@@PEAH@Z @ 0x1800D4BDC (-HandleSetMasterVolumeLevelScalar@BluetoothVolumeAndMute@BluetoothControls@@QEAAJMPEBU_GUID@@PEA.c)
 *     ?HandleSetMute@BluetoothVolumeAndMute@BluetoothControls@@QEAAJHPEBU_GUID@@PEAH@Z @ 0x1800D4DC0 (-HandleSetMute@BluetoothVolumeAndMute@BluetoothControls@@QEAAJHPEBU_GUID@@PEAH@Z.c)
 *     ?SyncVolumeAndMuteState@BluetoothVolumeAndMute@BluetoothControls@@AEAAJKPEBU_GUID@@@Z @ 0x1800D8148 (-SyncVolumeAndMuteState@BluetoothVolumeAndMute@BluetoothControls@@AEAAJKPEBU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall BluetoothControls::BluetoothVolumeAndMute::ScheduleEventDrain(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 272) )
    return 0;
  *(_BYTE *)(a1 + 272) = 1;
  return 1;
}
