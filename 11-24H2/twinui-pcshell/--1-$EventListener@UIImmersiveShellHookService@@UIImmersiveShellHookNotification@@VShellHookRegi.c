/*
 * XREFs of ??1?$EventListener@UIImmersiveShellHookService@@UIImmersiveShellHookNotification@@VShellHookRegistration@details@AppViewEventHelpers@@@AppViewEventHelpers@@QEAA@XZ @ 0x1806BF98C
 * Callers:
 *     ??1AppViewDataSourceAdapterBase@@IEAA@XZ @ 0x1806BFB00 (--1AppViewDataSourceAdapterBase@@IEAA@XZ.c)
 *     ??1ShellHookEventListener@AppViewEventHelpers@@QEAA@XZ @ 0x1806BFB80 (--1ShellHookEventListener@AppViewEventHelpers@@QEAA@XZ.c)
 * Callees:
 *     ?Unregister@?$EventListener@UIImmersiveShellHookService@@UIImmersiveShellHookNotification@@VShellHookRegistration@details@AppViewEventHelpers@@@AppViewEventHelpers@@QEAAXXZ @ 0x18016BD0C (-Unregister@-$EventListener@UIImmersiveShellHookService@@UIImmersiveShellHookNotification@@VShel.c)
 */

void __fastcall AppViewEventHelpers::EventListener<IImmersiveShellHookService,IImmersiveShellHookNotification,AppViewEventHelpers::details::ShellHookRegistration>::~EventListener<IImmersiveShellHookService,IImmersiveShellHookNotification,AppViewEventHelpers::details::ShellHookRegistration>(
        __int64 a1)
{
  AppViewEventHelpers::EventListener<IImmersiveShellHookService,IImmersiveShellHookNotification,AppViewEventHelpers::details::ShellHookRegistration>::Unregister(a1);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a1 + 8));
}
