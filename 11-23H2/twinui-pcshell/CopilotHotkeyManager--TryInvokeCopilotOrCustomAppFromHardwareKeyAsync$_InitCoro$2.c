/*
 * XREFs of CopilotHotkeyManager::TryInvokeCopilotOrCustomAppFromHardwareKeyAsync$_InitCoro$2 @ 0x180273C50
 * Callers:
 *     ?TryInvokeCopilotOrCustomAppFromHardwareKeyAsync@CopilotHotkeyManager@@QEAA?AUfire_and_forget@winrt@@W4IMMERSIVE_HOT_KEY_ID@@@Z @ 0x180273F34 (-TryInvokeCopilotOrCustomAppFromHardwareKeyAsync@CopilotHotkeyManager@@QEAA-AUfire_and_forget@wi.c)
 * Callees:
 *     CopilotHotkeyManager::TryInvokeCopilotOrCustomAppFromHardwareKeyAsync$_ResumeCoro$1 @ 0x180273D10 (CopilotHotkeyManager--TryInvokeCopilotOrCustomAppFromHardwareKeyAsync$_ResumeCoro$1.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CopilotHotkeyManager::TryInvokeCopilotOrCustomAppFromHardwareKeyAsync__InitCoro_2(
        _DWORD *a1,
        __int64 a2,
        _BYTE *a3,
        int *a4,
        __int64 a5)
{
  int v5; // r9d

  v5 = *a4;
  *(_QWORD *)(a2 + 82) = a5;
  *(_DWORD *)(a2 + 90) = v5;
  *(_QWORD *)a2 = CopilotHotkeyManager::TryInvokeCopilotOrCustomAppFromHardwareKeyAsync__ResumeCoro_1;
  *(_DWORD *)(a2 + 8) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  *(_BYTE *)(a2 + 81) = 0;
  return CopilotHotkeyManager::TryInvokeCopilotOrCustomAppFromHardwareKeyAsync__ResumeCoro_1(a2);
}
