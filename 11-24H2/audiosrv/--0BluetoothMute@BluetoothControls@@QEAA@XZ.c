/*
 * XREFs of ??0BluetoothMute@BluetoothControls@@QEAA@XZ @ 0x1800D22C8
 * Callers:
 *     ??$MakeAndInitialize@VBluetoothMute@BluetoothControls@@V12@AEAPEAGPEAV12@AEAPEAUIControlChangeNotify@@@Details@WRL@Microsoft@@YAJPEAPEAVBluetoothMute@BluetoothControls@@AEAPEAG$$QEAPEAV34@AEAPEAUIControlChangeNotify@@@Z @ 0x1800D13D0 (--$MakeAndInitialize@VBluetoothMute@BluetoothControls@@V12@AEAPEAGPEAV12@AEAPEAUIControlChangeNo.c)
 *     ??$MakeAndInitialize@VBluetoothMute@BluetoothControls@@VIMuteControlHandler@@AEAPEAUIMMDevice@@AEAPEBGAEAPEAUIControlChangeNotify@@@Details@WRL@Microsoft@@YAJPEAPEAVIMuteControlHandler@@AEAPEAUIMMDevice@@AEAPEBGAEAPEAUIControlChangeNotify@@@Z @ 0x1800D14CC (--$MakeAndInitialize@VBluetoothMute@BluetoothControls@@VIMuteControlHandler@@AEAPEAUIMMDevice@@A.c)
 * Callees:
 *     ??0?$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@BluetoothControls@@QEAA@XZ @ 0x1800D1FFC (--0-$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@BluetoothControls.c)
 */

BluetoothControls::BluetoothMute *__fastcall BluetoothControls::BluetoothMute::BluetoothMute(
        BluetoothControls::BluetoothMute *this)
{
  BluetoothControls::BluetoothControl<IMuteControlHandler,BluetoothControls::BluetoothMute>::BluetoothControl<IMuteControlHandler,BluetoothControls::BluetoothMute>((__int64)this);
  *(_QWORD *)this = &BluetoothControls::BluetoothMute::`vftable';
  *((_QWORD *)this + 22) = 0LL;
  *((_BYTE *)this + 188) = 0;
  return this;
}
