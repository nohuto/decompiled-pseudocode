/*
 * XREFs of ?PostTargetedMessage@CActionCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z @ 0x1802C80D0
 * Callers:
 *     _lambda_447b2046ef5222f08cb9a5e113edf53b_::_lambda_invoker_cdecl_ @ 0x18036B060 (_lambda_447b2046ef5222f08cb9a5e113edf53b_--_lambda_invoker_cdecl_.c)
 *     wistd::__function::__func__lambda_f6af0f73b13b7001ec4227e21c1beaab__void___cdecl(void)_::operator() @ 0x18036C670 (wistd--__function--__func__lambda_f6af0f73b13b7001ec4227e21c1beaab__void___cdecl(void)_--operato.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z @ 0x1801B0614 (-PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z.c)
 */

__int64 __fastcall CActionCenterExperienceManager::PostTargetedMessage(struct IUnknown *a1, unsigned __int16 a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = ExperienceManagerUtils::PostToUIThread(0LL, a1, (void *)a2);
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x239,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
  return v3;
}
