/*
 * XREFs of ??1?$unique_winrt_event_token@UIRemoteSessionWindowManager@Shell@Internal@Windows@@@wil@@QEAA@XZ @ 0x180552648
 * Callers:
 *     ??1CVirtualDesktopManager@@UEAA@XZ @ 0x18055266C (--1CVirtualDesktopManager@@UEAA@XZ.c)
 *     ?CreateRemoteDesktop@CVirtualDesktopManager@@UEAAJPEAUHSTRING__@@PEAPEAUIVirtualDesktop@@@Z @ 0x1805531D0 (-CreateRemoteDesktop@CVirtualDesktopManager@@UEAAJPEAUHSTRING__@@PEAPEAUIVirtualDesktop@@@Z.c)
 * Callees:
 *     ?reset@?$unique_winrt_event_token@UIRemoteSessionWindowManager@Shell@Internal@Windows@@@wil@@QEAAXXZ @ 0x180559264 (-reset@-$unique_winrt_event_token@UIRemoteSessionWindowManager@Shell@Internal@Windows@@@wil@@QEA.c)
 */

void __fastcall wil::unique_winrt_event_token<Windows::Internal::Shell::IRemoteSessionWindowManager>::~unique_winrt_event_token<Windows::Internal::Shell::IRemoteSessionWindowManager>(
        __int64 a1)
{
  wil::unique_winrt_event_token<Windows::Internal::Shell::IRemoteSessionWindowManager>::reset();
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a1 + 8));
}
