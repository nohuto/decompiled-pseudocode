/*
 * XREFs of ?InputHostShowing@UndockedSearchAppExperienceManager@@QEAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE@@11@Z @ 0x1803BC120
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PositionSearchAppWindow@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x1802458B4 (-PositionSearchAppWindow@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall UndockedSearchAppExperienceManager::InputHostShowing(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 88) + 32LL))(
          *(_QWORD *)(a1 + 88),
          *(_QWORD *)(a1 + 56)) )
    return 0LL;
  v2 = UndockedSearchAppExperienceManager::PositionSearchAppWindow((UndockedSearchAppExperienceManager *)a1);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xE3B,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
