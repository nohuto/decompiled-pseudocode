/*
 * XREFs of ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@VCWRLObjectWithGITSite@@UIImmersiveApplication@@UIImmersiveApplication2@@UIImmersiveApplicationHolographic@@UIImmersiveApplicationInternal@@UIObjectWithWindow@ViewManagerInterop@Desktop@Shell@Internal@Windows@@VObjectWithVisibility@ViewManagerInterop@Desktop@Shell@Internal@Windows@@V?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@UIServiceProvider@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x180301644
 * Callers:
 *     ??1CImmersiveApp@@MEAA@XZ @ 0x1803016A4 (--1CImmersiveApp@@MEAA@XZ.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VFtmBase@23@VCWRLObjectWithGITSite@@UIImmersiveApplication@@UIImmersiveApplication2@@UIImmersiveApplicationHolographic@@UIImmersiveApplicationInternal@@UIObjectWithWindow@ViewManagerInterop@Desktop@Shell@Internal@Windows@@VObjectWithVisibility@ViewManagerInterop@Desktop@Shell@Internal@Windows@@V?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@UIServiceProvider@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180301A70 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@VFtmBase@23@VCWRLObjectWithGITSite@@U.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180148540 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,IImmersiveApplication,IImmersiveApplication2,IImmersiveApplicationHolographic,IImmersiveApplicationInternal,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectWithWindow,Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility,Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>,IServiceProvider>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,IImmersiveApplication,IImmersiveApplication2,IImmersiveApplicationHolographic,IImmersiveApplicationInternal,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectWithWindow,Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility,Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>,IServiceProvider>(
        __int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 280);
  if ( v2 < 0 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release((volatile signed __int32 *)(2 * v2));
  return Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,CWRLObjectWithGITSite,IImmersiveApplication,IImmersiveApplication2,IImmersiveApplicationHolographic,IImmersiveApplicationInternal,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectWithWindow,Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility,Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>,IServiceProvider>::~ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,CWRLObjectWithGITSite,IImmersiveApplication,IImmersiveApplication2,IImmersiveApplicationHolographic,IImmersiveApplicationInternal,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectWithWindow,Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility,Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>,IServiceProvider>(a1 + 8);
}
