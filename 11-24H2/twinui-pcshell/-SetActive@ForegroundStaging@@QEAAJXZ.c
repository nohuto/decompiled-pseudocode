/*
 * XREFs of ?SetActive@ForegroundStaging@@QEAAJXZ @ 0x1801F2C8C
 * Callers:
 *     ?MoveForegroundForPendingHostDismiss@CMultitaskingViewManager@@UEAAJXZ @ 0x1801F2BB0 (-MoveForegroundForPendingHostDismiss@CMultitaskingViewManager@@UEAAJXZ.c)
 *     ?_EnsureForegroundRight@CMultitaskingViewServiceProvider@@AEAAJ_N@Z @ 0x1801F2BF0 (-_EnsureForegroundRight@CMultitaskingViewServiceProvider@@AEAAJ_N@Z.c)
 *     ?EnsureExplorerInForeground@CMultitaskingViewManager@@AEAAJXZ @ 0x1804A2FD4 (-EnsureExplorerInForeground@CMultitaskingViewManager@@AEAAJXZ.c)
 *     CMultitaskingViewManager::ShowRequested$_ResumeCoro$1 @ 0x1804A36D0 (CMultitaskingViewManager--ShowRequested$_ResumeCoro$1.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ForegroundStaging::SetActive(ForegroundStaging *this)
{
  __int64 v1; // rcx
  unsigned int v2; // ebx
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *(_QWORD *)this;
  if ( !v1 )
  {
    v2 = -2147019873;
    v4 = 26LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (int)"pcshell\\twinui\\MultitaskingView\\inc\\ForegroundStagingWindow.h",
      (const char *)v2);
    return v2;
  }
  v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 24LL))(v1);
  if ( (v2 & 0x80000000) != 0 )
  {
    v4 = 27LL;
    goto LABEL_6;
  }
  return v2;
}
