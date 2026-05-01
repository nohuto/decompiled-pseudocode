/*
 * XREFs of wil::details::functor_wrapper_void__lambda_a0ddf70ccc630128835bd0152b09c205__&_::Run @ 0x180212ED0
 * Callers:
 *     <none>
 * Callees:
 *     IsPeoplePane @ 0x180026588 (IsPeoplePane.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_GetLaunchPositionForPeoplePane@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1805B5590 (-_GetLaunchPositionForPeoplePane@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicat.c)
 */

__int64 __fastcall wil::details::functor_wrapper_void__lambda_a0ddf70ccc630128835bd0152b09c205____::Run(__int64 a1)
{
  __int64 v1; // rbx
  int LaunchPositionForPeoplePane; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *(_QWORD *)(a1 + 8);
  if ( IsPeoplePane(**(_QWORD **)v1) )
  {
    LaunchPositionForPeoplePane = CDesktopPositioner::_GetLaunchPositionForPeoplePane(
                                    *(CDesktopPositioner **)(v1 + 8),
                                    **(struct IApplicationView ***)v1,
                                    **(struct IApplicationViewPosition ****)(v1 + 16));
    if ( LaunchPositionForPeoplePane < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x6F1,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)LaunchPositionForPeoplePane);
  }
  return 0LL;
}
