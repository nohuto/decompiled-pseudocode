/*
 * XREFs of ?StaticWorkerWindowMessageThreadSetup@GamingOverlayExperienceManager@@CAKPEAX@Z @ 0x18035BBE0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::StaticWorkerWindowMessageThreadSetup(_QWORD *Parameter)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( Parameter )
  {
    v2 = *Parameter;
    v3 = SHCreateWorkerWindowW(GamingOverlayExperienceManager::StaticWndProc, -3LL, 0LL, 0LL, 0LL, *Parameter);
    Parameter[2] = v3;
    *(_QWORD *)(v2 + 632) = v3;
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2C6,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
      (const char *)0x80004003LL);
  }
  return 0LL;
}
