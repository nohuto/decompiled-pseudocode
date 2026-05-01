/*
 * XREFs of _lambda_764d243e59cb48cdcde9b7b71f1d4aed_::_lambda_invoker_cdecl_ @ 0x180382B50
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PostTargetedMessage@CToastCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z @ 0x1801B056C (-PostTargetedMessage@CToastCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z.c)
 */

void __fastcall lambda_764d243e59cb48cdcde9b7b71f1d4aed_::_lambda_invoker_cdecl_(
        __int64 a1,
        struct IUnknown *a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = CToastCenterExperienceManager::PostTargetedMessage(a2, 3u, a3, a4);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x383,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
}
