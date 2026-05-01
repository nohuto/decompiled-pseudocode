/*
 * XREFs of ??$MakeAndInitialize@VViewHostItemEventArgs@@V1@AEBW4ViewHostItemEventType@Holographic@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@@Details@WRL@Microsoft@@YAJPEAPEAVViewHostItemEventArgs@@AEBW4ViewHostItemEventType@Holographic@Shell@Internal@Windows@@$$QEAPEAUIPropertySet@Collections@Foundation@8@@Z @ 0x1804069F0
 * Callers:
 *     ??$MakeAndInitialize@VViewHostItemEventArgs@@V1@AEBW4ViewHostItemEventType@Holographic@Shell@Internal@Windows@@$$T@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VViewHostItemEventArgs@@@WRL@Microsoft@@@012@AEBW4ViewHostItemEventType@Holographic@Shell@Internal@Windows@@$$QEA$$T@Z @ 0x180406B0C (--$MakeAndInitialize@VViewHostItemEventArgs@@V1@AEBW4ViewHostItemEventType@Holograp_ea_180406B0C.c)
 *     ?_RaiseRequestNavigateToView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x18040DEDC (-_RaiseRequestNavigateToView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_RaiseViewAdded@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x18040E194 (-_RaiseViewAdded@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180020A48 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VAppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180402444 (-InternalRelease@-$ComPtr@VAppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@@WRL@Micr.c)
 *     ??0ViewHostItemEventArgsBase@@QEAA@XZ @ 0x180407A58 (--0ViewHostItemEventArgsBase@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VViewHostItemEventArgs@@@WRL@Microsoft@@QEAAXPEAVViewHostItemEventArgs@@@Z @ 0x180408500 (-Attach@-$ComPtr@VViewHostItemEventArgs@@@WRL@Microsoft@@QEAAXPEAVViewHostItemEventArgs@@@Z.c)
 *     ?InternalAddRef@?$ComPtr@VViewHostItemEventArgs@@@WRL@Microsoft@@IEBAXXZ @ 0x18040A42C (-InternalAddRef@-$ComPtr@VViewHostItemEventArgs@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ViewHostItemEventArgs,ViewHostItemEventArgs,enum Windows::Internal::Shell::Holographic::ViewHostItemEventType const &,Windows::Foundation::Collections::IPropertySet *>(
        __int64 *a1,
        _DWORD *a2,
        __int64 *a3)
{
  unsigned int v6; // edi
  _QWORD *v7; // rax
  _QWORD *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF
  void *v13; // [rsp+58h] [rbp+20h] BYREF

  v6 = 0;
  *a1 = 0LL;
  v7 = operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v7;
  v13 = v7;
  if ( v7 )
  {
    ViewHostItemEventArgsBase::ViewHostItemEventArgsBase((ViewHostItemEventArgsBase *)v7);
    v8[10] = 1LL;
    *v8 = &Microsoft::WRL::RuntimeClass<ViewHostItemEventArgsBase>::`vftable'{for `Windows::Internal::Shell::Holographic::IViewHostItemEventArgs'};
    v8[1] = &ViewHostItemEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    v8[8] = &Microsoft::WRL::RuntimeClass<ViewHostItemEventArgsBase>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *v8 = &Microsoft::WRL::RuntimeClass<ViewHostItemEventArgsBase>::`vftable'{for `Windows::Internal::Shell::Holographic::IViewHostItemEventArgs'};
    v8[1] = &ViewHostItemEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    v8[8] = &Microsoft::WRL::RuntimeClass<ViewHostItemEventArgsBase>::`vftable';
    v12 = 0LL;
    Microsoft::WRL::ComPtr<ViewHostItemEventArgs>::Attach(&v12, v8);
    v13 = 0LL;
    v9 = *a3;
    v10 = v12;
    *(_DWORD *)(v12 + 48) = *a2;
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)(v10 + 56), v9);
    Microsoft::WRL::ComPtr<ViewHostItemEventArgs>::InternalAddRef(&v12);
    *a1 = v10;
    Microsoft::WRL::ComPtr<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener>::InternalRelease(&v12);
  }
  else
  {
    v6 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v13);
  return v6;
}
