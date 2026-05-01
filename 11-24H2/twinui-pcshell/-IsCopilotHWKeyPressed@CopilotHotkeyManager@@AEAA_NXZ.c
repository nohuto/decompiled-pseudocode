/*
 * XREFs of ?IsCopilotHWKeyPressed@CopilotHotkeyManager@@AEAA_NXZ @ 0x18062693C
 * Callers:
 *     ?v_WndProc@CopilotHotkeyManager@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x1806381A0 (-v_WndProc@CopilotHotkeyManager@@EEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CopilotHotkeyManager::IsCopilotHWKeyPressed(CopilotHotkeyManager *this)
{
  unsigned __int8 KeyState; // bl
  unsigned __int8 v2; // di
  SHORT v3; // si
  SHORT v4; // ax

  KeyState = GetKeyState(91);
  v2 = GetKeyState(92);
  v3 = GetKeyState(16);
  v4 = GetKeyState(134);
  return ((KeyState | v2) & 0x80) != 0 && ((unsigned __int16)v3 & (unsigned __int16)v4 & 0x80) != 0;
}
