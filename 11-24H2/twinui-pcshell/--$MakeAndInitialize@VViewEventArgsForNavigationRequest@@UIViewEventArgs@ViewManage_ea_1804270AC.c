/*
 * XREFs of ??$MakeAndInitialize@VViewEventArgsForNavigationRequest@@UIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@$$T@Details@WRL@Microsoft@@YAJPEAPEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@$$QEA$$T@Z @ 0x1804270AC
 * Callers:
 *     ?UwpWindowActivationRequested@UwpWindowEventDispatcher@@AEAAJPEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUIActivationRequestedEventArgs@WindowManagement@ApplicationModel@56@@Z @ 0x180020BD8 (-UwpWindowActivationRequested@UwpWindowEventDispatcher@@AEAAJPEAUIUwpWindowContext@UwpWindowLife.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewEventArgsForNavigationRequest@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800209C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VView_ea_1800209C0.c)
 *     ??0ViewEventArgsForNavigationRequest@@QEAA@XZ @ 0x180023828 (--0ViewEventArgsForNavigationRequest@@QEAA@XZ.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewEventArgsForNavigationRequest@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$00@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewEventArgsForNavigationRequest@ViewManagerInterop@Shell@Internal@Windows@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1801A61EC (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VVie_ea_1801A61EC.c)
 *     ?RuntimeClassInitialize@ViewEventArgsForNavigationRequest@@QEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1801F5260 (-RuntimeClassInitialize@ViewEventArgsForNavigationRequest@@QEAAJPEAUIPropertySet@Collections@Fou.c)
 *     ?Attach@?$ComPtr@VViewEventArgsForNavigationRequest@@@WRL@Microsoft@@QEAAXPEAVViewEventArgsForNavigationRequest@@@Z @ 0x18020ADB0 (-Attach@-$ComPtr@VViewEventArgsForNavigationRequest@@@WRL@Microsoft@@QEAAXPEAVViewEventArgsForNa.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ViewEventArgsForNavigationRequest,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs,std::nullptr_t>(
        _QWORD *a1,
        struct Windows::Foundation::Collections::IPropertySet **a2)
{
  void *v4; // rax
  int v5; // edi
  ViewEventArgsForNavigationRequest *v6; // rax
  struct Windows::Foundation::Collections::IPropertySet *v7; // rdx
  ViewEventArgsForNavigationRequest *v8; // rbx
  ViewEventArgsForNavigationRequest *v10; // [rsp+30h] [rbp+8h] BYREF
  void *v11; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v4 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v4;
  if ( v4 )
  {
    v6 = ViewEventArgsForNavigationRequest::ViewEventArgsForNavigationRequest((ViewEventArgsForNavigationRequest *)v4);
    v10 = 0LL;
    Microsoft::WRL::ComPtr<ViewEventArgsForNavigationRequest>::Attach((__int64 *)&v10, (__int64)v6);
    v7 = *a2;
    v8 = v10;
    v11 = 0LL;
    v5 = ViewEventArgsForNavigationRequest::RuntimeClassInitialize(v10, v7);
    if ( v5 >= 0 )
      v5 = Microsoft::WRL::Details::RuntimeClassBaseT<1>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForNavigationRequest>>(
             (__int64)v8,
             &GUID_96c11dea_68de_44ef_a7f7_3aa869663d57,
             a1);
    if ( v8 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForNavigationRequest>::Release((__int64)v8);
  }
  else
  {
    v5 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v11);
  return (unsigned int)v5;
}
