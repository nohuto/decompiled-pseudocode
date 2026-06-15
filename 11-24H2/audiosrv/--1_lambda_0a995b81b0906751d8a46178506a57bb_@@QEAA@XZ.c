/*
 * XREFs of ??1_lambda_0a995b81b0906751d8a46178506a57bb_@@QEAA@XZ @ 0x1800D2440
 * Callers:
 *     ?OnStreamStateChanged@?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@AEAAX_N@Z @ 0x180075D04 (-OnStreamStateChanged@-$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothContr.c)
 *     ?OnStreamStateChanged@?$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@BluetoothControls@@AEAAX_N@Z @ 0x180075D8C (-OnStreamStateChanged@-$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@.c)
 *     _BluetoothControls::BluetoothControl_IVolumeControlHandler_BluetoothControls::BluetoothVolume_::RuntimeClassInitialize_::_1_::dtor$4 @ 0x18016C94A (_BluetoothControls--BluetoothControl_IVolumeControlHandler_BluetoothControls--BluetoothVolume_--.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180011640 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall _lambda_0a995b81b0906751d8a46178506a57bb_::~_lambda_0a995b81b0906751d8a46178506a57bb_(
        _lambda_0a995b81b0906751d8a46178506a57bb_ *this)
{
  std::_Ref_count_base *v1; // rcx

  v1 = (std::_Ref_count_base *)*((_QWORD *)this + 2);
  if ( v1 )
    std::_Ref_count_base::_Decref(v1);
}
