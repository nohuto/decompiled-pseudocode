/*
 * XREFs of ??$CreateExternalObjectVector@UIBuffer@Streams@Storage@Windows@@V?$Vector@PEAUIBuffer@Streams@Storage@Windows@@U?$DefaultEqualityPredicate@PEAUIBuffer@Streams@Storage@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@6784@U?$DefaultVectorOptions@PEAUIBuffer@Streams@Storage@Windows@@@6784@@Internal@Collections@Foundation@4@@detail@Internal@Collections@Foundation@Windows@@YAJP8IVectorStatics@Detail@234@EAAJPEBUObjectVectorInfo@6234@PEAPEAUIInspectable@@@ZPEAPEAV?$Vector@PEAUIBuffer@Streams@Storage@Windows@@U?$DefaultEqualityPredicate@PEAUIBuffer@Streams@Storage@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@6784@U?$DefaultVectorOptions@PEAUIBuffer@Streams@Storage@Windows@@@6784@@1234@@Z @ 0x14004C7D4
 * Callers:
 *     ?InitializeEvents@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@AEAAJXZ @ 0x14004C48C (-InitializeEvents@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x140012DA8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x14001B880 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x140058DE0 (__security_check_cookie.c)
 *     ??_9IVectorStatics@Detail@Collections@Foundation@Windows@@$BPA@AA @ 0x140079748 (--_9IVectorStatics@Detail@Collections@Foundation@Windows@@$BPA@AA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Foundation::Collections::Internal::detail::CreateExternalObjectVector<Windows::Storage::Streams::IBuffer,Windows::Foundation::Collections::Internal::Vector<Windows::Storage::Streams::IBuffer *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Storage::Streams::IBuffer *>>>(
        __int64 a1,
        __int64 *a2)
{
  HRESULT v3; // eax
  int ActivationFactory; // ebx
  __int64 v5; // rcx
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v10; // [rsp+28h] [rbp-D8h] BYREF
  const WCHAR *v11[2]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v12[3]; // [rsp+40h] [rbp-C0h] BYREF
  GUID v13; // [rsp+58h] [rbp-A8h]
  GUID v14; // [rsp+68h] [rbp-98h]
  GUID v15; // [rsp+78h] [rbp-88h]
  GUID v16; // [rsp+88h] [rbp-78h]
  GUID v17; // [rsp+98h] [rbp-68h]
  HSTRING_HEADER hstringHeader; // [rsp+B0h] [rbp-50h] BYREF
  HSTRING string; // [rsp+C8h] [rbp-38h] BYREF
  HSTRING_HEADER v20; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v21; // [rsp+E8h] [rbp-18h]
  HSTRING_HEADER v22; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v23; // [rsp+108h] [rbp+8h]
  HSTRING_HEADER v24; // [rsp+110h] [rbp+10h] BYREF
  __int64 v25; // [rsp+128h] [rbp+28h]

  v11[0] = L"Windows.Foundation.Collections.IVector`1<Windows.Storage.Streams.IBuffer>";
  Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v20, v11);
  v11[0] = L"Windows.Foundation.Collections.IVectorView`1<Windows.Storage.Streams.IBuffer>";
  Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v22, v11);
  v11[0] = L"Windows.Foundation.Collections.IIterator`1<Windows.Storage.Streams.IBuffer>";
  Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v24, v11);
  v12[0] = v21;
  v12[1] = v23;
  v12[2] = v25;
  v13 = GUID_905a0fe0_bc53_11df_8c49_001e4fc686da;
  v14 = GUID_308fe894_cc06_5007_bc85_cbe94ac1a70c;
  v15 = GUID_fd944562_11d6_5eab_bd72_701993b68fac;
  v16 = GUID_902972bf_a984_5443_b1c5_2f04a99e1fca;
  v17 = GUID_afee38e0_f882_5f10_9655_1fc98cc8cce5;
  v9 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v9);
  string = 0LL;
  v3 = WindowsCreateStringReference(L"Windows.Foundation.Collections.Detail.Vector", 0x2Cu, &hstringHeader, &string);
  if ( v3 < 0 )
  {
    RaiseException(v3, 1u, 0, 0LL);
    __debugbreak();
  }
  ActivationFactory = RoGetActivationFactory(string, &GUID_08c77958_89bf_5cf8_a9cd_c72147b9b3a9, &v9);
  if ( ActivationFactory < 0 )
  {
    v5 = v9;
    if ( v9 )
    {
      v9 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
    return (unsigned int)ActivationFactory;
  }
  v10 = 0LL;
  v7 = v9;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
  ActivationFactory =  Windows::Foundation::Collections::Detail::IVectorStatics::`vcall'{240,{flat}}(v7, v12, &v10);
  if ( ActivationFactory < 0 )
  {
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v9);
    return (unsigned int)ActivationFactory;
  }
  v8 = v10;
  v10 = 0LL;
  *a2 = v8;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v9);
  return 0LL;
}
