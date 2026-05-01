/*
 * XREFs of ?IsEligibleToolWindowHResult@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@CAJPEAUHWND__@@@Z @ 0x18012719C
 * Callers:
 *     ??$LambdaEnumWindowsProc@V_lambda_df7356024bf744f3615be68a3ea90a6d_@@@EnumWindowsHelpers@@YAHPEAUHWND__@@_J@Z @ 0x180126FF0 (--$LambdaEnumWindowsProc@V_lambda_df7356024bf744f3615be68a3ea90a6d_@@@EnumWindowsHelpers@@YAHPEA.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewManagement::ToolWindowGathererTemplated<ApplicationViewManagement::AssociatedWindowWin32Calls>::IsEligibleToolWindowHResult(
        HWND hWnd)
{
  int WindowLongPtrW; // eax
  HWND Window; // rax

  WindowLongPtrW = GetWindowLongPtrW(hWnd, -16);
  if ( (WindowLongPtrW & 0x10000000) == 0 )
    return 2147500036LL;
  if ( (*(_QWORD *)&WindowLongPtrW & 0xC70000LL) != 0 )
    return 2147500036LL;
  if ( (GetWindowLongPtrW(hWnd, -20) & 0x80080) != 0x80080 )
    return 2147500036LL;
  Window = GetWindow(hWnd, 4u);
  if ( Window && IsWindowVisible(Window) )
    return 2147500036LL;
  else
    return 0LL;
}
