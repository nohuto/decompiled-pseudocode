/*
 * XREFs of ??0?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@QEAA@XZ @ 0x1800D2098
 * Callers:
 *     ??0BluetoothVolume@BluetoothControls@@QEAA@XZ @ 0x1800D2300 (--0BluetoothVolume@BluetoothControls@@QEAA@XZ.c)
 * Callees:
 *     ??$make_shared@Voperation_guard@wil@@$$V@std@@YA?AV?$shared_ptr@Voperation_guard@wil@@@0@XZ @ 0x1800D1F7C (--$make_shared@Voperation_guard@wil@@$$V@std@@YA-AV-$shared_ptr@Voperation_guard@wil@@@0@XZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VIVolumeControlHandler@@@WRL@Microsoft@@QEAA@XZ @ 0x1800D21A4 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VIVolumeControlHandler@@@WRL@Microsoft.c)
 */

__int64 __fastcall BluetoothControls::BluetoothControl<IVolumeControlHandler,BluetoothControls::BluetoothVolume>::BluetoothControl<IVolumeControlHandler,BluetoothControls::BluetoothVolume>(
        __int64 a1)
{
  __int64 result; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IVolumeControlHandler>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IVolumeControlHandler>(a1);
  *(_QWORD *)a1 = &BluetoothControls::BluetoothControl<IVolumeControlHandler,BluetoothControls::BluetoothVolume>::`vftable';
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 7LL;
  *(_WORD *)(a1 + 16) = 0;
  *(_OWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 7LL;
  *(_WORD *)(a1 + 48) = 0;
  *(_WORD *)(a1 + 112) = 0;
  *(GUID *)(a1 + 84) = GUID_00000000_0000_0000_0000_000000000000;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_BYTE *)(a1 + 148) = 0;
  std::make_shared<wil::operation_guard,>((_QWORD *)(a1 + 152));
  result = a1;
  *(_BYTE *)(a1 + 168) = 0;
  return result;
}
