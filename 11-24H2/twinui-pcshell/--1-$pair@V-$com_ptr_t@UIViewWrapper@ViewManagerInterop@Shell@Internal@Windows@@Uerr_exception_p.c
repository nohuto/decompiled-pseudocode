/*
 * XREFs of ??1?$pair@V?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@QEAA@XZ @ 0x1800D6120
 * Callers:
 *     ??$_Destroy_range@V?$allocator@UPendingActivationResumeData@UwpWindowEventDispatcher@@@std@@@std@@YAXPEAUPendingActivationResumeData@UwpWindowEventDispatcher@@QEAU12@AEAV?$allocator@UPendingActivationResumeData@UwpWindowEventDispatcher@@@0@@Z @ 0x18009B8B4 (--$_Destroy_range@V-$allocator@UPendingActivationResumeData@UwpWindowEventDispatcher@@@std@@@std.c)
 *     ??$_Freenode@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@PEAX@std@@@std@@@?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800D60F4 (--$_Freenode@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$com_ptr_t@UIApplicationView@@Uerr_excepti.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800D6E8C (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$com_ptr_t@UIViewWrapper@ViewManag.c)
 *     ?RemovePendingActivationResume@UwpWindowEventDispatcher@@AEAAXK@Z @ 0x1801C314C (-RemovePendingActivationResume@UwpWindowEventDispatcher@@AEAAXK@Z.c)
 *     ?ApplyWindowingEnvironmentSettingsRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewApplyWindowingEnvironmentSettingsRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18041CCF0 (-ApplyWindowingEnvironmentSettingsRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewApplyWindowi.c)
 *     _UwpWindowEventDispatcher::AddPendingActivationResumeWithLock_::_1_::dtor$8 @ 0x1806CEC2A (_UwpWindowEventDispatcher--AddPendingActivationResumeWithLock_--_1_--dtor$8.c)
 *     _UwpWindowEventDispatcher::ApplyWindowingEnvironmentSettingsRequested_::_1_::dtor$21 @ 0x1806D12E7 (_UwpWindowEventDispatcher--ApplyWindowingEnvironmentSettingsRequested_--_1_--dtor$21.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall std::pair<wil::com_ptr_t<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper,wil::err_exception_policy>,wil::com_ptr_t<Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings,wil::err_exception_policy>>::~pair<wil::com_ptr_t<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper,wil::err_exception_policy>,wil::com_ptr_t<Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings,wil::err_exception_policy>>(
        __int64 *a1)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(a1 + 1);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(a1);
}
