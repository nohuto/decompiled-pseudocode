/*
 * XREFs of ?OnSettingsUpdated@CTopLevelWindow@@QEAAXK@Z @ 0x18001E984
 * Callers:
 *     ?SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z @ 0x18009282C (-SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z.c)
 *     ?OnSettingsUpdated@CWindowIconic@@QEAAJK_N@Z @ 0x180099C54 (-OnSettingsUpdated@CWindowIconic@@QEAAJK_N@Z.c)
 *     ?MonitorChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800F0E70 (-MonitorChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?OnWindowScaleUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18001B598 (-OnWindowScaleUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?OnColorizationUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18001B604 (-OnColorizationUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001D960 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     IsOpenThemeDataPresent @ 0x18009CA90 (IsOpenThemeDataPresent.c)
 */

void __fastcall CTopLevelWindow::OnSettingsUpdated(CTopLevelWindow *this, char a2)
{
  int v3; // edi
  bool v5; // bp
  int v6; // r15d
  char v7; // al
  int v8; // r14d

  v3 = a2 & 9;
  v5 = (a2 & 4) != 0 || (a2 & 9) != 0;
  v6 = a2 & 0x40;
  v7 = IsOpenThemeDataPresent();
  v8 = v7 != 0 ? 0x1000 : 0;
  if ( v5 )
    CVisual::SetDirtyFlags(this, v7 != 0 ? 2101248 : 0x200000);
  if ( v3 )
    CTopLevelWindow::OnWindowScaleUpdated(this);
  if ( v6 )
    CVisual::SetDirtyFlags(this, v8 + 0x1000000);
  if ( (a2 & 0x10) != 0 )
    CTopLevelWindow::OnColorizationUpdated(this);
}
