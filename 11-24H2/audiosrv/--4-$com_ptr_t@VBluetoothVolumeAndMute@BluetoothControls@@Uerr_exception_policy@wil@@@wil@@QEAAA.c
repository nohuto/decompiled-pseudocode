/*
 * XREFs of ??4?$com_ptr_t@VBluetoothVolumeAndMute@BluetoothControls@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAVBluetoothVolumeAndMute@BluetoothControls@@@Z @ 0x1800D286C
 * Callers:
 *     ??$MakeAndInitialize@VCBluetoothMuteInterceptor@BluetoothControls@@VIMuteControlHandler@@PEAVBluetoothVolumeAndMute@2@@Details@WRL@Microsoft@@YAJPEAPEAVIMuteControlHandler@@$$QEAPEAVBluetoothVolumeAndMute@BluetoothControls@@@Z @ 0x1800D1880 (--$MakeAndInitialize@VCBluetoothMuteInterceptor@BluetoothControls@@VIMuteControlHandler@@PEAVBlu.c)
 *     ??$MakeAndInitialize@VCBluetoothVolumeInterceptor@BluetoothControls@@VIVolumeControlHandler@@PEAVBluetoothVolumeAndMute@2@@Details@WRL@Microsoft@@YAJPEAPEAVIVolumeControlHandler@@$$QEAPEAVBluetoothVolumeAndMute@BluetoothControls@@@Z @ 0x1800D1984 (--$MakeAndInitialize@VCBluetoothVolumeInterceptor@BluetoothControls@@VIVolumeControlHandler@@PEA.c)
 *     BluetoothControls::GetOrCreateBluetoothVolumeAndMute @ 0x1800D466C (BluetoothControls--GetOrCreateBluetoothVolumeAndMute.c)
 *     ?TryGetOwner@CBluetoothMuteInterceptor@BluetoothControls@@AEBAJAEAV?$com_ptr_t@VBluetoothVolumeAndMute@BluetoothControls@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800D8210 (-TryGetOwner@CBluetoothMuteInterceptor@BluetoothControls@@AEBAJAEAV-$com_ptr_t@VBluetoothVolumeA.c)
 *     ?TryGetOwner@CBluetoothVolumeInterceptor@BluetoothControls@@AEBAJAEAV?$com_ptr_t@VBluetoothVolumeAndMute@BluetoothControls@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800D825C (-TryGetOwner@CBluetoothVolumeInterceptor@BluetoothControls@@AEBAJAEAV-$com_ptr_t@VBluetoothVolum.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18000D600 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000F870 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 */

volatile signed __int32 **__fastcall wil::com_ptr_t<BluetoothControls::BluetoothVolumeAndMute,wil::err_exception_policy>::operator=(
        volatile signed __int32 **a1,
        volatile int *a2)
{
  volatile signed __int32 *v2; // r8

  v2 = *a1;
  *a1 = a2;
  if ( a2 )
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(a2 + 3), a2);
  if ( v2 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v2);
  return a1;
}
