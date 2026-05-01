/*
 * XREFs of ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIProtocolActivatedEventArgs@Activation@ApplicationModel@Windows@@UIProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData@567@U?$CloakedIid@UIServiceProvider@@@23@U?$CloakedIid@UIValueMarshalByPropertySet@Internal@Marshaling@Foundation@Windows@@@23@VCWRLObjectWithGITSite@@VCActivatedEventArgsWithViewIdBase@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x18032CF6C
 * Callers:
 *     ??1CProtocolActivatedEventArgs@@EEAA@XZ @ 0x18032D21C (--1CProtocolActivatedEventArgs@@EEAA@XZ.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIProtocolActivatedEventArgs@Activation@ApplicationModel@Windows@@UIProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData@567@U?$CloakedIid@UIServiceProvider@@@23@U?$CloakedIid@UIValueMarshalByPropertySet@Internal@Marshaling@Foundation@Windows@@@23@VCWRLObjectWithGITSite@@VCActivatedEventArgsWithViewIdBase@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18032D7D0 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UIProtocolActivatedEvent_ea_18032D7D0.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180148540 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@.c)
 */

void __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs,Windows::ApplicationModel::Activation::IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData,Microsoft::WRL::CloakedIid<IServiceProvider>,Microsoft::WRL::CloakedIid<Windows::Foundation::Marshaling::Internal::IValueMarshalByPropertySet>,CWRLObjectWithGITSite,CActivatedEventArgsWithViewIdBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs,Windows::ApplicationModel::Activation::IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData,Microsoft::WRL::CloakedIid<IServiceProvider>,Microsoft::WRL::CloakedIid<Windows::Foundation::Marshaling::Internal::IValueMarshalByPropertySet>,CWRLObjectWithGITSite,CActivatedEventArgsWithViewIdBase>(
        __int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 304);
  if ( v2 < 0 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release((volatile signed __int32 *)(2 * v2));
  Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithGITSite>,CActivatedEventArgsWithViewIdBase>::~ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithGITSite>,CActivatedEventArgsWithViewIdBase>((CWRLObjectWithGITSite *)(a1 + 40));
}
