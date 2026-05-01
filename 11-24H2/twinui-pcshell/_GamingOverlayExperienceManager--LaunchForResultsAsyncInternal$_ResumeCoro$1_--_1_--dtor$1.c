/*
 * XREFs of _GamingOverlayExperienceManager::LaunchForResultsAsyncInternal$_ResumeCoro$1_::_1_::dtor$1 @ 0x1806E2D1E
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$optional@VActivityThreadWatcher@wil@@@std@@QEAA@XZ @ 0x18032D1AC (--1-$optional@VActivityThreadWatcher@wil@@@std@@QEAA@XZ.c)
 */

void __fastcall GamingOverlayExperienceManager::LaunchForResultsAsyncInternal__ResumeCoro_1_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 216) = *(_QWORD *)(a2 + 72) + 32LL;
  std::optional<wil::ActivityThreadWatcher>::~optional<wil::ActivityThreadWatcher>(*(wil::ActivityThreadWatcher **)(a2 + 216));
}
