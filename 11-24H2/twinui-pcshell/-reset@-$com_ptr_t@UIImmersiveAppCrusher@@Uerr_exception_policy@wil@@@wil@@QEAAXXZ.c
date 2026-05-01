/*
 * XREFs of ?reset@?$com_ptr_t@UIImmersiveAppCrusher@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1802BDEF8
 * Callers:
 *     ?InitializePrivilegedOperations@UwpWindowEventDispatcher@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z @ 0x1800BEF30 (-InitializePrivilegedOperations@UwpWindowEventDispatcher@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z.c)
 *     ?InitializePrivilegedOperations@KioskPositioner@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z @ 0x180201BE0 (-InitializePrivilegedOperations@KioskPositioner@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z.c)
 *     ?InitializePrivilegedOperations@WindowEventDispatcher@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z @ 0x180420110 (-InitializePrivilegedOperations@WindowEventDispatcher@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z.c)
 *     ?CloseApplicationView@KioskPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1804F143C (-CloseApplicationView@KioskPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?subscribe_to_services@GamingPosturePositioner@@UEAAXPEAUIServiceProvider@@@Z @ 0x180509450 (-subscribe_to_services@GamingPosturePositioner@@UEAAXPEAUIServiceProvider@@@Z.c)
 *     ?unsubscribe_from_services@GamingPosturePositioner@@UEAAXPEAUIServiceProvider@@@Z @ 0x180509A00 (-unsubscribe_from_services@GamingPosturePositioner@@UEAAXPEAUIServiceProvider@@@Z.c)
 *     ?CloseWinRTApplicationView@@YAXPEAUIWinRTApplicationView@@@Z @ 0x18057646C (-CloseWinRTApplicationView@@YAXPEAUIWinRTApplicationView@@@Z.c)
 *     ?subscribe_to_services@CopilotHotkeyManager@@UEAAXPEAUIServiceProvider@@@Z @ 0x180637B20 (-subscribe_to_services@CopilotHotkeyManager@@UEAAXPEAUIServiceProvider@@@Z.c)
 *     ?unsubscribe_from_services@CopilotHotkeyManager@@UEAAXPEAUIServiceProvider@@@Z @ 0x180638090 (-unsubscribe_from_services@CopilotHotkeyManager@@UEAAXPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::com_ptr_t<IImmersiveAppCrusher,wil::err_exception_policy>::reset(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
