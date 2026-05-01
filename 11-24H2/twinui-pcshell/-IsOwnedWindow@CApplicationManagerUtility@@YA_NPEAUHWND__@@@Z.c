/*
 * XREFs of ?IsOwnedWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x180140CA8
 * Callers:
 *     ?_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z @ 0x180032494 (-_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z.c)
 *     ?SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800759E0 (-SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     RecoverWindowsProc @ 0x180140AB0 (RecoverWindowsProc.c)
 *     ?_ComputeApplicationId@CApplicationManager@@AEAAJPEAUHSHELL_DATA@1@@Z @ 0x1801ECB38 (-_ComputeApplicationId@CApplicationManager@@AEAAJPEAUHSHELL_DATA@1@@Z.c)
 *     ?HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PEAUIImmersiveMonitor@@W4ClassicWindowCreationOptions@@W4CLASSIC_WINDOW_ENSURE_REASONS@@PEA_N@Z @ 0x180286D40 (-HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PE.c)
 *     ?IsTrayWindowCheck@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x1802EEFC4 (-IsTrayWindowCheck@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CApplicationManagerUtility::IsOwnedWindow(CApplicationManagerUtility *this, HWND a2)
{
  return GetWindow((HWND)this, 4u) != 0LL;
}
