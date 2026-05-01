/*
 * XREFs of ??$Callback@U?$ITypedEventHandler@PEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@PEAVWindowMigrationEventArgs@2345@@Foundation@Windows@@VCSnapAssistControllerBase@@PEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@3@PEAUIWindowMigrationEventArgs@6783@@WRL@Microsoft@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@PEAVWindowMigrationEventArgs@2345@@Foundation@Windows@@@01@PEAVCSnapAssistControllerBase@@P83@EAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@PEAUIWindowMigrationEventArgs@5678@@Z@Z @ 0x1805A460C
 * Callers:
 *     ?Initialize@CSnapAssistControllerBase@@UEAAJAEBUSnapAssistControllerInitParams@@@Z @ 0x1800926D0 (-Initialize@CSnapAssistControllerBase@@UEAAJAEBUSnapAssistControllerInitParams@@@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewChangeListener@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801F32B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAp_ea_1801F32B0.c)
 *     ??$Make@U?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@PEAVWindowMigrationEventArgs@2345@@Foundation@Windows@@V_lambda_899c02a8b0071860493a9dce8a869c2e_@@$0?0PEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@3@PEAUIWindowMigrationEventArgs@6783@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@PEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@U?$AggregateType@PEAVWindowMigrationEventArgs@WindowManagementEvents@Shell@Internal@Windows@@PEAUIWindowMigrationEventArgs@2345@@4Foundation@5@@Foundation@Windows@@EAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@3@PEAUIWindowMigrationEventArgs@5673@@Z@Details@WRL@Microsoft@@V_lambda_899c02a8b0071860493a9dce8a869c2e_@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@U?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@PEAVWindowMigrationEventArgs@2345@@Foundation@Windows@@V_lambda_899c02a8b0071860493a9dce8a869c2e_@@$0?0PEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@3@PEAUIWindowMigrationEventArgs@6783@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@PEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@U?$AggregateType@PEAVWindowMigrationEventArgs@WindowManagementEvents@Shell@Internal@Windows@@PEAUIWindowMigrationEventArgs@2345@@4Foundation@5@@Foundation@Windows@@EAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@3@PEAUIWindowMigrationEventArgs@5673@@Z@Details@WRL@Microsoft@@@12@$$QEAV_lambda_899c02a8b0071860493a9dce8a869c2e_@@@Z @ 0x1805A4A2C (--$Make@U-$DelegateInvokeHelper@U-$ITypedEventHandler@PEAUIWindowManagementEvents2@WindowManagem.c)
 */

volatile int **__fastcall Microsoft::WRL::Callback<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::WindowMigrationEventArgs *>,CSnapAssistControllerBase,Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::IWindowMigrationEventArgs *>(
        volatile int **a1,
        __int64 a2,
        __int128 *a3)
{
  __int128 v3; // xmm0
  volatile int **v5; // rax
  volatile int *v6; // rdx
  __int64 v7; // rcx
  __int64 v9; // [rsp+20h] [rbp-28h] BYREF
  __int128 v10; // [rsp+28h] [rbp-20h]
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF

  v3 = *a3;
  v9 = a2;
  v10 = v3;
  v5 = (volatile int **)Microsoft::WRL::Details::Make<Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Foundation::Internal::AggregateType<Windows::Internal::Shell::WindowManagementEvents::WindowMigrationEventArgs *,Windows::Internal::Shell::WindowManagementEvents::IWindowMigrationEventArgs *>>::*)(Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::IWindowMigrationEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::WindowMigrationEventArgs *>,_lambda_899c02a8b0071860493a9dce8a869c2e_,-1,Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::IWindowMigrationEventArgs *>,_lambda_899c02a8b0071860493a9dce8a869c2e_>(
                          &v11,
                          &v9);
  v6 = *v5;
  *v5 = 0LL;
  v7 = v11;
  *a1 = v6;
  if ( v7 )
  {
    v11 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewChangeListener>::Release(
      v7,
      v6);
  }
  return a1;
}
