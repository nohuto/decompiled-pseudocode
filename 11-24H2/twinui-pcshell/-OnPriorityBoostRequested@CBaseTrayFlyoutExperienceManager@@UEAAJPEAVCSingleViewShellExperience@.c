/*
 * XREFs of ?OnPriorityBoostRequested@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1803CA020
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CBaseTrayFlyoutExperienceManager::OnPriorityBoostRequested(
        CBaseTrayFlyoutExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  __int64 v4; // rcx
  int v5; // eax
  unsigned int v6; // edi
  __int64 v8; // rcx
  char *v9; // rdi
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = *((_QWORD *)this + 1);
  if ( v4 && (v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 48LL))(v4), v6 = v5, v5 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A1,
      (int)"desktop\\internal\\shell\\inc\\private\\BaseTrayFlyoutExperience.cpp",
      (const char *)(unsigned int)v5);
    return v6;
  }
  else
  {
    v8 = *((_QWORD *)this + 42);
    if ( v8
      && (v9 = (char *)this - 48,
          v10 = (*(__int64 (__fastcall **)(__int64, struct CSingleViewShellExperience *))(*(_QWORD *)v8 + 120LL))(
                  v8,
                  a2),
          v11 = v10,
          v10 < 0) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1AF,
        (int)"desktop\\internal\\shell\\inc\\private\\BaseTrayFlyoutExperience.cpp",
        (const char *)(unsigned int)v10);
      v12 = *((_QWORD *)v9 + 7);
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 56LL))(v12);
      return v11;
    }
    else
    {
      return 0LL;
    }
  }
}
