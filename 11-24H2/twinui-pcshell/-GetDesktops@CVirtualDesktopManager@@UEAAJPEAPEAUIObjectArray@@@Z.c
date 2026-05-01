/*
 * XREFs of ?GetDesktops@CVirtualDesktopManager@@UEAAJPEAPEAUIObjectArray@@@Z @ 0x1801FE870
 * Callers:
 *     ?GetDesktops@CVirtualDesktopManager@@WBA@EAAJPEAPEAUIObjectArray@@@Z @ 0x180553D10 (-GetDesktops@CVirtualDesktopManager@@WBA@EAAJPEAPEAUIObjectArray@@@Z.c)
 *     ?GetDesktops@CVirtualDesktopManager@@WBI@EAAJPEAPEAUIObjectArray@@@Z @ 0x180553D20 (-GetDesktops@CVirtualDesktopManager@@WBI@EAAJPEAPEAUIObjectArray@@@Z.c)
 *     ?UpdateWallpaperPathForAllDesktops@CVirtualDesktopManager@@UEAAJPEAUHSTRING__@@@Z @ 0x1805586F0 (-UpdateWallpaperPathForAllDesktops@CVirtualDesktopManager@@UEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDesktopsInternal@CVirtualDesktopManager@@UEAAJPEAPEAUIObjectArray@@@Z @ 0x1801FE8F0 (-GetDesktopsInternal@CVirtualDesktopManager@@UEAAJPEAPEAUIObjectArray@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopManager::GetDesktops(CVirtualDesktopManager *this, struct IObjectArray **a2)
{
  int DesktopsInternal; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 19) + 24LL))(*((_QWORD *)this + 19), &SRWLock);
  DesktopsInternal = CVirtualDesktopManager::GetDesktopsInternal(this, a2);
  v5 = DesktopsInternal;
  if ( DesktopsInternal < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x219,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)DesktopsInternal);
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return v5;
}
