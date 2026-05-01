/*
 * XREFs of ?PearlRectMayHaveChanged@CortanaStoreAppExperienceManager@@UEAAJPEAUHMONITOR__@@@Z @ 0x1801ADD30
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PositionCortanaWindow@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x1801ADD74 (-PositionCortanaWindow@CortanaStoreAppExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall CortanaStoreAppExperienceManager::PearlRectMayHaveChanged(
        CortanaStoreAppExperienceManager *this,
        HMONITOR a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = CortanaStoreAppExperienceManager::PositionCortanaWindow((CortanaStoreAppExperienceManager *)((char *)this - 120));
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x257,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
