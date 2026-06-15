/*
 * XREFs of ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VIVolumeControlHandler@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x1800D053C
 * Callers:
 *     ??0?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@QEAA@XZ @ 0x1800D0434 (--0-$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothCont.c)
 * Callees:
 *     ??0?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@VIVolumeControlHandler@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800D0504 (--0-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@VIVolumeControlHandler@@@Detai.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IVolumeControlHandler>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IVolumeControlHandler>(
        IVolumeControlHandler *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,IVolumeControlHandler>::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,IVolumeControlHandler>(a1);
  result = v1;
  *(_DWORD *)(v1 + 12) = 1;
  return result;
}
