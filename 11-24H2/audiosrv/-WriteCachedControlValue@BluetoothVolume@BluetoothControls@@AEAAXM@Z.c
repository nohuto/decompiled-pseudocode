/*
 * XREFs of ?WriteCachedControlValue@BluetoothVolume@BluetoothControls@@AEAAXM@Z @ 0x1800654E4
 * Callers:
 *     ?GetMasterVolumeLevelScalar@BluetoothVolume@BluetoothControls@@UEAAJPEAM@Z @ 0x180065450 (-GetMasterVolumeLevelScalar@BluetoothVolume@BluetoothControls@@UEAAJPEAM@Z.c)
 *     ?SetMasterVolumeLevelScalar@BluetoothVolume@BluetoothControls@@UEAAJMPEBU_GUID@@PEAH@Z @ 0x1800D7D20 (-SetMasterVolumeLevelScalar@BluetoothVolume@BluetoothControls@@UEAAJMPEBU_GUID@@PEAH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall BluetoothControls::BluetoothVolume::WriteCachedControlValue(RTL_SRWLOCK *this, float a2)
{
  RTL_SRWLOCK *v2; // rdi
  void *v4; // [rsp+40h] [rbp+8h]

  v2 = this + 22;
  AcquireSRWLockExclusive(this + 22);
  *(float *)&v4 = a2;
  BYTE4(v4) = 1;
  this[23].Ptr = v4;
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}
