/*
 * XREFs of CAsyncCallbackWithLambda__lambda_737486cc3d7ecb08300e7f9d8f8ebf5e___::Invoke @ 0x180351DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateHotkeyRegistrationsTask@GamingOverlayExperienceManager@@AEAAJXZ @ 0x1801E3A0C (-UpdateHotkeyRegistrationsTask@GamingOverlayExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall CAsyncCallbackWithLambda__lambda_737486cc3d7ecb08300e7f9d8f8ebf5e___::Invoke(__int64 a1)
{
  int updated; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  updated = GamingOverlayExperienceManager::UpdateHotkeyRegistrationsTask(*(GamingOverlayExperienceManager **)(a1 + 48));
  if ( updated < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x13C9,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
      (const char *)(unsigned int)updated);
  return 0LL;
}
