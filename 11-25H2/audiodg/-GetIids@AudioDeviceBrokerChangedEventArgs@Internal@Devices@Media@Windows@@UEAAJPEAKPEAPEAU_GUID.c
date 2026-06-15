/*
 * XREFs of ?GetIids@AudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x14007B780
 * Callers:
 *     <none>
 * Callees:
 *     ?FillArrayWithIid@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIAudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@UIWeakReferenceSource@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x14007A7B0 (-FillArrayWithIid@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIAudioDeviceBr.c)
 */

__int64 __fastcall Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs::GetIids(
        Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rcx
  LPVOID v7; // r8
  struct _GUID *v8; // r8
  unsigned int v10; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v7 = CoTaskMemAlloc(0x20uLL);
  if ( v7 )
  {
    v10 = 0;
    Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,0,Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs,IWeakReferenceSource,Microsoft::WRL::FtmBase>::FillArrayWithIid(
      v6,
      &v10,
      (__int64)v7);
    *a2 = 2;
    *a3 = v8;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
