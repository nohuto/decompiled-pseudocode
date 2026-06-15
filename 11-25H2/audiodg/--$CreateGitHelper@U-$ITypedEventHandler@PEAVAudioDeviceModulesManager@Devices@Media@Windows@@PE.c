/*
 * XREFs of ??$CreateGitHelper@U?$ITypedEventHandler@PEAVAudioDeviceModulesManager@Devices@Media@Windows@@PEAVAudioDeviceModuleNotificationEventArgs@234@@Foundation@Windows@@V?$GitPtrSupportsAgile@U?$ITypedEventHandler@PEAVAudioDeviceModulesManager@Devices@Media@Windows@@PEAVAudioDeviceModuleNotificationEventArgs@234@@Foundation@Windows@@@Internal@3@@Details@Internal@Windows@@YAJPEAU?$ITypedEventHandler@PEAVAudioDeviceModulesManager@Devices@Media@Windows@@PEAVAudioDeviceModuleNotificationEventArgs@234@@Foundation@2@PEAPEAU342@@Z @ 0x14007758C
 * Callers:
 *     ?add_ModuleNotificationReceived@AudioDeviceModulesManager@Devices@Media@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVAudioDeviceModulesManager@Devices@Media@Windows@@PEAVAudioDeviceModuleNotificationEventArgs@234@@Foundation@4@PEAUEventRegistrationToken@@@Z @ 0x140080520 (-add_ModuleNotificationReceived@AudioDeviceModulesManager@Devices@Media@Windows@@UEAAJPEAU-$ITyp.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x140012DA8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??B?$ComPtrRef@VAgileRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVAgileRef@23@XZ @ 0x140019694 (--B-$ComPtrRef@VAgileRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVAgileRef@23@XZ.c)
 *     ??$Make@U?$GitInvokeHelper@U?$ITypedEventHandler@PEAVAudioDeviceModulesManager@Devices@Media@Windows@@PEAVAudioDeviceModuleNotificationEventArgs@234@@Foundation@Windows@@V?$GitPtrSupportsAgile@U?$ITypedEventHandler@PEAVAudioDeviceModulesManager@Devices@Media@Windows@@PEAVAudioDeviceModuleNotificationEventArgs@234@@Foundation@Windows@@@Internal@3@$01@Details@Internal@Windows@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@U?$GitInvokeHelper@U?$ITypedEventHandler@PEAVAudioDeviceModulesManager@Devices@Media@Windows@@PEAVAudioDeviceModuleNotificationEventArgs@234@@Foundation@Windows@@V?$GitPtrSupportsAgile@U?$ITypedEventHandler@PEAVAudioDeviceModulesManager@Devices@Media@Windows@@PEAVAudioDeviceModuleNotificationEventArgs@234@@Foundation@Windows@@@Internal@3@$01@Details@Internal@Windows@@@12@XZ @ 0x140078438 (--$Make@U-$GitInvokeHelper@U-$ITypedEventHandler@PEAVAudioDeviceModulesManager@Devices@Media@Win.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::Details::CreateGitHelper<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::AudioDeviceModulesManager *,Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs *>,Windows::Internal::GitPtrSupportsAgile<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::AudioDeviceModulesManager *,Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs *>>>(
        __int64 a1,
        _QWORD *a2)
{
  char *v4; // rax
  __int64 *v5; // rbx
  __int64 v6; // rcx
  int AgileReference; // edi
  __int64 *v8; // rax
  __int64 *v9; // rdi
  char v11; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+58h] [rbp+10h] BYREF
  __int64 *v13; // [rsp+60h] [rbp+18h] BYREF
  __int64 v14; // [rsp+68h] [rbp+20h] BYREF

  *a2 = 0LL;
  v4 = (char *)Microsoft::WRL::Details::Make<Windows::Internal::Details::GitInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::AudioDeviceModulesManager *,Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs *>,Windows::Internal::GitPtrSupportsAgile<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::AudioDeviceModulesManager *,Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs *>>,2>,>(&v12);
  v5 = 0LL;
  if ( &v11 != v4 )
  {
    v5 = *(__int64 **)v4;
    *(_QWORD *)v4 = 0LL;
  }
  v6 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  if ( !v5 )
  {
    AgileReference = -2147024882;
    goto LABEL_12;
  }
  v13 = v5 + 6;
  v8 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::AgileRef>::operator Microsoft::WRL::AgileRef *(&v13);
  v9 = v8;
  if ( a1 )
  {
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v8);
    AgileReference = RoGetAgileReference(0LL, &GUID_b2f6b1fd_7092_5724_b2ce_91b1176e80e1, a1, v9);
    if ( AgileReference < 0 )
      goto LABEL_12;
  }
  else
  {
    v14 = 0LL;
    v13 = (__int64 *)*v8;
    *v8 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v13);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
  }
  AgileReference = (*(__int64 (__fastcall **)(__int64 *, GUID *, _QWORD *))*v5)(
                     v5,
                     &GUID_b2f6b1fd_7092_5724_b2ce_91b1176e80e1,
                     a2);
LABEL_12:
  if ( v5 )
    (*(void (__fastcall **)(__int64 *))(*v5 + 16))(v5);
  return (unsigned int)AgileReference;
}
