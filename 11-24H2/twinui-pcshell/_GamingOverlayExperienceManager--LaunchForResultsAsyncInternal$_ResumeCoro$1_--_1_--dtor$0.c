/*
 * XREFs of _GamingOverlayExperienceManager::LaunchForResultsAsyncInternal$_ResumeCoro$1_::_1_::dtor$0 @ 0x1806E2CEC
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VGamingOverlayExperienceManager@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180347AF8 (--1-$com_ptr_t@VGamingOverlayExperienceManager@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::LaunchForResultsAsyncInternal__ResumeCoro_1_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 208) = *(_QWORD *)(a2 + 72) + 16LL;
  return wil::com_ptr_t<GamingOverlayExperienceManager,wil::err_exception_policy>::~com_ptr_t<GamingOverlayExperienceManager,wil::err_exception_policy>(*(__int64 **)(a2 + 208));
}
