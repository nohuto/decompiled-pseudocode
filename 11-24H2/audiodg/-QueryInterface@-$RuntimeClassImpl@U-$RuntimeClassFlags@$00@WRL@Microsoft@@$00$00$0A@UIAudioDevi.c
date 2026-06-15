/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAudioDeviceModulesManager@Devices@Media@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14004BE70
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAudioDeviceModulesManager@Devices@Media@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14007B3B0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0_ea_14007B3B0.c)
 *     ?QueryInterface@AudioDeviceModulesManager@Devices@Media@Windows@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14007B3C0 (-QueryInterface@AudioDeviceModulesManager@Devices@Media@Windows@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Media::Devices::IAudioDeviceModulesManager,Microsoft::WRL::FtmBase>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassBaseT<1>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Media::Devices::IAudioDeviceModulesManager,Microsoft::WRL::FtmBase>>(
           a1,
           a2,
           a3);
}
