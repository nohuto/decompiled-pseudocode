/*
 * XREFs of ??$CreateExternalObjectVector@VAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@V?$Vector@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@U?$DefaultVectorOptions@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@@2Collections@Foundation@5@@detail@Internal@Collections@Foundation@Windows@@YAJP8IVectorStatics@Detail@234@EAAJPEBUObjectVectorInfo@6234@PEAPEAUIInspectable@@@ZPEAPEAV?$Vector@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@U?$DefaultVectorOptions@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@@1234@@Z @ 0x14001B364
 * Callers:
 *     ?RuntimeClassInitialize@AudioDeviceBroker@Internal@Devices@Media@Windows@@QEAAJPEAX@Z @ 0x14001B0B8 (-RuntimeClassInitialize@AudioDeviceBroker@Internal@Devices@Media@Windows@@QEAAJPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x140012DA8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x14001B880 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x140058DE0 (__security_check_cookie.c)
 *     ??_9IVectorStatics@Detail@Collections@Foundation@Windows@@$BPA@AA @ 0x140079748 (--_9IVectorStatics@Detail@Collections@Foundation@Windows@@$BPA@AA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Foundation::Collections::Internal::detail::CreateExternalObjectVector<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice,Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *>>>(
        __int64 a1,
        __int64 *a2)
{
  HRESULT v3; // eax
  int ActivationFactory; // ebx
  __int64 v5; // rcx
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rax
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

  v13[0] = L"Windows.Foundation.Collections.IVector`1<Windows.Media.Devices.Internal.AudioDeviceBrokerDevice>";
  Microsoft::WRL::Wrappers::HStringReference::HStringReference(v22, v13);
  v13[0] = L"Windows.Foundation.Collections.IVectorView`1<Windows.Media.Devices.Internal.AudioDeviceBrokerDevice>";
  Microsoft::WRL::Wrappers::HStringReference::HStringReference(v24, v13);
  v13[0] = L"Windows.Foundation.Collections.IIterator`1<Windows.Media.Devices.Internal.AudioDeviceBrokerDevice>";
  Microsoft::WRL::Wrappers::HStringReference::HStringReference(v26, v13);
  v14[0] = v23;
  v14[1] = v25;
  v14[2] = v27;
  v15 = GUID_79cc8d75_9666_4c7d_90b9_56de0ec14239;
  v16 = GUID_c8b3e5b9_f098_5761_91d3_fe2593e0be27;
  v17 = GUID_6fbeabae_60e4_5839_b44e_5b46d4d85fa6;
  v18 = GUID_af4c50bf_f8e2_5d7e_a04c_d1dae1b23c36;
  v19 = GUID_1b52cd56_3a61_568f_973a_30a3e653fb18;
  v11 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v11);
  string = 0LL;
  v3 = WindowsCreateStringReference(L"Windows.Foundation.Collections.Detail.Vector", 0x2Cu, &hstringHeader, &string);
  if ( v3 < 0 )
  {
    RaiseException(v3, 1u, 0, 0LL);
    __debugbreak();
  }
  else
  {
    ActivationFactory = RoGetActivationFactory(string, &GUID_08c77958_89bf_5cf8_a9cd_c72147b9b3a9, &v11);
    if ( ActivationFactory < 0 )
    {
      v5 = v11;
      if ( v11 )
      {
        v11 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      }
      return (unsigned int)ActivationFactory;
    }
    v12 = 0LL;
    v7 = v11;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
    ActivationFactory =  Windows::Foundation::Collections::Detail::IVectorStatics::`vcall'{240,{flat}}(v7, v14, &v12);
    if ( ActivationFactory < 0 )
    {
      v8 = v12;
      if ( v12 )
      {
        v12 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      }
      v9 = v11;
      if ( v11 )
      {
        v11 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      }
      return (unsigned int)ActivationFactory;
    }
  }
  v10 = v12;
  v12 = 0LL;
  *a2 = v10;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v11);
  return 0LL;
}
