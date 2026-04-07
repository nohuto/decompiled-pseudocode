/*
 * XREFs of ?OnSettingsUpdated@CTopLevelWindow@@QEAAXK@Z @ 0x1800522D4
 * Callers:
 *     ?SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z @ 0x180032058 (-SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z.c)
 *     ?MonitorChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18003CF00 (-MonitorChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x18004F2A0 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?OnWindowScaleUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180050ED8 (-OnWindowScaleUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     IsOpenThemeDataPresent @ 0x18005DB28 (IsOpenThemeDataPresent.c)
 */

void __fastcall CTopLevelWindow::OnSettingsUpdated(CTopLevelWindow *this, char a2)
{
  int v3; // edi
  bool v5; // r14
  int v6; // r15d
  int v7; // esi
  int v8; // ecx
  int v9; // eax

  v3 = a2 & 9;
  v5 = (a2 & 4) != 0 || (a2 & 9) != 0;
  v6 = a2 & 0x40;
  if ( (unsigned __int8)IsOpenThemeDataPresent(this) )
  {
    v7 = 16781312;
    v8 = 2101248;
  }
  else
  {
    v7 = 0x1000000;
    v8 = 0x200000;
  }
  if ( v5 && (v8 & *((_DWORD *)this + 22)) != v8 )
  {
    *((_DWORD *)this + 22) |= v8;
    CVisual::PropagateDirtyChildren(this);
  }
  if ( v3 )
    CTopLevelWindow::OnWindowScaleUpdated(this);
  if ( v6 && (v7 & *((_DWORD *)this + 22)) != v7 )
  {
    *((_DWORD *)this + 22) |= v7;
    CVisual::PropagateDirtyChildren(this);
  }
  if ( (a2 & 0x10) != 0 )
  {
    v9 = *((_DWORD *)this + 22);
    if ( (v9 & 0x100000) == 0 )
    {
      *((_DWORD *)this + 22) = v9 | 0x100000;
      CVisual::PropagateDirtyChildren(this);
    }
  }
}
