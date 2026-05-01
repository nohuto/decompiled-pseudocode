/*
 * XREFs of ?_ReconcileViewWithVisibility@CTaskWindow@@AEAAXXZ @ 0x1800AD5E4
 * Callers:
 *     ?SetVisibility@CTaskWindow@@UEAAXW4ViewVisibilityState@@@Z @ 0x1800AB850 (-SetVisibility@CTaskWindow@@UEAAXW4ViewVisibilityState@@@Z.c)
 *     ?Reinitialize@CTaskWindow@@UEAAJAEBUTASKWINDOW_REINIT_DATA@@@Z @ 0x180307320 (-Reinitialize@CTaskWindow@@UEAAJAEBUTASKWINDOW_REINIT_DATA@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800ADD54 (--$As@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@-$ComPtr@UIViewWrapper@.c)
 *     ?s_UpdateNavigationLevel@CTaskWindow@@CAXPEAUIImmersiveApplicationInternal@@PEAUTASK_WINDOW@1@@Z @ 0x1800ADE60 (-s_UpdateNavigationLevel@CTaskWindow@@CAXPEAUIImmersiveApplicationInternal@@PEAUTASK_WINDOW@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CTaskWindow::_ReconcileViewWithVisibility(struct IImmersiveApplicationInternal **this)
{
  int v2; // eax
  wil::details::in1diag3 *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  if ( this[7] )
  {
    CTaskWindow::s_UpdateNavigationLevel(this[17], (struct CTaskWindow::TASK_WINDOW *)(this + 5));
    v7 = 0LL;
    v2 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies>(
           this + 7,
           &v7);
    v3 = retaddr;
    if ( v2 < 0 )
    {
      v5 = 1177LL;
    }
    else
    {
      v2 = (*(__int64 (__fastcall **)(__int64, bool))(*(_QWORD *)v7 + 88LL))(v7, *((_DWORD *)this + 32) == 2);
      v3 = retaddr;
      if ( v2 >= 0 )
        goto LABEL_4;
      v5 = 1181LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v3,
      (void *)v5,
      (int)"pcshell\\twinui\\appmanager\\lib\\taskwindow.cpp",
      (const char *)(unsigned int)v2);
LABEL_4:
    v4 = v7;
    if ( v7 )
    {
      v7 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
  }
}
