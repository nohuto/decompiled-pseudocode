/*
 * XREFs of DefSubclassProc @ 0x180390CA8
 * Callers:
 *     ?s_WndProc@XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@CA_JPEAUHWND__@@I_K_J11@Z @ 0x1804F8430 (-s_WndProc@XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@wi.c)
 *     ?s_WndProc@XamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@CA_JPEAUHWND__@@I_K_J11@Z @ 0x1804F9560 (-s_WndProc@XamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Wind.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     _GetProcFromComCtl32 @ 0x180391084 (_GetProcFromComCtl32.c)
 */

LRESULT __stdcall DefSubclassProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
  LRESULT result; // rax

  result = qword_18098C420;
  if ( qword_18098C420 == -1 )
  {
    GetProcFromComCtl32(&qword_18098C420, 413LL);
    result = qword_18098C420;
  }
  if ( result )
    return ((__int64 (__fastcall *)(HWND, _QWORD, WPARAM, LPARAM))result)(hWnd, uMsg, wParam, lParam);
  return result;
}
