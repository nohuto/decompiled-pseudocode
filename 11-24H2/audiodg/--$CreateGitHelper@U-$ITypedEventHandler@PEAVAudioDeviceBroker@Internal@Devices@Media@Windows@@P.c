/*
 * XREFs of ??$CreateGitHelper@U?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@V?$GitPtrSupportsAgile@U?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@@Internal@3@@Details@Internal@Windows@@YAJPEAU?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@2@PEAPEAU342@@Z @ 0x140019214
 * Callers:
 *     ?Add@?$GitEventSourceSupportsAgile@U?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@Internal@Windows@@QEAAJPEAU?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@3@PEAUEventRegistrationToken@@@Z @ 0x140019164 (-Add@-$GitEventSourceSupportsAgile@U-$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x140012DD8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$Make@U?$GitInvokeHelper@U?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@V?$GitPtrSupportsAgile@U?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@@Internal@3@$01@Details@Internal@Windows@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@U?$GitInvokeHelper@U?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@V?$GitPtrSupportsAgile@U?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@@Internal@3@$01@Details@Internal@Windows@@@12@XZ @ 0x14001931C (--$Make@U-$GitInvokeHelper@U-$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Wi.c)
 *     ??B?$ComPtrRef@VAgileRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVAgileRef@23@XZ @ 0x140019394 (--B-$ComPtrRef@VAgileRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVAgileRef@23@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::Details::CreateGitHelper<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBroker *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>,Windows::Internal::GitPtrSupportsAgile<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBroker *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>>>(
        __int64 a1,
        _QWORD *a2)
{
  char *v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rcx
  int AgileReference; // edi
  __int64 *v9; // rax
  __int64 *v10; // rdi
  __int64 v11; // rcx
  char v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+58h] [rbp+10h] BYREF
  __int64 v14; // [rsp+60h] [rbp+18h] BYREF

  *a2 = 0LL;
  v4 = (char *)Microsoft::WRL::Details::Make<Windows::Internal::Details::GitInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBroker *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>,Windows::Internal::GitPtrSupportsAgile<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBroker *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>>,2>,>(&v13);
  v5 = 0LL;
  if ( &v12 != v4 )
  {
    v5 = *(_QWORD *)v4;
    *(_QWORD *)v4 = 0LL;
  }
  v6 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  if ( !v5 )
  {
    AgileReference = -2147024882;
    goto LABEL_7;
  }
  v14 = v5 + 48;
  v9 = (__int64 *)Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::AgileRef>::operator Microsoft::WRL::AgileRef *(&v14);
  v10 = v9;
  if ( a1 )
  {
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v9);
    AgileReference = RoGetAgileReference(0LL, &GUID_610c5f91_da25_52b0_ae7d_2d3a45cdf4ef, a1, v10);
    if ( AgileReference < 0 )
      goto LABEL_7;
  }
  else
  {
    v11 = *v9;
    *v9 = 0LL;
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  AgileReference = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v5)(
                     v5,
                     &GUID_610c5f91_da25_52b0_ae7d_2d3a45cdf4ef,
                     a2);
LABEL_7:
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  return (unsigned int)AgileReference;
}
