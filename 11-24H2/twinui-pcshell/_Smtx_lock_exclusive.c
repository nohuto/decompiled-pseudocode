/*
 * XREFs of _Smtx_lock_exclusive @ 0x1802D4CB0
 * Callers:
 *     CopilotHotkeyManager::CancelHoldAsync$_ResumeCoro$1 @ 0x1806228D0 (CopilotHotkeyManager--CancelHoldAsync$_ResumeCoro$1.c)
 *     CopilotHotkeyManager::MonitorForCopilotExtendedSignals$_ResumeCoro$1 @ 0x180633450 (CopilotHotkeyManager--MonitorForCopilotExtendedSignals$_ResumeCoro$1.c)
 *     ?v_WndProc@CopilotHotkeyManager@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x1806381A0 (-v_WndProc@CopilotHotkeyManager@@EEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl Smtx_lock_exclusive(_Smtx_t *a1)
{
  AcquireSRWLockExclusive((PSRWLOCK)a1);
}
