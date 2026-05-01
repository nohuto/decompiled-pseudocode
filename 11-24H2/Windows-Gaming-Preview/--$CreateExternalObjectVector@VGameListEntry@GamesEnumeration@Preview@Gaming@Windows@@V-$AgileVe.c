/*
 * XREFs of ??$CreateExternalObjectVector@VGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@V?$AgileVector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$DefaultEqualityPredicate@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@7895@$0A@@Internal@Collections@Foundation@5@@detail@Internal@Collections@Foundation@Windows@@YAJP8IVectorStatics@Detail@234@EAAJPEBUObjectVectorInfo@6234@PEAPEAUIInspectable@@@ZPEAPEAV?$AgileVector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$DefaultEqualityPredicate@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@7895@$0A@@1234@@Z @ 0x18000BE30
 * Callers:
 *     _lambda_88afd6bbfe2a61dd98f4359340091e1e_::operator() @ 0x180019678 (_lambda_88afd6bbfe2a61dd98f4359340091e1e_--operator().c)
 *     _lambda_f9c49c7b293ed1d0382b2914a11b6bf4_::operator() @ 0x18001AFF0 (_lambda_f9c49c7b293ed1d0382b2914a11b6bf4_--operator().c)
 * Callees:
 *     __security_check_cookie @ 0x180001D00 (__security_check_cookie.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18000BDB0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??_9IVectorStatics@Detail@Collections@Foundation@Windows@@$BPI@AA @ 0x18000D514 (--_9IVectorStatics@Detail@Collections@Foundation@Windows@@$BPI@AA.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18000E8B4 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Foundation::Collections::Internal::detail::CreateExternalObjectVector<Windows::Gaming::Preview::GamesEnumeration::GameListEntry,Windows::Foundation::Collections::Internal::AgileVector<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,0>>(
        __int64 a1,
        _QWORD *a2,
        unsigned int a3)
{
  unsigned int v4; // r8d
  unsigned int v5; // r8d
  HRESULT v6; // eax
  int v7; // edx
  unsigned int v8; // r8d
  int ActivationFactory; // ebx
  __int64 v10; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v17; // [rsp+28h] [rbp-D8h] BYREF
  const WCHAR *v18[2]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v19[3]; // [rsp+40h] [rbp-C0h] BYREF
  GUID v20; // [rsp+58h] [rbp-A8h]
  GUID v21; // [rsp+68h] [rbp-98h]
  GUID v22; // [rsp+78h] [rbp-88h]
  GUID v23; // [rsp+88h] [rbp-78h]
  GUID v24; // [rsp+98h] [rbp-68h]
  HSTRING_HEADER hstringHeader; // [rsp+B0h] [rbp-50h] BYREF
  HSTRING string; // [rsp+C8h] [rbp-38h] BYREF
  HSTRING_HEADER v27; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v28; // [rsp+E8h] [rbp-18h]
  HSTRING_HEADER v29; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v30; // [rsp+108h] [rbp+8h]
  HSTRING_HEADER v31; // [rsp+110h] [rbp+10h] BYREF
  __int64 v32; // [rsp+128h] [rbp+28h]

  v18[0] = L"Windows.Foundation.Collections.IVector`1<Windows.Gaming.Preview.GamesEnumeration.GameListEntry>";
  Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v27, v18, a3);
  v18[0] = L"Windows.Foundation.Collections.IVectorView`1<Windows.Gaming.Preview.GamesEnumeration.GameListEntry>";
  Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v29, v18, v4);
  v18[0] = L"Windows.Foundation.Collections.IIterator`1<Windows.Gaming.Preview.GamesEnumeration.GameListEntry>";
  Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v31, v18, v5);
  v19[0] = v28;
  v19[1] = v30;
  v19[2] = v32;
  v20 = GUID_735924d3_811f_4494_b69c_c641a0c61543;
  v21 = GUID_58f4cdd2_5b23_5d0f_97d8_684619860220;
  v22 = GUID_0eea1ad9_03e2_5ba9_ae02_daca432f362a;
  v23 = GUID_42b8c8a0_3d03_5d5f_817e_4405c850f646;
  v24 = GUID_ed5b903e_5aeb_5d8c_9538_8306f02926c3;
  v16 = 0LL;
  string = 0LL;
  v6 = WindowsCreateStringReference(L"Windows.Foundation.Collections.Detail.Vector", 0x2Cu, &hstringHeader, &string);
  if ( v6 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v6, v7, v8);
    JUMPOUT(0x18000C02BLL);
  }
  ActivationFactory = RoGetActivationFactory(string, &GUID_08c77958_89bf_5cf8_a9cd_c72147b9b3a9, &v16);
  if ( ActivationFactory < 0 )
  {
    v10 = v16;
    if ( v16 )
    {
      v16 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    return (unsigned int)ActivationFactory;
  }
  v17 = 0LL;
  ActivationFactory =  Windows::Foundation::Collections::Detail::IVectorStatics::`vcall'{248,{flat}}(v16, v19, &v17);
  if ( ActivationFactory < 0 )
  {
    v12 = v17;
    if ( v17 )
    {
      v17 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    v13 = v16;
    if ( v16 )
    {
      v16 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    return (unsigned int)ActivationFactory;
  }
  v14 = v17;
  v17 = 0LL;
  *a2 = v14;
  v15 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  return 0LL;
}
