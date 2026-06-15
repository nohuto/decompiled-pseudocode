/*
 * XREFs of ?GetEffectiveVolumeTarget@BluetoothVolumeAndMute@BluetoothControls@@AEBAMUread_lock_required@wil@@@Z @ 0x1800D4498
 * Callers:
 *     ?HandleSetMasterVolumeLevelScalar@BluetoothVolumeAndMute@BluetoothControls@@QEAAJMPEBU_GUID@@PEAH@Z @ 0x1800D4BDC (-HandleSetMasterVolumeLevelScalar@BluetoothVolumeAndMute@BluetoothControls@@QEAAJMPEBU_GUID@@PEA.c)
 *     ?HandleSetMute@BluetoothVolumeAndMute@BluetoothControls@@QEAAJHPEBU_GUID@@PEAH@Z @ 0x1800D4DC0 (-HandleSetMute@BluetoothVolumeAndMute@BluetoothControls@@QEAAJHPEBU_GUID@@PEAH@Z.c)
 * Callees:
 *     <none>
 */

double __fastcall BluetoothControls::BluetoothVolumeAndMute::GetEffectiveVolumeTarget(__int64 a1)
{
  double result; // xmm0_8

  if ( *(_BYTE *)(a1 + 216) )
  {
    *(_QWORD *)&result = *(unsigned int *)(a1 + 196);
  }
  else if ( *(_BYTE *)(a1 + 188) )
  {
    *(_QWORD *)&result = *(unsigned int *)(a1 + 184);
  }
  else
  {
    return 0.0;
  }
  return result;
}
