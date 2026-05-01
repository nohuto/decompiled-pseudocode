/*
 * XREFs of ?PostDeferralMessage@UndockedSearchAppExperienceManager@@UEAAJXZ @ 0x1803BDE40
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAXI_J@Z @ 0x1801B0838 (-PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAXI_J@Z.c)
 */

__int64 __fastcall UndockedSearchAppExperienceManager::PostDeferralMessage(
        __int64 (__fastcall ****this)(ExperienceManagerUtils *, GUID *, LPVOID *))
{
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = ExperienceManagerUtils::PostToUIThread(this[3], (struct IUnknown *)this - 3, (void *)0x401, 1LL);
  v2 = v1;
  if ( v1 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x731,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
      (const char *)(unsigned int)v1);
  return v2;
}
