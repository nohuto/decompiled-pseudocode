/*
 * XREFs of ?MonitorForCopilotExtendedSignals@CopilotHotkeyManager@@AEAA?AUfire_and_forget@winrt@@W4IMMERSIVE_HOT_KEY_ID@@@Z @ 0x1806337E8
 * Callers:
 *     ?OnHotkeyInvoke@CopilotHotkeyManager@@QEAAXW4IMMERSIVE_HOT_KEY_ID@@@Z @ 0x1806338CC (-OnHotkeyInvoke@CopilotHotkeyManager@@QEAAXW4IMMERSIVE_HOT_KEY_ID@@@Z.c)
 *     ?OnMessage@CopilotHotkeyManager@@UEAAJI_K_J@Z @ 0x180633A00 (-OnMessage@CopilotHotkeyManager@@UEAAJI_K_J@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     CopilotHotkeyManager::MonitorForCopilotExtendedSignals$_InitCoro$2 @ 0x1806333F0 (CopilotHotkeyManager--MonitorForCopilotExtendedSignals$_InitCoro$2.c)
 */

_BYTE *__fastcall CopilotHotkeyManager::MonitorForCopilotExtendedSignals(__int64 a1, _BYTE *a2, int a3)
{
  char *v5; // rax
  int v7; // [rsp+D8h] [rbp+10h] BYREF
  int v8; // [rsp+E0h] [rbp+18h] BYREF

  v8 = a3;
  v5 = (char *)operator new(0x90uLL);
  v7 = 0;
  CopilotHotkeyManager::MonitorForCopilotExtendedSignals__InitCoro_2(&v7, v5, a2, &v8, a1);
  return a2;
}
