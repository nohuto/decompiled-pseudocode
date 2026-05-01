/*
 * XREFs of ?add_WindowChanged@CortanaSharedExperienceManager@@UEAAJPEAU?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@UWindowId@UI@5@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180380980
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 CortanaSharedExperienceManager::add_WindowChanged()
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2EA,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
    (const char *)0x80004001LL);
  return 2147500033LL;
}
