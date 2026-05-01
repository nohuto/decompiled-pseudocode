/*
 * XREFs of ??$MakeAndInitialize@VViewEventArgsForNavigationRequest@@UIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@@Details@WRL@Microsoft@@YAJPEAPEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@$$QEAPEAUIPropertySet@Collections@Foundation@7@@Z @ 0x1801A6154
 * Callers:
 *     ?AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18041A090 (-AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewEventArgsForNavigationRequest@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800209C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VView_ea_1800209C0.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180020A48 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ??0ViewEventArgsForNavigationRequest@@QEAA@XZ @ 0x180023828 (--0ViewEventArgsForNavigationRequest@@QEAA@XZ.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewEventArgsForNavigationRequest@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$00@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewEventArgsForNavigationRequest@ViewManagerInterop@Shell@Internal@Windows@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1801A61EC (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VVie_ea_1801A61EC.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ViewEventArgsForNavigationRequest,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs,Windows::Foundation::Collections::IPropertySet *>(
        _QWORD *a1,
        __int64 *a2)
{
  void *v4; // rax
  ViewEventArgsForNavigationRequest *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rdi
  unsigned int v8; // ebx
  void *v10; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v4 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v4;
  if ( v4 )
  {
    v5 = ViewEventArgsForNavigationRequest::ViewEventArgsForNavigationRequest((ViewEventArgsForNavigationRequest *)v4);
    v6 = *a2;
    v7 = (__int64)v5;
    *((_DWORD *)v5 + 12) = 2;
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)v5 + 7, v6);
    v8 = Microsoft::WRL::Details::RuntimeClassBaseT<1>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForNavigationRequest>>(
           v7,
           &GUID_96c11dea_68de_44ef_a7f7_3aa869663d57,
           a1);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForNavigationRequest>::Release(v7);
    return v8;
  }
  else
  {
    Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v10);
    return 2147942414LL;
  }
}
