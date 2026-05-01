/*
 * XREFs of ??0ViewEventArgsBase@@QEAA@XZ @ 0x180019870
 * Callers:
 *     ??0?$RuntimeClass@VViewEventArgsBase@@UIViewEventArgsForNavigationRequest@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18001920C (--0-$RuntimeClass@VViewEventArgsBase@@UIViewEventArgsForNavigationRequest@ViewManagerInterop@She.c)
 *     ??0?$RuntimeClass@VViewEventArgsBase@@UIViewEventArgsForSelectTargetView@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18001939C (--0-$RuntimeClass@VViewEventArgsBase@@UIViewEventArgsForSelectTargetView@ViewManagerInterop@Shel.c)
 *     ??0?$RuntimeClass@VViewEventArgsBase@@UIViewPropertyChangedArgs@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18001968C (--0-$RuntimeClass@VViewEventArgsBase@@UIViewPropertyChangedArgs@ViewManagerInterop@Shell@Interna.c)
 *     ??$MakeAndInitialize@VViewEventArgs@@V1@AEAW4ViewEventType@ViewManagerInterop@Shell@Internal@Windows@@AEAPEAUIPropertySet@Collections@Foundation@6@@Details@WRL@Microsoft@@YAJPEAPEAVViewEventArgs@@AEAW4ViewEventType@ViewManagerInterop@Shell@Internal@Windows@@AEAPEAUIPropertySet@Collections@Foundation@8@@Z @ 0x180019718 (--$MakeAndInitialize@VViewEventArgs@@V1@AEAW4ViewEventType@ViewManagerInterop@Shell@Internal@Win.c)
 *     ?RaiseViewEventWithPropertySet@UwpWindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@PEAUIPropertySet@Collections@Foundation@6@VAgileGitPtr@@@Z @ 0x18002387C (-RaiseViewEventWithPropertySet@UwpWindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerIntero.c)
 *     ??0ViewEventArgsForShowAsStandalone@@QEAA@XZ @ 0x180417F40 (--0ViewEventArgsForShowAsStandalone@@QEAA@XZ.c)
 *     ??0ViewEventArgsForShowAsViewMode@@QEAA@XZ @ 0x180418014 (--0ViewEventArgsForShowAsViewMode@@QEAA@XZ.c)
 *     ??0ViewEventArgsForSwitch@@QEAA@XZ @ 0x180418128 (--0ViewEventArgsForSwitch@@QEAA@XZ.c)
 *     ??0ViewEventArgsForWindowingSettings@@QEAA@V?$map@V?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@U?$less@V?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@5@@std@@UWindowingEnvironmentId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Z @ 0x1804181D0 (--0ViewEventArgsForWindowingSettings@@QEAA@V-$map@V-$com_ptr_t@UIViewWrapper@ViewManagerInterop@.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x1800305D0 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 */

ViewEventArgsBase *__fastcall ViewEventArgsBase::ViewEventArgsBase(ViewEventArgsBase *this)
{
  ViewEventArgsBase *result; // rax

  Microsoft::WRL::FtmBase::FtmBase((ViewEventArgsBase *)((char *)this + 8));
  *(_QWORD *)this = &ViewEventArgsBase::`vftable'{for `Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs'};
  *((_QWORD *)this + 1) = &CActivatedEventArgsBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  result = this;
  *((_QWORD *)this + 7) = 0LL;
  return result;
}
