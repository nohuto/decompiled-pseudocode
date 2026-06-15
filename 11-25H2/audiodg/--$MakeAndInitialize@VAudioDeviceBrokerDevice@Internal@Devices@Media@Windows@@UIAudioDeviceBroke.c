/*
 * XREFs of ??$MakeAndInitialize@VAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UIAudioDeviceBrokerDevice@2345@AEAPEAX@Details@WRL@Microsoft@@YAJPEAPEAUIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@AEAPEAX@Z @ 0x14001B9EC
 * Callers:
 *     ?RuntimeClassInitialize@AudioDeviceBroker@Internal@Devices@Media@Windows@@QEAAJPEAX@Z @ 0x14001B0B8 (-RuntimeClassInitialize@AudioDeviceBroker@Internal@Devices@Media@Windows@@QEAAJPEAX@Z.c)
 * Callees:
 *     ??0AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@QEAA@XZ @ 0x14001BA8C (--0AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@QEAAJPEAX@Z @ 0x14001BBB8 (-RuntimeClassInitialize@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@QEAAJPEAX@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x14001C460 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAudioDeviceBroke.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$00@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x14001C4EC (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAudioDeviceBrok.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x140058E48 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice,Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice,void * &>(
        _QWORD *a1,
        void **a2)
{
  Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *v4; // rax
  Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *v5; // rbx
  int v6; // edi

  *a1 = 0LL;
  v4 = (Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *)operator new(
                                                                       0xE8uLL,
                                                                       (const struct std::nothrow_t *)&std::nothrow);
  if ( !v4 )
    return 2147942414LL;
  v5 = (Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *)Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::AudioDeviceBrokerDevice(v4);
  v6 = Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::RuntimeClassInitialize(v5, *a2);
  if ( v6 >= 0 )
    v6 = Microsoft::WRL::Details::RuntimeClassBaseT<1>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice,Microsoft::WRL::FtmBase>>(
           v5,
           &GUID_79cc8d75_9666_4c7d_90b9_56de0ec14239,
           a1);
  if ( v5 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice,Microsoft::WRL::FtmBase>::Release(v5);
  return (unsigned int)v6;
}
