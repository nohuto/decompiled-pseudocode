/*
 * XREFs of ?FillArrayWithIid@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$0A@UIAudioDeviceBroker@Internal@Devices@Media@Windows@@UIWeakReferenceSource@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x14007A6D8
 * Callers:
 *     ?GetIids@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x14007B4C0 (-GetIids@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,0,Windows::Media::Devices::Internal::IAudioDeviceBroker,IWeakReferenceSource,Microsoft::WRL::FtmBase>::FillArrayWithIid(
        __int64 a1,
        unsigned int *a2,
        __int64 a3)
{
  __int64 v3; // rcx

  v3 = *a2;
  *(GUID *)(a3 + 16 * v3) = GUID_57334b0d_4eb7_46ad_b19d_e41a029e3674;
  *a2 = v3 + 1;
  return Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource,Microsoft::WRL::FtmBase>::FillArrayWithIid(
           v3,
           a2,
           a3);
}
