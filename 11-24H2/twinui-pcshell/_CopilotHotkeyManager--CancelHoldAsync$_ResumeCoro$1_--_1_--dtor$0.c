/*
 * XREFs of _CopilotHotkeyManager::CancelHoldAsync$_ResumeCoro$1_::_1_::dtor$0 @ 0x180700CA7
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$lock_guard@Vshared_mutex@std@@@std@@QEAA@XZ @ 0x180621E6C (--1-$lock_guard@Vshared_mutex@std@@@std@@QEAA@XZ.c)
 */

void __fastcall CopilotHotkeyManager::CancelHoldAsync__ResumeCoro_1_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 40) = *(_QWORD *)(a2 + 96) + 16LL;
  std::lock_guard<std::shared_mutex>::~lock_guard<std::shared_mutex>(*(_Smtx_t ***)(a2 + 40));
}
