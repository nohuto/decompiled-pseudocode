/*
 * XREFs of ??$Make@U?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@PEAVWindowMigrationEventArgs@2345@@Foundation@Windows@@V_lambda_899c02a8b0071860493a9dce8a869c2e_@@$0?0PEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@3@PEAUIWindowMigrationEventArgs@6783@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@PEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@U?$AggregateType@PEAVWindowMigrationEventArgs@WindowManagementEvents@Shell@Internal@Windows@@PEAUIWindowMigrationEventArgs@2345@@4Foundation@5@@Foundation@Windows@@EAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@3@PEAUIWindowMigrationEventArgs@5673@@Z@Details@WRL@Microsoft@@V_lambda_899c02a8b0071860493a9dce8a869c2e_@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@U?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@PEAVWindowMigrationEventArgs@2345@@Foundation@Windows@@V_lambda_899c02a8b0071860493a9dce8a869c2e_@@$0?0PEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@3@PEAUIWindowMigrationEventArgs@6783@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@PEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@U?$AggregateType@PEAVWindowMigrationEventArgs@WindowManagementEvents@Shell@Internal@Windows@@PEAUIWindowMigrationEventArgs@2345@@4Foundation@5@@Foundation@Windows@@EAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@3@PEAUIWindowMigrationEventArgs@5673@@Z@Details@WRL@Microsoft@@@12@$$QEAV_lambda_899c02a8b0071860493a9dce8a869c2e_@@@Z @ 0x1805A4A2C
 * Callers:
 *     ??$Callback@U?$ITypedEventHandler@PEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@PEAVWindowMigrationEventArgs@2345@@Foundation@Windows@@VCSnapAssistControllerBase@@PEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@3@PEAUIWindowMigrationEventArgs@6783@@WRL@Microsoft@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@PEAVWindowMigrationEventArgs@2345@@Foundation@Windows@@@01@PEAVCSnapAssistControllerBase@@P83@EAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@PEAUIWindowMigrationEventArgs@5678@@Z@Z @ 0x1805A460C (--$Callback@U-$ITypedEventHandler@PEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Inte.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewChangeListener@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801F32B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAp_ea_1801F32B0.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 *__fastcall Microsoft::WRL::Details::Make<Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Foundation::Internal::AggregateType<Windows::Internal::Shell::WindowManagementEvents::WindowMigrationEventArgs *,Windows::Internal::Shell::WindowManagementEvents::IWindowMigrationEventArgs *>>::*)(Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::IWindowMigrationEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::WindowMigrationEventArgs *>,_lambda_899c02a8b0071860493a9dce8a869c2e_,-1,Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::IWindowMigrationEventArgs *>,_lambda_899c02a8b0071860493a9dce8a869c2e_>(
        __int64 *a1,
        __int64 a2)
{
  _DWORD *v4; // rax
  volatile int *v5; // rdx
  _DWORD *v6; // rbx
  void *v8; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v4 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v4;
  v8 = v4;
  if ( v4 )
  {
    *(_QWORD *)v4 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
    v4[3] = 1;
    *(_QWORD *)v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::WindowMigrationEventArgs *>>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *((_OWORD *)v6 + 1) = *(_OWORD *)a2;
    *((_QWORD *)v6 + 4) = *(_QWORD *)(a2 + 16);
    *(_QWORD *)v6 = &Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Foundation::Internal::AggregateType<Windows::Internal::Shell::WindowManagementEvents::WindowMigrationEventArgs *,Windows::Internal::Shell::WindowManagementEvents::IWindowMigrationEventArgs *>>::*)(Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::IWindowMigrationEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::WindowMigrationEventArgs *>,_lambda_899c02a8b0071860493a9dce8a869c2e_,-1,Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::IWindowMigrationEventArgs *>::`vftable';
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewChangeListener>::Release(
        *a1,
        v5);
    *a1 = (__int64)v6;
    v8 = 0LL;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v8);
  return a1;
}
