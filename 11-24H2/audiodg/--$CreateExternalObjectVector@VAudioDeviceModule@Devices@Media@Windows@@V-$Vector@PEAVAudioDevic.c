/*
 * XREFs of ??$CreateExternalObjectVector@VAudioDeviceModule@Devices@Media@Windows@@V?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@Internal@Collections@Foundation@4@@detail@Internal@Collections@Foundation@Windows@@YAJP8IVectorStatics@Detail@234@EAAJPEBUObjectVectorInfo@6234@PEAPEAUIInspectable@@@ZPEAPEAV?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@1234@@Z @ 0x14001B368
 * Callers:
 *     ?GetAudioModules@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAJPEAPEAU?$IVector@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@5@@Z @ 0x14001A500 (-GetAudioModules@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAJPEAPEAU-$IVector@PEAVAud.c)
 *     ?FindAllById@AudioDeviceModulesManager@Devices@Media@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IVectorView@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@4@@Z @ 0x140078530 (-FindAllById@AudioDeviceModulesManager@Devices@Media@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU-$IVect.c)
 *     ?FindAllByIdAndInstance@AudioDeviceModulesManager@Devices@Media@Windows@@AEAAJPEAUHSTRING__@@IPEAPEAU?$IVectorView@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@4@@Z @ 0x14007870C (-FindAllByIdAndInstance@AudioDeviceModulesManager@Devices@Media@Windows@@AEAAJPEAUHSTRING__@@IPE.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x140012DD8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x14001B580 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x140058CF0 (__security_check_cookie.c)
 *     ??_9IVectorStatics@Detail@Collections@Foundation@Windows@@$BPA@AA @ 0x140077288 (--_9IVectorStatics@Detail@Collections@Foundation@Windows@@$BPA@AA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Foundation::Collections::Internal::detail::CreateExternalObjectVector<Windows::Media::Devices::AudioDeviceModule,Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>>(
        __int64 a1,
        __int64 *a2)
{
  int ActivationFactory; // ebx
  HRESULT v4; // eax
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v12; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD v13[2]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v14[3]; // [rsp+40h] [rbp-C0h] BYREF
  GUID v15; // [rsp+58h] [rbp-A8h]
  GUID v16; // [rsp+68h] [rbp-98h]
  GUID v17; // [rsp+78h] [rbp-88h]
  GUID v18; // [rsp+88h] [rbp-78h]
  GUID v19; // [rsp+98h] [rbp-68h]
  HSTRING_HEADER hstringHeader; // [rsp+B0h] [rbp-50h] BYREF
  HSTRING string; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v22[24]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v23; // [rsp+E8h] [rbp-18h]
  _BYTE v24[24]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v25; // [rsp+108h] [rbp+8h]
  _BYTE v26[24]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v27; // [rsp+128h] [rbp+28h]

  v13[0] = L"Windows.Foundation.Collections.IVector`1<Windows.Media.Devices.AudioDeviceModule>";
  Microsoft::WRL::Wrappers::HStringReference::HStringReference(v22, v13);
  v13[0] = L"Windows.Foundation.Collections.IVectorView`1<Windows.Media.Devices.AudioDeviceModule>";
  Microsoft::WRL::Wrappers::HStringReference::HStringReference(v24, v13);
  v13[0] = L"Windows.Foundation.Collections.IIterator`1<Windows.Media.Devices.AudioDeviceModule>";
  Microsoft::WRL::Wrappers::HStringReference::HStringReference(v26, v13);
  v14[0] = v23;
  v14[1] = v25;
  v14[2] = v27;
  v15 = GUID_86cfac36_47c1_4b33_9852_8773ec4be123;
  v16 = GUID_325cb078_f603_522b_8afe_04b0bfcfa0e9;
  v17 = GUID_b9f55617_48ec_5ad7_95ca_33395284f28b;
  v18 = GUID_7eeb51c3_d70e_548a_85c2_3cf71b4a124c;
  v19 = GUID_b4cbbfb7_9851_56c9_839d_a10a8b1bb234;
  v11 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v11);
  string = 0LL;
  v4 = WindowsCreateStringReference(L"Windows.Foundation.Collections.Detail.Vector", 0x2Cu, &hstringHeader, &string);
  if ( v4 < 0 )
  {
    RaiseException(v4, 1u, 0, 0LL);
    __debugbreak();
    goto LABEL_13;
  }
  ActivationFactory = RoGetActivationFactory(string, &GUID_08c77958_89bf_5cf8_a9cd_c72147b9b3a9, &v11);
  if ( ActivationFactory < 0 )
  {
LABEL_13:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v11);
    return (unsigned int)ActivationFactory;
  }
  v12 = 0LL;
  v5 = v11;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
  ActivationFactory =  Windows::Foundation::Collections::Detail::IVectorStatics::`vcall'{240,{flat}}(v5, v14, &v12);
  if ( ActivationFactory < 0 )
  {
    v6 = v12;
    if ( v12 )
    {
      v12 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    v7 = v11;
    if ( v11 )
    {
      v11 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    return (unsigned int)ActivationFactory;
  }
  v9 = v12;
  v12 = 0LL;
  *a2 = v9;
  v10 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return 0LL;
}
