/*
 * XREFs of ??$MakeAndInitialize@VNonBamoInputDeliveryServer@@UIInputDeliveryServer@@AEAPEAUIInputDeliveryServerHost@@AEAPEBGAEAW4TestMode@1@@Details@WRL@Microsoft@@YAJPEAPEAUIInputDeliveryServer@@AEAPEAUIInputDeliveryServerHost@@AEAPEBGAEAW4TestMode@NonBamoInputDeliveryServer@@@Z @ 0x18007FD1C
 * Callers:
 *     ?Create@NonBamoInputDeliveryServer@@SAJPEAUIInputDeliveryServerHost@@PEBGW4TestMode@1@PEAPEAUIInputDeliveryServer@@@Z @ 0x18007FC78 (-Create@NonBamoInputDeliveryServer@@SAJPEAUIInputDeliveryServerHost@@PEBGW4TestMode@1@PEAPEAUIIn.c)
 * Callees:
 *     ??1?$MakeAllocator@U?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAVInputPriv@Internal@Spatial@Input@UI@Windows@@PEAVPrivVoiceEventArgs@23456@@Foundation@Windows@@V_lambda_4a364071ea75531430e6bf7b4cab72c1_@@$0?0PEAUIInputPriv@Internal@Spatial@Input@UI@3@PEAUIPrivVoiceEventArgs@67893@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVInputPriv@Internal@Spatial@Input@UI@Windows@@PEAUIInputPriv@23456@@Internal@Foundation@Windows@@U?$AggregateType@PEAVPrivVoiceEventArgs@Internal@Spatial@Input@UI@Windows@@PEAUIPrivVoiceEventArgs@23456@@234@@Foundation@Windows@@EAAJPEAUIInputPriv@Internal@Spatial@Input@UI@3@PEAUIPrivVoiceEventArgs@56783@@Z@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800844A8 (--1-$MakeAllocator@U-$DelegateInvokeHelper@U-$ITypedEventHandler@PEAVInputPriv@Internal@Spatial@.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E848 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0NonBamoInputDeliveryServer@@QEAA@XZ @ 0x18015DAB8 (--0NonBamoInputDeliveryServer@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<NonBamoInputDeliveryServer,IInputDeliveryServer,IInputDeliveryServerHost * &,unsigned short const * &,enum NonBamoInputDeliveryServer::TestMode &>(
        NonBamoInputDeliveryServer *a1,
        _QWORD *a2,
        _QWORD *a3,
        unsigned int *a4)
{
  NonBamoInputDeliveryServer *v7; // rax
  int v8; // ebx
  NonBamoInputDeliveryServer *v9; // rdi
  NonBamoInputDeliveryServer *v11; // [rsp+50h] [rbp+8h] BYREF

  v11 = a1;
  NonBamoInputDeliveryServer::s_pNonBamoInputDeliveryServer = 0LL;
  v7 = (NonBamoInputDeliveryServer *)operator new(0x130uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v7;
  if ( v7 )
  {
    v9 = NonBamoInputDeliveryServer::NonBamoInputDeliveryServer(v7);
    v11 = 0LL;
    v8 = (*(__int64 (__fastcall **)(NonBamoInputDeliveryServer *, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v9 + 56LL))(
           v9,
           *a2,
           *a3,
           *a4);
    if ( v8 >= 0 )
    {
      v8 = (**(__int64 (__fastcall ***)(NonBamoInputDeliveryServer *, GUID *, struct IInputDeliveryServer **))v9)(
             v9,
             &GUID_32cc20dc_af78_43d9_b31d_cfc456c2dfba,
             &NonBamoInputDeliveryServer::s_pNonBamoInputDeliveryServer);
      (*(void (__fastcall **)(NonBamoInputDeliveryServer *))(*(_QWORD *)v9 + 16LL))(v9);
      return (unsigned int)v8;
    }
    if ( v9 )
      (*(void (__fastcall **)(NonBamoInputDeliveryServer *))(*(_QWORD *)v9 + 16LL))(v9);
  }
  else
  {
    v8 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::Input::Spatial::Internal::InputPriv *,Windows::UI::Input::Spatial::Internal::IInputPriv *>,Windows::Foundation::Internal::AggregateType<Windows::UI::Input::Spatial::Internal::PrivVoiceEventArgs *,Windows::UI::Input::Spatial::Internal::IPrivVoiceEventArgs *>>::*)(Windows::UI::Input::Spatial::Internal::IInputPriv *,Windows::UI::Input::Spatial::Internal::IPrivVoiceEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::Internal::InputPriv *,Windows::UI::Input::Spatial::Internal::PrivVoiceEventArgs *>,_lambda_4a364071ea75531430e6bf7b4cab72c1_,-1,Windows::UI::Input::Spatial::Internal::IInputPriv *,Windows::UI::Input::Spatial::Internal::IPrivVoiceEventArgs *>>::~MakeAllocator<Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::Input::Spatial::Internal::InputPriv *,Windows::UI::Input::Spatial::Internal::IInputPriv *>,Windows::Foundation::Internal::AggregateType<Windows::UI::Input::Spatial::Internal::PrivVoiceEventArgs *,Windows::UI::Input::Spatial::Internal::IPrivVoiceEventArgs *>>::*)(Windows::UI::Input::Spatial::Internal::IInputPriv *,Windows::UI::Input::Spatial::Internal::IPrivVoiceEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::Internal::InputPriv *,Windows::UI::Input::Spatial::Internal::PrivVoiceEventArgs *>,_lambda_4a364071ea75531430e6bf7b4cab72c1_,-1,Windows::UI::Input::Spatial::Internal::IInputPriv *,Windows::UI::Input::Spatial::Internal::IPrivVoiceEventArgs *>>(&v11);
  return (unsigned int)v8;
}
