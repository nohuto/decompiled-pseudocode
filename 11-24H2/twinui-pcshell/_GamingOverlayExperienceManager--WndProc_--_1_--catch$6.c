/*
 * XREFs of _GamingOverlayExperienceManager::WndProc_::_1_::catch$6 @ 0x1806E4037
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtExceptionMsg@in1diag3@details@wil@@YAJPEAXIPEBD1ZZ @ 0x1803548B8 (-Log_CaughtExceptionMsg@in1diag3@details@wil@@YAJPEAXIPEBD1ZZ.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::WndProc_::_1_::catch_6(__int64 a1, __int64 a2)
{
  const char *v3; // [rsp+20h] [rbp-28h]

  wil::details::in1diag3::Log_CaughtExceptionMsg(
    *(wil::details::in1diag3 **)(a2 + 296),
    (unsigned __int16 *)0x33E,
    (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
    "Exception in WM_HOOKWINEVENT handler",
    v3);
  return 0LL;
}
