/*
 * XREFs of ??1?$ComPtr@VCLauncherTipContextMenu@@@WRL@Microsoft@@QEAA@XZ @ 0x1802D0E2C
 * Callers:
 *     _CWRLImpWndProc_CLauncherTipContextMenu_::s_WndProcBase_::_1_::dtor$0 @ 0x1806DA7A4 (_CWRLImpWndProc_CLauncherTipContextMenu_--s_WndProcBase_--_1_--dtor$0.c)
 *     _CLauncherTipContextMenu::_EnsureMenu_::_1_::dtor$1 @ 0x1806FF152 (_CLauncherTipContextMenu--_EnsureMenu_--_1_--dtor$1.c)
 *     _CLauncherTipContextMenu::_EnsureMenu_::_1_::dtor$2 @ 0x1806FF164 (_CLauncherTipContextMenu--_EnsureMenu_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<CLauncherTipContextMenu>::~ComPtr<CLauncherTipContextMenu>(volatile int **a1)
{
  return Microsoft::WRL::ComPtr<CLauncherTipContextMenu>::InternalRelease(a1);
}
