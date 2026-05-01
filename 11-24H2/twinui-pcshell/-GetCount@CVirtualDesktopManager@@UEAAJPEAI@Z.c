/*
 * XREFs of ?GetCount@CVirtualDesktopManager@@UEAAJPEAI@Z @ 0x180553B70
 * Callers:
 *     ?GetCount@CVirtualDesktopManager@@WBA@EAAJPEAI@Z @ 0x180553BF0 (-GetCount@CVirtualDesktopManager@@WBA@EAAJPEAI@Z.c)
 *     ?GetCount@CVirtualDesktopManager@@WBI@EAAJPEAI@Z @ 0x180553C00 (-GetCount@CVirtualDesktopManager@@WBI@EAAJPEAI@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCountInternal@CVirtualDesktopManager@@UEAAJPEAI@Z @ 0x180553C10 (-GetCountInternal@CVirtualDesktopManager@@UEAAJPEAI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopManager::GetCount(CVirtualDesktopManager *this, unsigned int *a2)
{
  int CountInternal; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 19) + 24LL))(*((_QWORD *)this + 19), &SRWLock);
  CountInternal = CVirtualDesktopManager::GetCountInternal(this, a2);
  v5 = CountInternal;
  if ( CountInternal < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5EF,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)CountInternal);
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return v5;
}
