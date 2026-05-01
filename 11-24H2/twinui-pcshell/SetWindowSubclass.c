/*
 * XREFs of SetWindowSubclass @ 0x1802DE7DC
 * Callers:
 *     ?put_ActivationOptions@?$produce@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostChildWindow@34567@@impl@winrt@@UEAAHI@Z @ 0x180450F20 (-put_ActivationOptions@-$produce@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Sh.c)
 *     ?put_ActivationOptions@?$produce@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostChildWindow_WASDK@34567@@impl@winrt@@UEAAHI@Z @ 0x1804536D0 (-put_ActivationOptions@-$produce@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerH.c)
 * Callees:
 *     _GetProcFromComCtl32 @ 0x1802DE848 (_GetProcFromComCtl32.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

BOOL __stdcall SetWindowSubclass(HWND hWnd, SUBCLASSPROC pfnSubclass, UINT_PTR uIdSubclass, DWORD_PTR dwRefData)
{
  __int64 (__fastcall *v4)(HWND, SUBCLASSPROC, _QWORD, DWORD_PTR); // rax

  v4 = (__int64 (__fastcall *)(HWND, SUBCLASSPROC, _QWORD, DWORD_PTR))qword_1808C7388;
  if ( qword_1808C7388 == -1 )
  {
    GetProcFromComCtl32(&qword_1808C7388, 410LL);
    v4 = (__int64 (__fastcall *)(HWND, SUBCLASSPROC, _QWORD, DWORD_PTR))qword_1808C7388;
  }
  if ( v4 )
    LODWORD(v4) = v4(hWnd, pfnSubclass, 0LL, dwRefData);
  return (int)v4;
}
