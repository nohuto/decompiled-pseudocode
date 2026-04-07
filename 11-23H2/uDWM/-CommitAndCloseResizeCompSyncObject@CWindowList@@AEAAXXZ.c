/*
 * XREFs of ?CommitAndCloseResizeCompSyncObject@CWindowList@@AEAAXXZ @ 0x18010928C
 * Callers:
 *     ??1CWindowList@@UEAA@XZ @ 0x180108658 (--1CWindowList@@UEAA@XZ.c)
 *     ?SetResizeCompSyncObject@CWindowList@@UEAAJPEAUIDwmWindow@@PEAX@Z @ 0x18010C9B0 (-SetResizeCompSyncObject@CWindowList@@UEAAJPEAUIDwmWindow@@PEAX@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A14C8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall CWindowList::CommitAndCloseResizeCompSyncObject(CWindowList *this)
{
  int v2; // eax
  void *v3; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_QWORD *)this + 76) )
  {
    if ( *((_BYTE *)this + 642) )
    {
      v2 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6)
                                                           + 24LL)
                                             + 32LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                  + 6)
                                                                + 24LL));
      if ( v2 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xA60,
          (__int64)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
          (const char *)(unsigned int)v2);
      *((_BYTE *)this + 642) = 0;
    }
    NtDCompositionCommitSynchronizationObject(*((_QWORD *)this + 76));
    ConfirmResizeCommit(*((_QWORD *)this + 77));
    v3 = (void *)*((_QWORD *)this + 76);
    *((_QWORD *)this + 77) = 0LL;
    CloseHandle(v3);
    *((_QWORD *)this + 76) = 0LL;
  }
}
