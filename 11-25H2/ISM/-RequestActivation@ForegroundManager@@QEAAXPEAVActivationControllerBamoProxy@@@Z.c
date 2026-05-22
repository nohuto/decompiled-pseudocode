/*
 * XREFs of ?RequestActivation@ForegroundManager@@QEAAXPEAVActivationControllerBamoProxy@@@Z @ 0x1800AFB38
 * Callers:
 *     ?RequestActivation@ActivationControllerBamoProxy@@MEAAJXZ @ 0x1800B2820 (-RequestActivation@ActivationControllerBamoProxy@@MEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800163E4 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ @ 0x180025F94 (-GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ.c)
 *     ?GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z @ 0x180025FD8 (-GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z.c)
 *     ?GetWindowIdFromViewId@ViewHelper@@SA_KAEAVViewHierarchyWithWindowManager@@I@Z @ 0x1800263B0 (-GetWindowIdFromViewId@ViewHelper@@SA_KAEAVViewHierarchyWithWindowManager@@I@Z.c)
 *     ?GetTopLevelHostView@ViewHierarchyWithWindowManager@@QEAAII@Z @ 0x1800AEC20 (-GetTopLevelHostView@ViewHierarchyWithWindowManager@@QEAAII@Z.c)
 *     ?TryFindActivatableEntity@ActivationWatcherBamoPrincipal@@QEAA?AV?$com_ptr_t@VActivatableEntityBamoPrincipal@@Uerr_exception_policy@wil@@@wil@@AEBU_LUID@@@Z @ 0x1800B2110 (-TryFindActivatableEntity@ActivationWatcherBamoPrincipal@@QEAA-AV-$com_ptr_t@VActivatableEntityB.c)
 *     ?TryFindActivatableEntity@ActivationWatcherBamoPrincipal@@QEAA?AV?$com_ptr_t@VActivatableEntityBamoPrincipal@@Uerr_exception_policy@wil@@@wil@@_K@Z @ 0x1800B2154 (-TryFindActivatableEntity@ActivationWatcherBamoPrincipal@@QEAA-AV-$com_ptr_t@VActiv_ea_1800B2154.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall ForegroundManager::RequestActivation(ForegroundManager *this, struct ActivationControllerBamoProxy *a2)
{
  struct ViewHierarchyWithWindowManager *ViewHierarchy; // rbp
  __int64 v5; // rdi
  __int64 v6; // rax
  bool v7; // zf
  __int64 v8; // rax
  __int64 (*v9)(void); // rax
  unsigned int v10; // eax
  int ViewIdFromWindowId; // eax
  __int64 WindowIdFromViewId; // rax
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF
  __int64 v14; // [rsp+48h] [rbp+10h] BYREF

  ViewHierarchy = ISMStatics::GetViewHierarchy();
  v5 = *((_QWORD *)this + 67);
  v6 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 1) + 48LL))((char *)a2 + 8);
  ActivationWatcherBamoPrincipal::TryFindActivatableEntity(v5, &v13, v6);
  if ( v13 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v13 + 8) + 40LL))(v13 + 8) == 0;
    v8 = *(_QWORD *)(v13 + 8);
    if ( v7 )
      v9 = *(__int64 (**)(void))(v8 + 24);
    else
      v9 = *(__int64 (**)(void))(v8 + 40);
    v10 = v9();
    ViewIdFromWindowId = ViewHelper::GetViewIdFromWindowId(ViewHierarchy, v10);
    ViewHierarchyWithWindowManager::GetTopLevelHostView(ViewHierarchy, ViewIdFromWindowId);
    WindowIdFromViewId = ViewHelper::GetWindowIdFromViewId(ViewHierarchy);
    ActivationWatcherBamoPrincipal::TryFindActivatableEntity(*((_QWORD *)this + 67), &v14, WindowIdFromViewId);
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(*((_QWORD *)this + 67) + 8LL) + 24LL))(
      *((_QWORD *)this + 67) + 8LL,
      v13,
      v14);
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v14);
  }
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v13);
}
