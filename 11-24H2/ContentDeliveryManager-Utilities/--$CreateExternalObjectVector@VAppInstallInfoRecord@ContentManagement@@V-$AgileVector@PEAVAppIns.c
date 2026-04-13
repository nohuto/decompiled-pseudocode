/*
 * XREFs of ??$CreateExternalObjectVector@VAppInstallInfoRecord@ContentManagement@@V?$AgileVector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@$0A@@Internal@Collections@Foundation@Windows@@@detail@Internal@Collections@Foundation@Windows@@YAJP8IVectorStatics@Detail@234@EAAJPEBUObjectVectorInfo@6234@PEAPEAUIInspectable@@@ZPEAPEAV?$AgileVector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@$0A@@1234@@Z @ 0x180072310
 * Callers:
 *     ?ConvertFromStoreRecords@AppManager@ContentManagement@@AEAAJPEAU?$IVectorView@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@PEAPEAU?$IVectorView@PEAVAppInstallInfoRecord@ContentManagement@@@456@@Z @ 0x180073D90 (-ConvertFromStoreRecords@AppManager@ContentManagement@@AEAAJPEAU-$IVectorView@PEAVInstallAppInfo.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180024214 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002E6CC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E10 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??_9IVectorStatics@Detail@Collections@Foundation@Windows@@$BPI@AA @ 0x180073BEC (--_9IVectorStatics@Detail@Collections@Foundation@Windows@@$BPI@AA.c)
 *     __security_check_cookie @ 0x1800B6D70 (__security_check_cookie.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::detail::CreateExternalObjectVector<ContentManagement::AppInstallInfoRecord,Windows::Foundation::Collections::Internal::AgileVector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,0>>(
        __int64 a1,
        __int64 *a2,
        unsigned int a3)
{
  unsigned int v4; // r8d
  unsigned int v5; // r8d
  int ActivationFactory; // ebx
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v10; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v11; // [rsp+28h] [rbp-D8h] BYREF
  const WCHAR *v12[2]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v13[3]; // [rsp+40h] [rbp-C0h] BYREF
  GUID v14; // [rsp+58h] [rbp-A8h]
  GUID v15; // [rsp+68h] [rbp-98h]
  GUID v16; // [rsp+78h] [rbp-88h]
  GUID v17; // [rsp+88h] [rbp-78h]
  GUID v18; // [rsp+98h] [rbp-68h]
  HSTRING_HEADER hstringHeader; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v20; // [rsp+C8h] [rbp-38h]
  HSTRING_HEADER v21; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v22; // [rsp+E8h] [rbp-18h]
  HSTRING_HEADER v23; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v24; // [rsp+108h] [rbp+8h]
  HSTRING_HEADER v25; // [rsp+110h] [rbp+10h] BYREF
  __int64 v26; // [rsp+128h] [rbp+28h]

  v12[0] = L"Windows.Foundation.Collections.IVector`1<ContentManagement.AppInstallInfoRecord>";
  Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v21, v12, a3);
  v12[0] = L"Windows.Foundation.Collections.IVectorView`1<ContentManagement.AppInstallInfoRecord>";
  Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v23, v12, v4);
  v12[0] = L"Windows.Foundation.Collections.IIterator`1<ContentManagement.AppInstallInfoRecord>";
  Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v25, v12, v5);
  v13[0] = v22;
  v13[1] = v24;
  v13[2] = v26;
  v14 = GUID_82929d2b_e4ba_49a3_af91_dadf7766d476;
  v15 = GUID_4c815ba6_2563_5feb_8ed7_014242d84e31;
  v16 = GUID_e3e5794e_6220_5c66_bd02_60ce159d9506;
  v17 = GUID_3125e57c_be43_5e92_b20e_9f496eb9a270;
  v18 = GUID_95fbb062_0622_50b4_90fd_fc92ecbaa68b;
  v11 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v11);
  v20 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Foundation.Collections.Detail.Vector",
    0x2Du,
    0x2Cu);
  ActivationFactory = RoGetActivationFactory(v20, &GUID_08c77958_89bf_5cf8_a9cd_c72147b9b3a9, &v11);
  if ( ActivationFactory >= 0 )
  {
    v10 = 0LL;
    v7 = v11;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
    ActivationFactory =  Windows::Foundation::Collections::Detail::IVectorStatics::`vcall'{248,{flat}}(v7, v13, &v10);
    if ( ActivationFactory >= 0 )
    {
      v8 = v10;
      v10 = 0LL;
      *a2 = v8;
      ActivationFactory = 0;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v11);
  return (unsigned int)ActivationFactory;
}
