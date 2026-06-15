/*
 * XREFs of ??0_lambda_1d5316dfea7a7918102eba328e746dc2_@@QEAA@QEAV?$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@BluetoothControls@@AEBV?$shared_ptr@Voperation_guard@wil@@@std@@@Z @ 0x1800D1FD4
 * Callers:
 *     ?OnStreamStateChanged@?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@AEAAX_N@Z @ 0x180075D04 (-OnStreamStateChanged@-$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothContr.c)
 *     ?OnStreamStateChanged@?$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@BluetoothControls@@AEAAX_N@Z @ 0x180075D8C (-OnStreamStateChanged@-$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@.c)
 * Callees:
 *     ??0?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEAA@AEBV01@@Z @ 0x180052E14 (--0-$shared_ptr@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@std@@QEAA@AEBV01@.c)
 */

__int64 __fastcall _lambda_1d5316dfea7a7918102eba328e746dc2_::_lambda_1d5316dfea7a7918102eba328e746dc2_(
        _QWORD *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v3; // r9

  *a1 = a2;
  std::shared_ptr<std::wstring>::shared_ptr<std::wstring>(a1 + 1, a3);
  return v3;
}
