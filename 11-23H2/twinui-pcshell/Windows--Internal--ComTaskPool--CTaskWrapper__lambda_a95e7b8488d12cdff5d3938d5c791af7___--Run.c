/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a95e7b8488d12cdff5d3938d5c791af7___::Run @ 0x1801DB4C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InvokeOverlayDisplayModeEventTask@GamingOverlayExperienceManager@@AEAAJXZ @ 0x180401658 (-InvokeOverlayDisplayModeEventTask@GamingOverlayExperienceManager@@AEAAJXZ.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a95e7b8488d12cdff5d3938d5c791af7___::Run(
        __int64 a1)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = GamingOverlayExperienceManager::InvokeOverlayDisplayModeEventTask(*(GamingOverlayExperienceManager **)(a1 + 16));
  if ( v1 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF83,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
      (const char *)(unsigned int)v1);
}
