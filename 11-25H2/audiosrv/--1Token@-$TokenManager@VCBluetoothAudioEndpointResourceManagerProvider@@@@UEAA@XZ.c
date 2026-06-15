/*
 * XREFs of ??1Token@?$TokenManager@VCBluetoothAudioEndpointResourceManagerProvider@@@@UEAA@XZ @ 0x1800EC8FC
 * Callers:
 *     ??_GToken@?$TokenManager@VCBluetoothAudioEndpointResourceManagerProvider@@@@UEAAPEAXI@Z @ 0x1800ECC40 (--_GToken@-$TokenManager@VCBluetoothAudioEndpointResourceManagerProvider@@@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIMulticastProvider@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800A43C4 (--1-$com_ptr_t@UIMulticastProvider@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

__int64 __fastcall TokenManager<CBluetoothAudioEndpointResourceManagerProvider>::Token::~Token(__int64 a1)
{
  wil::com_ptr_t<IMulticastProvider,wil::err_returncode_policy>::~com_ptr_t<IMulticastProvider,wil::err_returncode_policy>((__int64 *)(a1 + 48));
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioModeEffectsWatcher>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioModeEffectsWatcher>(a1);
}
