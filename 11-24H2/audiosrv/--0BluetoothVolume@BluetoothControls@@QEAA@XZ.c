/*
 * XREFs of ??0BluetoothVolume@BluetoothControls@@QEAA@XZ @ 0x1800D2300
 * Callers:
 *     ??$MakeAndInitialize@VBluetoothVolume@BluetoothControls@@V12@AEAPEAGPEAV12@AEAPEAUIControlChangeNotify@@@Details@WRL@Microsoft@@YAJPEAPEAVBluetoothVolume@BluetoothControls@@AEAPEAG$$QEAPEAV34@AEAPEAUIControlChangeNotify@@@Z @ 0x1800D15C0 (--$MakeAndInitialize@VBluetoothVolume@BluetoothControls@@V12@AEAPEAGPEAV12@AEAPEAUIControlChange.c)
 *     ??$MakeAndInitialize@VBluetoothVolume@BluetoothControls@@VIVolumeControlHandler@@AEAPEAUIMMDevice@@AEAPEBGAEAPEAUIControlChangeNotify@@@Details@WRL@Microsoft@@YAJPEAPEAVIVolumeControlHandler@@AEAPEAUIMMDevice@@AEAPEBGAEAPEAUIControlChangeNotify@@@Z @ 0x1800D16BC (--$MakeAndInitialize@VBluetoothVolume@BluetoothControls@@VIVolumeControlHandler@@AEAPEAUIMMDevic.c)
 * Callees:
 *     ??0?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@QEAA@XZ @ 0x1800D2098 (--0-$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothCont.c)
 */

BluetoothControls::BluetoothVolume *__fastcall BluetoothControls::BluetoothVolume::BluetoothVolume(
        BluetoothControls::BluetoothVolume *this)
{
  BluetoothControls::BluetoothControl<IVolumeControlHandler,BluetoothControls::BluetoothVolume>::BluetoothControl<IVolumeControlHandler,BluetoothControls::BluetoothVolume>((__int64)this);
  *(_QWORD *)this = &BluetoothControls::BluetoothVolume::`vftable';
  *((_QWORD *)this + 22) = 0LL;
  *((_BYTE *)this + 188) = 0;
  return this;
}
