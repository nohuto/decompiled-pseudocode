/*
 * XREFs of CAsyncCallbackWithLambda__lambda_0c60ebf81e3c669b22ca204f71fe377c___::Invoke @ 0x1801DAC60
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateHotkeyRegistrationsTask@GamingOverlayExperienceManager@@AEAAJXZ @ 0x180113BDC (-UpdateHotkeyRegistrationsTask@GamingOverlayExperienceManager@@AEAAJXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAsyncCallbackWithLambda__lambda_0c60ebf81e3c669b22ca204f71fe377c___::Invoke(__int64 a1)
{
  int updated; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  updated = GamingOverlayExperienceManager::UpdateHotkeyRegistrationsTask(*(GamingOverlayExperienceManager **)(a1 + 48));
  if ( updated < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x111F,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
      (const char *)(unsigned int)updated);
  return 0LL;
}
