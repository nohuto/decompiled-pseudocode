/*
 * XREFs of ??_G?$RuntimeClass@UIAudioDeviceModulesManager@Devices@Media@Windows@@VFtmBase@WRL@Microsoft@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1400798D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAudioDeviceModulesManager@Devices@Media@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1400353CC (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAudioDeviceModulesMana.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400591B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void *__fastcall Microsoft::WRL::RuntimeClass<Windows::Media::Devices::IAudioDeviceModulesManager,Microsoft::WRL::FtmBase>::`scalar deleting destructor'(
        void *Block,
        char a2)
{
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Media::Devices::IAudioDeviceModulesManager,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Media::Devices::IAudioDeviceModulesManager,Microsoft::WRL::FtmBase>((__int64)Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
