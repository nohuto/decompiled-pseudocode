/*
 * XREFs of ?OnViewPropertiesChanging@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1803CABF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PositionFlyoutCore@CBaseTrayFlyoutExperienceManager@@IEAAJXZ @ 0x1803CB2A8 (-PositionFlyoutCore@CBaseTrayFlyoutExperienceManager@@IEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBaseTrayFlyoutExperienceManager::OnViewPropertiesChanging(
        CBaseTrayFlyoutExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  int v4; // eax
  unsigned int v5; // edi
  __int64 v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *((_DWORD *)this + 98) = (int)*((float *)a2 + 11);
  *((_DWORD *)this + 99) = (int)*((float *)a2 + 12);
  v4 = CBaseTrayFlyoutExperienceManager::PositionFlyoutCore((CBaseTrayFlyoutExperienceManager *)((char *)this - 48));
  v5 = v4;
  if ( v4 >= 0 )
  {
    v7 = *((_QWORD *)this + 42);
    if ( v7 )
      (*(void (__fastcall **)(__int64, struct CSingleViewShellExperience *))(*(_QWORD *)v7 + 16LL))(v7, a2);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x150,
      (int)"desktop\\internal\\shell\\inc\\private\\BaseTrayFlyoutExperience.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
}
