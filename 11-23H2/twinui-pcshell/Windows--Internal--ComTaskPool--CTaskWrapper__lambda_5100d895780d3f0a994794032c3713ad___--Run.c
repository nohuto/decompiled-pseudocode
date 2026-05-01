/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5100d895780d3f0a994794032c3713ad___::Run @ 0x18053CA90
 * Callers:
 *     <none>
 * Callees:
 *     ?ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundation@Windows@@W4ActivateApplicationForExperienceOptions@@PEAK@Z @ 0x1800EA908 (-ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundati.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5100d895780d3f0a994794032c3713ad___::Run()
{
  int v0; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v0 = ActivateApplicationForExperienceWithPropertySet(
         (const unsigned __int16 *)qword_18098D6F0,
         &LocaleName,
         (__int64)L"AccessibilityExperienceId",
         0LL,
         1u,
         0LL);
  if ( v0 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2A9,
      (int)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
      (const char *)(unsigned int)v0);
}
