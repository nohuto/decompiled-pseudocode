/*
 * XREFs of _Smtx_unlock_exclusive @ 0x1802D4CC0
 * Callers:
 *     ??1?$lock_guard@Vshared_mutex@std@@@std@@QEAA@XZ @ 0x180621E6C (--1-$lock_guard@Vshared_mutex@std@@@std@@QEAA@XZ.c)
 *     CopilotHotkeyManager::CancelHoldAsync$_ResumeCoro$1 @ 0x1806228D0 (CopilotHotkeyManager--CancelHoldAsync$_ResumeCoro$1.c)
 *     CopilotHotkeyManager::MonitorForCopilotExtendedSignals$_ResumeCoro$1 @ 0x180633450 (CopilotHotkeyManager--MonitorForCopilotExtendedSignals$_ResumeCoro$1.c)
 *     ?v_WndProc@CopilotHotkeyManager@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x1806381A0 (-v_WndProc@CopilotHotkeyManager@@EEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl Smtx_unlock_exclusive(_Smtx_t *a1)
{
  ReleaseSRWLockExclusive((PSRWLOCK)a1);
}
