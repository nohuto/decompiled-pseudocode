/*
 * XREFs of ?QueryInterface@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140058140
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14007D560 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0_ea_14007D560.c)
 *     ?QueryInterface@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14007D570 (-QueryInterface@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@WBA@EAAJAEBU_GUID@@PEAPE.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::QueryInterface(
        __int64 this,
        _DWORD *a2,
        _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassBaseT<1>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice,Microsoft::WRL::FtmBase>>(
           this,
           a2,
           a3);
}
