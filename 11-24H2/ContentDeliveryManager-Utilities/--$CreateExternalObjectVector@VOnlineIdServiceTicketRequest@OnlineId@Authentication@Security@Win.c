/*
 * XREFs of ??$CreateExternalObjectVector@VOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@V?$Vector@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@U?$DefaultEqualityPredicate@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@U?$DefaultVectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@@Internal@Collections@Foundation@5@@detail@Internal@Collections@Foundation@Windows@@YAJP8IVectorStatics@Detail@234@EAAJPEBUObjectVectorInfo@6234@PEAPEAUIInspectable@@@ZPEAPEAV?$Vector@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@U?$DefaultEqualityPredicate@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@U?$DefaultVectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@@1234@@Z @ 0x1800252C4
 * Callers:
 *     ?GetMSADeviceTicket@IdentityManager@ContentManagement@@UEAAJPEAUHSTRING__@@PEAPEAU3@@Z @ 0x1800323D0 (-GetMSADeviceTicket@IdentityManager@ContentManagement@@UEAAJPEAUHSTRING__@@PEAPEAU3@@Z.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180024214 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??_9IVectorStatics@Detail@Collections@Foundation@Windows@@$BPA@AA @ 0x18002C958 (--_9IVectorStatics@Detail@Collections@Foundation@Windows@@$BPA@AA.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002E6CC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E10 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800B6D70 (__security_check_cookie.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::detail::CreateExternalObjectVector<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest,Windows::Foundation::Collections::Internal::Vector<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>>>(
        __int64 a1,
        _QWORD *a2,
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

  v12[0] = L"Windows.Foundation.Collections.IVector`1<Windows.Security.Authentication.OnlineId.OnlineIdServiceTicketRequest>";
  Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v21, v12, a3);
  v12[0] = L"Windows.Foundation.Collections.IVectorView`1<Windows.Security.Authentication.OnlineId.OnlineIdServiceTicketRequest>";
  Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v23, v12, v4);
  v12[0] = L"Windows.Foundation.Collections.IIterator`1<Windows.Security.Authentication.OnlineId.OnlineIdServiceTicketRequest>";
  Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v25, v12, v5);
  v13[0] = v22;
  v13[1] = v24;
  v13[2] = v26;
  v14 = GUID_297445d3_fb63_4135_8909_4e354c061466;
  v15 = GUID_f6ed9226_b260_5f49_9b84_e89e43cbabc6;
  v16 = GUID_1a7c6c05_3fef_5eeb_aaff_625ee3ebc07c;
  v17 = GUID_cb72d686_9516_520d_a274_fa4cd1762cb2;
  v18 = GUID_b6a5c8e4_6e3c_5c37_92cf_cf9f1c383335;
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
    ActivationFactory =  Windows::Foundation::Collections::Detail::IVectorStatics::`vcall'{240,{flat}}(v7, v13, &v10);
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
