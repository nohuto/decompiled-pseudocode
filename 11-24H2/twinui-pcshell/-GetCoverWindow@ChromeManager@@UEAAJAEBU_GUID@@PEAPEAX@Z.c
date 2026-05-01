/*
 * XREFs of ?GetCoverWindow@ChromeManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180524630
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ChromeManager::GetCoverWindow(ChromeManager *this, const struct _GUID *a2, void **a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (***((__int64 (__fastcall ****)(_QWORD, const struct _GUID *, void **))this + 2))(*((_QWORD *)this + 2), a2, a3);
  v4 = v3;
  if ( v3 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x60,
      (int)"pcshell\\twinui\\tabletmode\\lib\\chromemanager.cpp",
      (const char *)(unsigned int)v3);
  return v4;
}
