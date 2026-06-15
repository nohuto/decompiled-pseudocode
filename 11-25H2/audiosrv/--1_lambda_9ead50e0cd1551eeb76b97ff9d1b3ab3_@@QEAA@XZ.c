/*
 * XREFs of ??1_lambda_9ead50e0cd1551eeb76b97ff9d1b3ab3_@@QEAA@XZ @ 0x1800D05F4
 * Callers:
 *     _BluetoothControls::BluetoothControl_IVolumeControlHandler_BluetoothControls::BluetoothVolume_::RuntimeClassInitialize_::_1_::dtor$2 @ 0x1801635A6 (_BluetoothControls--BluetoothControl_IVolumeControlHandler_BluetoothControls--BluetoothVolume_--.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180017580 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall _lambda_9ead50e0cd1551eeb76b97ff9d1b3ab3_::~_lambda_9ead50e0cd1551eeb76b97ff9d1b3ab3_(
        _lambda_9ead50e0cd1551eeb76b97ff9d1b3ab3_ *this)
{
  std::_Ref_count_base *v1; // rcx

  v1 = (std::_Ref_count_base *)*((_QWORD *)this + 2);
  if ( v1 )
    std::_Ref_count_base::_Decref(v1);
}
