/*
 * XREFs of ?RemoveDesktopForRecoveryInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x180554980
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateCurrentDesktop@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@0@Z @ 0x1805585B8 (-UpdateCurrentDesktop@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@0@Z.c)
 *     ?_CheckDesktopRemovalPreconditions@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@0@Z @ 0x180558A00 (-_CheckDesktopRemovalPreconditions@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVirtualDesktopManager::RemoveDesktopForRecoveryInternal(
        CVirtualDesktopManager *this,
        struct IVirtualDesktop *a2,
        struct IVirtualDesktop *a3)
{
  int updated; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  updated = CVirtualDesktopManager::_CheckDesktopRemovalPreconditions(
              (CVirtualDesktopManager *)((char *)this - 8),
              a2,
              a3);
  if ( updated < 0 )
  {
    v7 = 1103LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)updated);
    return (unsigned int)updated;
  }
  if ( *((_QWORD *)this + 13) )
  {
    updated = -2147019873;
    v7 = 1104LL;
    goto LABEL_9;
  }
  updated = CVirtualDesktopManager::UpdateCurrentDesktop((CVirtualDesktopManager *)((char *)this - 8), a2, a3);
  if ( updated < 0 )
  {
    v7 = 1106LL;
    goto LABEL_9;
  }
  updated = (*(__int64 (__fastcall **)(_QWORD, struct IVirtualDesktop *))(**((_QWORD **)this + 12) + 64LL))(
              *((_QWORD *)this + 12),
              a2);
  if ( updated < 0 )
  {
    v7 = 1107LL;
    goto LABEL_9;
  }
  return (unsigned int)updated;
}
