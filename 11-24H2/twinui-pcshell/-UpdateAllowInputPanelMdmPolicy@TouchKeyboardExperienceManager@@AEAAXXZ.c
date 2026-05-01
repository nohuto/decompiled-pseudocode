/*
 * XREFs of ?UpdateAllowInputPanelMdmPolicy@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x180203280
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x180253160 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnAllowInputPanelMdmPolicyUpdated@TabTipAdapter@KeyboardHosting@@QEAAJ_N@Z @ 0x180203304 (-OnAllowInputPanelMdmPolicyUpdated@TabTipAdapter@KeyboardHosting@@QEAAJ_N@Z.c)
 */

void __fastcall TouchKeyboardExperienceManager::UpdateAllowInputPanelMdmPolicy(KeyboardHosting::TabTipAdapter **this)
{
  int v2; // ebx
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = 1;
  v5 = 1;
  if ( (int)PolicyManager_GetPolicyInt(L"TextInput", L"AllowInputPanel", &v5) >= 0 )
    v2 = v5;
  v3 = KeyboardHosting::TabTipAdapter::OnAllowInputPanelMdmPolicyUpdated(this[73], v2 != 0);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x97A,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
}
