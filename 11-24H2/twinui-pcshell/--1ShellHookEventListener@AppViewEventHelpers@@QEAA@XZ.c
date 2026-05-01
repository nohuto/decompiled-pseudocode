/*
 * XREFs of ??1ShellHookEventListener@AppViewEventHelpers@@QEAA@XZ @ 0x1806BFB80
 * Callers:
 *     _AppViewDataSourceAdapterBase::AppViewDataSourceAdapterBase_::_1_::dtor$6 @ 0x1806D58E9 (_AppViewDataSourceAdapterBase--AppViewDataSourceAdapterBase_--_1_--dtor$6.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall AppViewEventHelpers::ShellHookEventListener::~ShellHookEventListener(__int64 this)
{
  AppViewEventHelpers::EventListener<IImmersiveShellHookService,IImmersiveShellHookNotification,AppViewEventHelpers::details::ShellHookRegistration>::~EventListener<IImmersiveShellHookService,IImmersiveShellHookNotification,AppViewEventHelpers::details::ShellHookRegistration>(this);
}
