/*
 * XREFs of ??0BluetoothVolumeAndMute@BluetoothControls@@QEAA@XZ @ 0x1800D2338
 * Callers:
 *     ??$MakeAndInitialize@VBluetoothVolumeAndMute@BluetoothControls@@V12@AEAPEAUIMMDevice@@AEAPEBGAEAPEAUIControlChangeNotify@@@Details@WRL@Microsoft@@YAJPEAPEAVBluetoothVolumeAndMute@BluetoothControls@@AEAPEAUIMMDevice@@AEAPEBGAEAPEAUIControlChangeNotify@@@Z @ 0x1800D17B0 (--$MakeAndInitialize@VBluetoothVolumeAndMute@BluetoothControls@@V12@AEAPEAUIMMDevice@@AEAPEBGAEA.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ @ 0x180069138 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??$make_shared@Voperation_guard@wil@@$$V@std@@YA?AV?$shared_ptr@Voperation_guard@wil@@@0@XZ @ 0x1800D1F7C (--$make_shared@Voperation_guard@wil@@$$V@std@@YA-AV-$shared_ptr@Voperation_guard@wil@@@0@XZ.c)
 */

BluetoothControls::BluetoothVolumeAndMute *__fastcall BluetoothControls::BluetoothVolumeAndMute::BluetoothVolumeAndMute(
        BluetoothControls::BluetoothVolumeAndMute *this)
{
  BluetoothControls::BluetoothVolumeAndMute *result; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>(this);
  *(_QWORD *)this = &BluetoothControls::BluetoothVolumeAndMute::`vftable';
  *((_OWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 7LL;
  *((_WORD *)this + 8) = 0;
  *((_OWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 7LL;
  *((_WORD *)this + 24) = 0;
  *(GUID *)((char *)this + 84) = GUID_00000000_0000_0000_0000_000000000000;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  std::make_shared<wil::operation_guard,>((_QWORD *)this + 18);
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  result = this;
  *((_BYTE *)this + 180) = 0;
  *((_BYTE *)this + 188) = 0;
  *((_BYTE *)this + 193) = 0;
  *((_BYTE *)this + 216) = 0;
  *((_BYTE *)this + 240) = 0;
  *((_BYTE *)this + 244) = 0;
  *((_BYTE *)this + 268) = 0;
  *((_BYTE *)this + 272) = 0;
  *((_BYTE *)this + 276) = 0;
  *((_DWORD *)this + 70) = 0;
  return result;
}
