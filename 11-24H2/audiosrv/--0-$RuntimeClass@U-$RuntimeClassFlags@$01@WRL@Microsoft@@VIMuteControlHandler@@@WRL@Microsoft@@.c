/*
 * XREFs of ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VIMuteControlHandler@@@WRL@Microsoft@@QEAA@XZ @ 0x1800D2164
 * Callers:
 *     ??$MakeAndInitialize@VCBluetoothMuteInterceptor@BluetoothControls@@VIMuteControlHandler@@PEAVBluetoothVolumeAndMute@2@@Details@WRL@Microsoft@@YAJPEAPEAVIMuteControlHandler@@$$QEAPEAVBluetoothVolumeAndMute@BluetoothControls@@@Z @ 0x1800D1880 (--$MakeAndInitialize@VCBluetoothMuteInterceptor@BluetoothControls@@VIMuteControlHandler@@PEAVBlu.c)
 *     ??0?$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@BluetoothControls@@QEAA@XZ @ 0x1800D1FFC (--0-$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@BluetoothControls.c)
 * Callees:
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VIMuteControlHandler@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x1800D21E4 (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VIMuteControlHandler@@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IMuteControlHandler>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IMuteControlHandler>(
        _QWORD *a1)
{
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IMuteControlHandler>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IMuteControlHandler>();
  *a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IMuteControlHandler>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return a1;
}
