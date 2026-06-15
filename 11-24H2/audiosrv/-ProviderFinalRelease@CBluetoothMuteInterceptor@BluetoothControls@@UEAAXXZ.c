/*
 * XREFs of ?ProviderFinalRelease@CBluetoothMuteInterceptor@BluetoothControls@@UEAAXXZ @ 0x1800D5F50
 * Callers:
 *     <none>
 * Callees:
 *     ?ProviderFinalRelease@BluetoothVolumeAndMute@BluetoothControls@@QEAAXXZ @ 0x1800D5E38 (-ProviderFinalRelease@BluetoothVolumeAndMute@BluetoothControls@@QEAAXXZ.c)
 */

void __fastcall BluetoothControls::CBluetoothMuteInterceptor::ProviderFinalRelease(
        BluetoothControls::CBluetoothMuteInterceptor *this)
{
  char *v1; // rbx
  BluetoothControls::BluetoothVolumeAndMute *v2; // rcx

  v1 = (char *)this + 16;
  v2 = (BluetoothControls::BluetoothVolumeAndMute *)*((_QWORD *)this + 2);
  if ( v2 )
    BluetoothControls::BluetoothVolumeAndMute::ProviderFinalRelease(v2);
  wil::com_ptr_t<BluetoothControls::BluetoothVolumeAndMute,wil::err_exception_policy>::reset(v1);
}
