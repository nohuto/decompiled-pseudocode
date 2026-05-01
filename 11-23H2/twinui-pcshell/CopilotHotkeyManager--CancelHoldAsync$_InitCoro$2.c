/*
 * XREFs of CopilotHotkeyManager::CancelHoldAsync$_InitCoro$2 @ 0x18026155C
 * Callers:
 *     ?CancelHoldAsync@CopilotHotkeyManager@@AEAA?AUfire_and_forget@winrt@@XZ @ 0x180261880 (-CancelHoldAsync@CopilotHotkeyManager@@AEAA-AUfire_and_forget@winrt@@XZ.c)
 * Callees:
 *     CopilotHotkeyManager::CancelHoldAsync$_ResumeCoro$1 @ 0x180261610 (CopilotHotkeyManager--CancelHoldAsync$_ResumeCoro$1.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CopilotHotkeyManager::CancelHoldAsync__InitCoro_2(_DWORD *a1, __int64 a2, _BYTE *a3, __int64 a4)
{
  *(_QWORD *)(a2 + 74) = a4;
  *(_QWORD *)a2 = CopilotHotkeyManager::CancelHoldAsync__ResumeCoro_1;
  *(_DWORD *)(a2 + 8) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  *(_BYTE *)(a2 + 73) = 0;
  return CopilotHotkeyManager::CancelHoldAsync__ResumeCoro_1(a2);
}
