/*
 * XREFs of ?TakeKeyboardFocus@UndockedSearchAppExperienceManager@@UEAAJXZ @ 0x180223840
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BringToForeground@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x18003646C (-BringToForeground@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall UndockedSearchAppExperienceManager::TakeKeyboardFocus(UndockedSearchAppExperienceManager *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = UndockedSearchAppExperienceManager::BringToForeground(this);
  v2 = v1;
  if ( v1 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x60F,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
    (const char *)(unsigned int)v1);
  return v2;
}
