/*
 * XREFs of ??_GBluetoothVolume@BluetoothControls@@UEAAPEAXI@Z @ 0x1800D0850
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A7F7C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@UEAA@XZ @ 0x1800D0614 (--1-$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothCont.c)
 */

BluetoothControls::BluetoothVolume *__fastcall BluetoothControls::BluetoothVolume::`scalar deleting destructor'(
        BluetoothControls::BluetoothVolume *this,
        char a2)
{
  BluetoothControls::BluetoothControl<IVolumeControlHandler,BluetoothControls::BluetoothVolume>::~BluetoothControl<IVolumeControlHandler,BluetoothControls::BluetoothVolume>((__int64)this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xB8);
  return this;
}
