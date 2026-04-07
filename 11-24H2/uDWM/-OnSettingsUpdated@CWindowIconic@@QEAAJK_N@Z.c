/*
 * XREFs of ?OnSettingsUpdated@CWindowIconic@@QEAAJK_N@Z @ 0x180099C54
 * Callers:
 *     ?SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z @ 0x18009282C (-SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z.c)
 * Callees:
 *     ?OnColorizationUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x180008544 (-OnColorizationUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?OnSettingsUpdated@CTopLevelWindow@@QEAAXK@Z @ 0x18001E984 (-OnSettingsUpdated@CTopLevelWindow@@QEAAXK@Z.c)
 *     ?RenderRecursive@CContainerVisual@@UEAAJXZ @ 0x180020E90 (-RenderRecursive@CContainerVisual@@UEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CWindowIconic::OnSettingsUpdated(CTopLevelWindow **this, char a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  int v6; // eax
  unsigned int v7; // ebx

  CTopLevelWindow::OnSettingsUpdated(this[11], a2);
  if ( (a2 & 0x10) != 0 )
    CWindowIconic::OnColorizationUpdated((CWindowIconic *)this, 0);
  v6 = CContainerVisual::RenderRecursive(this[11], v4, v5);
  v7 = v6;
  if ( v6 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x29Eu, 0LL);
  return v7;
}
