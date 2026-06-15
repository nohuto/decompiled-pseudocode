/*
 * XREFs of ??$CreateGitHelper@U?$ITypedEventHandler@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@V?$GitPtrSupportsAgile@U?$ITypedEventHandler@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@@Internal@3@@Details@Internal@Windows@@YAJPEAU?$ITypedEventHandler@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@2@PEAPEAU342@@Z @ 0x14001A5B4
 * Callers:
 *     ?Add@?$GitEventSourceSupportsAgile@U?$ITypedEventHandler@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@Internal@Windows@@QEAAJPEAU?$ITypedEventHandler@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@3@PEAUEventRegistrationToken@@@Z @ 0x14001A504 (-Add@-$GitEventSourceSupportsAgile@U-$ITypedEventHandler@PEAVAudioDeviceBrokerDevice@Internal@De.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x140012DA8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??B?$ComPtrRef@VAgileRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVAgileRef@23@XZ @ 0x140019694 (--B-$ComPtrRef@VAgileRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVAgileRef@23@XZ.c)
 *     ??$Make@U?$GitInvokeHelper@U?$ITypedEventHandler@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@V?$GitPtrSupportsAgile@U?$ITypedEventHandler@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@@Internal@3@$01@Details@Internal@Windows@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@U?$GitInvokeHelper@U?$ITypedEventHandler@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@V?$GitPtrSupportsAgile@U?$ITypedEventHandler@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@@Internal@3@$01@Details@Internal@Windows@@@12@XZ @ 0x14001A6BC (--$Make@U-$GitInvokeHelper@U-$ITypedEventHandler@PEAVAudioDeviceBrokerDevice@Internal@Devices@Me.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::Internal::Details::CreateGitHelper<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>,Windows::Internal::GitPtrSupportsAgile<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>>>(
        __int64 a1,
        _QWORD *a2)
{
  char *v4; // rax
  __int64 *v5; // rbx
  __int64 v6; // rcx
  int AgileReference; // edi
  __int64 *v9; // rax
  __int64 *v10; // rdi
  __int64 v11; // rcx
  char v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+58h] [rbp+10h] BYREF
  __int64 *v14; // [rsp+60h] [rbp+18h] BYREF

  *a2 = 0LL;
  v4 = (char *)Microsoft::WRL::Details::Make<Windows::Internal::Details::GitInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>,Windows::Internal::GitPtrSupportsAgile<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>>,2>,>(&v13);
  v5 = 0LL;
  if ( &v12 != v4 )
  {
    v5 = *(__int64 **)v4;
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
  v14 = v5 + 6;
  v9 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::AgileRef>::operator Microsoft::WRL::AgileRef *(&v14);
  v10 = v9;
  if ( a1 )
  {
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v9);
    AgileReference = RoGetAgileReference(0LL, &GUID_26b3f929_7275_5554_8092_5102d037ae06, a1, v10);
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
  AgileReference = (*(__int64 (__fastcall **)(__int64 *, GUID *, _QWORD *))*v5)(
                     v5,
                     &GUID_26b3f929_7275_5554_8092_5102d037ae06,
                     a2);
LABEL_7:
  if ( v5 )
    (*(void (__fastcall **)(__int64 *))(*v5 + 16))(v5);
  return (unsigned int)AgileReference;
}
