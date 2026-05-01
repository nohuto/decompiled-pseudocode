/*
 * XREFs of ??0ViewEventArgsForNavigationRequest@@QEAA@XZ @ 0x180023828
 * Callers:
 *     ?UwpWindowActivating@UwpWindowEventDispatcher@@UEAAJPEAUIUwpWindowActivatingEventArgs@UwpWindowLifecycleManagement@Shell@Internal@Windows@@@Z @ 0x180021B40 (-UwpWindowActivating@UwpWindowEventDispatcher@@UEAAJPEAUIUwpWindowActivatingEventArgs@UwpWindowL.c)
 *     ??$MakeAndInitialize@VViewEventArgsForNavigationRequest@@UIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@@Details@WRL@Microsoft@@YAJPEAPEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@$$QEAPEAUIPropertySet@Collections@Foundation@7@@Z @ 0x1801A6154 (--$MakeAndInitialize@VViewEventArgsForNavigationRequest@@UIViewEventArgs@ViewManagerInterop@Shel.c)
 *     ??$MakeAndInitialize@VViewEventArgsForNavigationRequest@@UIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@$$T@Details@WRL@Microsoft@@YAJPEAPEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@$$QEA$$T@Z @ 0x1804270AC (--$MakeAndInitialize@VViewEventArgsForNavigationRequest@@UIViewEventArgs@ViewManage_ea_1804270AC.c)
 * Callees:
 *     ??0?$RuntimeClass@VViewEventArgsBase@@UIViewEventArgsForNavigationRequest@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18001920C (--0-$RuntimeClass@VViewEventArgsBase@@UIViewEventArgsForNavigationRequest@ViewManagerInterop@She.c)
 */

ViewEventArgsForNavigationRequest *__fastcall ViewEventArgsForNavigationRequest::ViewEventArgsForNavigationRequest(
        ViewEventArgsForNavigationRequest *this)
{
  ViewEventArgsForNavigationRequest *result; // rax

  Microsoft::WRL::RuntimeClass<ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForNavigationRequest>::RuntimeClass<ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForNavigationRequest>(this);
  *((_DWORD *)this + 24) = 0;
  *(_QWORD *)this = &ViewEventArgsForNavigationRequest::`vftable'{for `Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForNavigationRequest>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 8) = &ViewEventArgsForNavigationRequest::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 9) = &ViewEventArgsForNavigationRequest::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForNavigationRequest>'};
  result = this;
  *((_BYTE *)this + 100) = 0;
  return result;
}
