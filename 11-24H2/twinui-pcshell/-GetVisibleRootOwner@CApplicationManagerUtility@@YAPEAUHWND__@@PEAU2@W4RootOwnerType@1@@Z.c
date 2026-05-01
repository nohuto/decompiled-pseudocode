/*
 * XREFs of ?GetVisibleRootOwner@CApplicationManagerUtility@@YAPEAUHWND__@@PEAU2@W4RootOwnerType@1@@Z @ 0x1800688AC
 * Callers:
 *     ?_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z @ 0x180032494 (-_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z.c)
 *     ?_HideApplication@CImmersiveApp@@AEAA?AW4HIDE_WINDOW_RESULT@1@W4PROCESS_HIDE_OPTION_HOW@1@@Z @ 0x180067C14 (-_HideApplication@CImmersiveApp@@AEAA-AW4HIDE_WINDOW_RESULT@1@W4PROCESS_HIDE_OPTION_HOW@1@@Z.c)
 * Callees:
 *     ?IsGhostWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x18017E968 (-IsGhostWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ?IsTrayWindowCheck@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x1802EEFC4 (-IsTrayWindowCheck@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 */

__int64 __fastcall CApplicationManagerUtility::GetVisibleRootOwner(HWND a1, int a2)
{
  HWND v3; // rbx
  HWND Window; // rax
  HWND v5; // rdx
  HWND v6; // rdi
  BOOL v8; // eax
  HWND v9; // rcx

  v3 = 0LL;
  while ( 1 )
  {
    Window = GetWindow(a1, 4u);
    v6 = Window;
    if ( !Window )
      break;
    v8 = IsWindowVisible(Window);
    v9 = v6;
    if ( !v8 )
      v9 = v3;
    v3 = v9;
    a1 = v6;
  }
  if ( a2 )
  {
    if ( !v3 )
      return (__int64)v3;
  }
  else
  {
    if ( !v3 )
      return (__int64)v3;
    if ( !CApplicationManagerUtility::IsTrayWindowCheck(v3, v5) )
      return 0LL;
  }
  if ( CApplicationManagerUtility::IsGhostWindow(v3, v5) )
    return HungWindowFromGhostWindow(v3);
  return (__int64)v3;
}
