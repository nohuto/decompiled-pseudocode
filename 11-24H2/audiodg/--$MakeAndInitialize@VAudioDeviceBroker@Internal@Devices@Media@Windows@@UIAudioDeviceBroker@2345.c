/*
 * XREFs of ??$MakeAndInitialize@VAudioDeviceBroker@Internal@Devices@Media@Windows@@UIAudioDeviceBroker@2345@AEAPEAX@Details@WRL@Microsoft@@YAJPEAPEAUIAudioDeviceBroker@Internal@Devices@Media@Windows@@AEAPEAX@Z @ 0x14001AA44
 * Callers:
 *     ?RuntimeClassInitialize@AudioDeviceModulesManager@Devices@Media@Windows@@QEAAJPEAX@Z @ 0x14001A928 (-RuntimeClassInitialize@AudioDeviceModulesManager@Devices@Media@Windows@@QEAAJPEAX@Z.c)
 * Callees:
 *     ??0AudioDeviceBroker@Internal@Devices@Media@Windows@@QEAA@XZ @ 0x14001ACDC (--0AudioDeviceBroker@Internal@Devices@Media@Windows@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@AudioDeviceBroker@Internal@Devices@Media@Windows@@QEAAJPEAX@Z @ 0x14001ADB8 (-RuntimeClassInitialize@AudioDeviceBroker@Internal@Devices@Media@Windows@@QEAAJPEAX@Z.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAudioDeviceBroker@Internal@Devices@Media@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$00@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAudioDeviceBroker@Internal@Devices@Media@Windows@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x14001C2C8 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAu_ea_14001C2C8.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAudioDeviceBroker@Internal@Devices@Media@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x14001C3D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAud_ea_14001C3D0.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x140058D58 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::Media::Devices::Internal::AudioDeviceBroker,Windows::Media::Devices::Internal::IAudioDeviceBroker,void * &>(
        _QWORD *a1,
        void **a2)
{
  Windows::Media::Devices::Internal::AudioDeviceBroker *v4; // rax
  Windows::Media::Devices::Internal::AudioDeviceBroker *v5; // rbx
  int v6; // edi

  *a1 = 0LL;
  v4 = (Windows::Media::Devices::Internal::AudioDeviceBroker *)operator new(
                                                                 0x68uLL,
                                                                 (const struct std::nothrow_t *)&std::nothrow);
  if ( !v4 )
    return 2147942414LL;
  v5 = (Windows::Media::Devices::Internal::AudioDeviceBroker *)Windows::Media::Devices::Internal::AudioDeviceBroker::AudioDeviceBroker(v4);
  v6 = Windows::Media::Devices::Internal::AudioDeviceBroker::RuntimeClassInitialize(v5, *a2);
  if ( v6 >= 0 )
    v6 = Microsoft::WRL::Details::RuntimeClassBaseT<1>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Media::Devices::Internal::IAudioDeviceBroker,Microsoft::WRL::FtmBase>>(
           v5,
           &GUID_57334b0d_4eb7_46ad_b19d_e41a029e3674,
           a1);
  if ( v5 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Media::Devices::Internal::IAudioDeviceBroker,Microsoft::WRL::FtmBase>::Release(v5);
  return (unsigned int)v6;
}
