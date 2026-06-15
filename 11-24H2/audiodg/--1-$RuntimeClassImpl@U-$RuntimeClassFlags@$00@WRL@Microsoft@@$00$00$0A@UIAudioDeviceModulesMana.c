/*
 * XREFs of ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAudioDeviceModulesManager@Devices@Media@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1400350CC
 * Callers:
 *     ??1AudioDeviceModulesManager@Devices@Media@Windows@@MEAA@XZ @ 0x14001A708 (--1AudioDeviceModulesManager@Devices@Media@Windows@@MEAA@XZ.c)
 *     ??_G?$RuntimeClass@UIAudioDeviceModulesManager@Devices@Media@Windows@@VFtmBase@WRL@Microsoft@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x140077410 (--_G-$RuntimeClass@UIAudioDeviceModulesManager@Devices@Media@Windows@@VFtmBase@WRL@Microsoft@@@W.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x140035190 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Media::Devices::IAudioDeviceModulesManager,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Media::Devices::IAudioDeviceModulesManager,Microsoft::WRL::FtmBase>(
        __int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 56);
  if ( v2 < 0 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release(2 * v2);
  return Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(a1 + 40));
}
