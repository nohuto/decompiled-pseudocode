/*
 * XREFs of ?HandleActivationChange@ActivationWatcherBamoPrincipal@@QEAAJAEBU_LUID@@0@Z @ 0x1800B170C
 * Callers:
 *     ?AddActivatableEntity@ActivationWatcherBamoPrincipal@@QEAAJ_KU_LUID@@0IIW4ACTIVATION_OBJECT_STATE@@@Z @ 0x18000DDE0 (-AddActivatableEntity@ActivationWatcherBamoPrincipal@@QEAAJ_KU_LUID@@0IIW4ACTIVATION_OBJECT_STAT.c)
 *     ?OnActivationObjectNotification@ForegroundManager@@AEAAXPEBU_tagActivationObjectNotification@@@Z @ 0x18002286C (-OnActivationObjectNotification@ForegroundManager@@AEAAXPEBU_tagActivationObjectNotification@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800163E4 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?TryUpdateActivationControllerProxy@ActivationWatcherBamoPrincipal@@AEAAX_K_N@Z @ 0x18002369C (-TryUpdateActivationControllerProxy@ActivationWatcherBamoPrincipal@@AEAAX_K_N@Z.c)
 *     ?GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ @ 0x180025F94 (-GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ.c)
 *     ?GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z @ 0x180025FD8 (-GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z.c)
 *     ?GetWindowIdFromViewId@ViewHelper@@SA_KAEAVViewHierarchyWithWindowManager@@I@Z @ 0x1800263B0 (-GetWindowIdFromViewId@ViewHelper@@SA_KAEAVViewHierarchyWithWindowManager@@I@Z.c)
 *     ??8@YA_NAEBU_LUID@@0@Z @ 0x180074BB8 (--8@YA_NAEBU_LUID@@0@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetTopLevelHostView@ViewHierarchyWithWindowManager@@QEAAII@Z @ 0x1800AEC20 (-GetTopLevelHostView@ViewHierarchyWithWindowManager@@QEAAII@Z.c)
 *     ??4?$com_ptr_t@VActivatableEntityBamoPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800B12C8 (--4-$com_ptr_t@VActivatableEntityBamoPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@$$QE.c)
 *     ?HandleActivationChange@ForegroundManagerServer@InputTraceLogging@@SAXAEBU_LUID@@0@Z @ 0x1800B18F8 (-HandleActivationChange@ForegroundManagerServer@InputTraceLogging@@SAXAEBU_LUID@@0@Z.c)
 *     ?TryFindActivatableEntity@ActivationWatcherBamoPrincipal@@QEAA?AV?$com_ptr_t@VActivatableEntityBamoPrincipal@@Uerr_exception_policy@wil@@@wil@@AEBU_LUID@@@Z @ 0x1800B2110 (-TryFindActivatableEntity@ActivationWatcherBamoPrincipal@@QEAA-AV-$com_ptr_t@VActivatableEntityB.c)
 *     ?TryFindActivatableEntity@ActivationWatcherBamoPrincipal@@QEAA?AV?$com_ptr_t@VActivatableEntityBamoPrincipal@@Uerr_exception_policy@wil@@@wil@@_K@Z @ 0x1800B2154 (-TryFindActivatableEntity@ActivationWatcherBamoPrincipal@@QEAA-AV-$com_ptr_t@VActiv_ea_1800B2154.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ActivationWatcherBamoPrincipal::HandleActivationChange(
        ActivationWatcherBamoPrincipal *this,
        struct _LUID *a2,
        struct _LUID *a3)
{
  struct ViewHierarchyWithWindowManager *ViewHierarchy; // r15
  __int64 v7; // rbx
  __int64 v8; // r8
  __int64 *ActivatableEntity; // rax
  const char *v10; // r9
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int v14; // eax
  int ViewIdFromWindowId; // eax
  __int64 WindowIdFromViewId; // rax
  __int64 *v17; // rax
  __int64 *v18; // rax
  const char *v19; // r9
  __int64 v21; // [rsp+20h] [rbp-20h] BYREF
  __int64 v22; // [rsp+28h] [rbp-18h] BYREF
  __int64 v23[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v25; // [rsp+78h] [rbp+38h] BYREF

  InputTraceLogging::ForegroundManagerServer::HandleActivationChange(a2, a3);
  ViewHierarchy = ISMStatics::GetViewHierarchy();
  v7 = 0LL;
  v22 = 0LL;
  v21 = 0LL;
  v23[0] = 0LL;
  if ( !operator==(a2, v23) )
  {
    ActivatableEntity = (__int64 *)ActivationWatcherBamoPrincipal::TryFindActivatableEntity(this, &v25, a2);
    wil::com_ptr_t<ActivatableEntityBamoPrincipal,wil::err_exception_policy>::operator=(&v22, ActivatableEntity);
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v25);
    v7 = v22;
    if ( !v22 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x3E,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\activationwatcherbamoprincipal.cpp",
        v10);
    ActivationWatcherBamoPrincipal::TryUpdateActivationControllerProxy(retaddr, *(_QWORD *)(v22 + 88), 1);
    v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v7 + 8) + 40LL))(v7 + 8);
    v12 = *(_QWORD *)(v7 + 8);
    v13 = v7 + 8;
    if ( v11 )
      v14 = (*(__int64 (__fastcall **)(__int64))(v12 + 40))(v13);
    else
      v14 = (*(__int64 (__fastcall **)(__int64))(v12 + 24))(v13);
    ViewIdFromWindowId = ViewHelper::GetViewIdFromWindowId(ViewHierarchy, v14);
    ViewHierarchyWithWindowManager::GetTopLevelHostView(ViewHierarchy, ViewIdFromWindowId);
    WindowIdFromViewId = ViewHelper::GetWindowIdFromViewId(ViewHierarchy);
    v17 = (__int64 *)ActivationWatcherBamoPrincipal::TryFindActivatableEntity(this, &v25, WindowIdFromViewId);
    wil::com_ptr_t<ActivatableEntityBamoPrincipal,wil::err_exception_policy>::operator=(&v21, v17);
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v25);
    v8 = v21;
  }
  (*(void (__fastcall **)(char *, __int64))(*((_QWORD *)this + 1) + 72LL))((char *)this + 8, v8);
  (*(void (__fastcall **)(char *, __int64))(*((_QWORD *)this + 1) + 56LL))((char *)this + 8, v7);
  v25 = 0LL;
  if ( !operator==(a3, v23) )
  {
    v18 = (__int64 *)ActivationWatcherBamoPrincipal::TryFindActivatableEntity(this, v23, a3);
    wil::com_ptr_t<ActivatableEntityBamoPrincipal,wil::err_exception_policy>::operator=(&v25, v18);
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v23);
    if ( !v25 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x4F,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\activationwatcherbamoprincipal.cpp",
        v19);
    ActivationWatcherBamoPrincipal::TryUpdateActivationControllerProxy(retaddr, *(_QWORD *)(v25 + 88), 0);
  }
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v25);
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v21);
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v22);
  return 0LL;
}
