/*
 * XREFs of ??1?$lock_guard@Vshared_mutex@std@@@std@@QEAA@XZ @ 0x180621E6C
 * Callers:
 *     _CopilotHotkeyManager::CancelHoldAsync$_ResumeCoro$1_::_1_::dtor$0 @ 0x180700CA7 (_CopilotHotkeyManager--CancelHoldAsync$_ResumeCoro$1_--_1_--dtor$0.c)
 *     _CopilotHotkeyManager::MonitorForCopilotExtendedSignals$_ResumeCoro$1_::_1_::dtor$3 @ 0x180701175 (_CopilotHotkeyManager--MonitorForCopilotExtendedSignals$_ResumeCoro$1_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

void __fastcall std::lock_guard<std::shared_mutex>::~lock_guard<std::shared_mutex>(_Smtx_t **a1)
{
  Smtx_unlock_exclusive(*a1);
}
