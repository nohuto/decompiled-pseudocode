/*
 * XREFs of ??1?$ComPtr@VCEndpointStore@@@WRL@Microsoft@@QEAA@XZ @ 0x1800D24CC
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CEndpointStore_CEndpointStore_unsigned_short_const___&__::_1_::dtor$1 @ 0x18016CB03 (_Microsoft--WRL--Details--MakeAndInitialize_CEndpointStore_CEndpointStore_unsigned_short_const__.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_BluetoothControls::BluetoothVolumeAndMute_BluetoothControls::BluetoothVolumeAndMute_IMMDevice___&_unsigned_short_const___&_IControlChangeNotify___&__::_1_::dtor$2 @ 0x18016E306 (_Microsoft--WRL--Details--MakeAndInitialize_BluetoothControls--BluetoothVolumeAndMute_BluetoothC.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000F870 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 */

volatile signed __int32 *__fastcall Microsoft::WRL::ComPtr<CEndpointStore>::~ComPtr<CEndpointStore>(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int32 *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(result);
  }
  return result;
}
