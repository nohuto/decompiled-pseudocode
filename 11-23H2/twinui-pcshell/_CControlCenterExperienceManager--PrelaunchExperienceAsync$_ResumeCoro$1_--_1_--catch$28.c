/*
 * XREFs of _CControlCenterExperienceManager::PrelaunchExperienceAsync$_ResumeCoro$1_::_1_::catch$28 @ 0x1801DF7CA
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801CF0C0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x180392010 (-ResultFromCaughtException@wil@@YAJXZ.c)
 */

__int64 __fastcall CControlCenterExperienceManager::PrelaunchExperienceAsync__ResumeCoro_1_::_1_::catch_28(
        wil *a1,
        __int64 a2)
{
  const char *v3; // r9

  if ( (unsigned int)wil::ResultFromCaughtException(a1) != -2147417848 )
    wil::details::in1diag3::_FailFast_Unexpected(
      *(wil::details::in1diag3 **)(a2 + 152),
      (void *)0x28B,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
      v3);
  return 0LL;
}
