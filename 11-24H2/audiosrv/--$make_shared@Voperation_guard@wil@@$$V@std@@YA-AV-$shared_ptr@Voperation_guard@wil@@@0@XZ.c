/*
 * XREFs of ??$make_shared@Voperation_guard@wil@@$$V@std@@YA?AV?$shared_ptr@Voperation_guard@wil@@@0@XZ @ 0x1800D1F7C
 * Callers:
 *     ??0?$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@BluetoothControls@@QEAA@XZ @ 0x1800D1FFC (--0-$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@BluetoothControls.c)
 *     ??0?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@QEAA@XZ @ 0x1800D2098 (--0-$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothCont.c)
 *     ??0BluetoothVolumeAndMute@BluetoothControls@@QEAA@XZ @ 0x1800D2338 (--0BluetoothVolumeAndMute@BluetoothControls@@QEAA@XZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180015ED0 (--2@YAPEAX_K@Z.c)
 *     ??$_Construct_in_place@Voperation_guard@wil@@$$V@std@@YAXAEAVoperation_guard@wil@@@Z @ 0x1800D1BAC (--$_Construct_in_place@Voperation_guard@wil@@$$V@std@@YAXAEAVoperation_guard@wil@@@Z.c)
 */

_QWORD *__fastcall std::make_shared<wil::operation_guard,>(_QWORD *a1)
{
  _DWORD *v2; // rax
  __int64 v3; // rdx

  v2 = operator new(0x20uLL);
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj2<wil::operation_guard>::`vftable';
    std::_Construct_in_place<wil::operation_guard,>((_QWORD *)v2 + 2);
  }
  else
  {
    v3 = 0LL;
  }
  a1[1] = v3;
  *a1 = v3 + 16;
  return a1;
}
