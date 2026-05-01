/*
 * XREFs of ?UpdateEyeControlState@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x180111B48
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x180253160 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SHRegGetBOOLWithREGSAM@@YAJPEAUHKEY__@@PEBG1KPEAH@Z @ 0x180112FA4 (-SHRegGetBOOLWithREGSAM@@YAJPEAUHKEY__@@PEBG1KPEAH@Z.c)
 *     ?OnEyeControlStateChanged@TabTipAdapter@KeyboardHosting@@QEAAJ_N@Z @ 0x1802BFB20 (-OnEyeControlStateChanged@TabTipAdapter@KeyboardHosting@@QEAAJ_N@Z.c)
 */

void __fastcall TouchKeyboardExperienceManager::UpdateEyeControlState(
        KeyboardHosting::TabTipAdapter **this,
        __int64 a2,
        __int64 a3,
        unsigned int a4)
{
  int BOOLWithREGSAM; // eax
  int v6; // edx
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = 0;
  BOOLWithREGSAM = SHRegGetBOOLWithREGSAM(HKEY_CURRENT_USER, L"Software\\Microsoft\\Input\\EC", L"Enabled", a4, &v9);
  v6 = v9;
  if ( BOOLWithREGSAM )
    v6 = 0;
  v7 = KeyboardHosting::TabTipAdapter::OnEyeControlStateChanged(this[73], v6 != 0);
  if ( v7 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x931,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v7);
}
