/*
 * XREFs of ?reset@?$com_ptr_t@VBluetoothVolumeAndMute@BluetoothControls@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800D9974
 * Callers:
 *     BluetoothControls::GetOrCreateBluetoothVolumeAndMute @ 0x1800D466C (BluetoothControls--GetOrCreateBluetoothVolumeAndMute.c)
 *     ?ProviderFinalRelease@CBluetoothMuteInterceptor@BluetoothControls@@UEAAXXZ @ 0x1800D5F50 (-ProviderFinalRelease@CBluetoothMuteInterceptor@BluetoothControls@@UEAAXXZ.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000F870 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 */

volatile signed __int32 *__fastcall wil::com_ptr_t<BluetoothControls::BluetoothVolumeAndMute,wil::err_exception_policy>::reset(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
    return (volatile signed __int32 *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(result);
  return result;
}
