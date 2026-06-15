/*
 * XREFs of ?QueryInterface@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140057BD0
 * Callers:
 *     ?QueryInterface@AudioDeviceBroker@Internal@Devices@Media@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14007D540 (-QueryInterface@AudioDeviceBroker@Internal@Devices@Media@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@AudioDeviceBroker@Internal@Devices@Media@Windows@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14007D550 (-QueryInterface@AudioDeviceBroker@Internal@Devices@Media@Windows@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Media::Devices::Internal::AudioDeviceBroker::QueryInterface(
        __int64 this,
        _DWORD *a2,
        _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassBaseT<1>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Media::Devices::Internal::IAudioDeviceBroker,Microsoft::WRL::FtmBase>>(
           this,
           a2,
           a3);
}
