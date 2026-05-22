/*
 * XREFs of ?SetForegroundActivatableEntity@ForegroundManager@@QEAAJ_K@Z @ 0x1800ADFA8
 * Callers:
 *     ?RequestForegroundChange@MPCHolographicInputManager@@QEAAX_KIKW4InputType@@UtagPOINT@@_N@Z @ 0x1800BB2DC (-RequestForegroundChange@MPCHolographicInputManager@@QEAAX_KIKW4InputType@@UtagPOINT@@_N@Z.c)
 *     ?TryActivate@ActivationProcessor@@QEAA_NUActivationInformation@@@Z @ 0x1801A4A50 (-TryActivate@ActivationProcessor@@QEAA_NUActivationInformation@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800169B4 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetForegroundActivatableEntity@ForegroundManagerServer@InputTraceLogging@@SAX_K@Z @ 0x1800AE090 (-SetForegroundActivatableEntity@ForegroundManagerServer@InputTraceLogging@@SAX_K@Z.c)
 *     ?TryFindActivatableEntity@ActivationWatcherBamoPrincipal@@QEAA?AV?$com_ptr_t@VActivatableEntityBamoPrincipal@@Uerr_exception_policy@wil@@@wil@@_K@Z @ 0x1800AFF14 (-TryFindActivatableEntity@ActivationWatcherBamoPrincipal@@QEAA-AV-$com_ptr_t@VActiv_ea_1800AFF14.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ForegroundManager::SetForegroundActivatableEntity(ForegroundManager *this, unsigned __int64 a2)
{
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF

  InputTraceLogging::ForegroundManagerServer::SetForegroundActivatableEntity(a2);
  v4 = 0;
  if ( a2 )
  {
    ActivationWatcherBamoPrincipal::TryFindActivatableEntity(*((_QWORD *)this + 67), &v7, a2);
    if ( v7 )
    {
      v8 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v7 + 8) + 56LL))(v7 + 8);
      ConfigureActivationObject(&v8, 1LL, 0LL);
    }
    else
    {
      v4 = -2147024809;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD0,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\foregroundmanager.cpp",
        (const char *)0x80070057LL);
    }
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v7);
  }
  else
  {
    v4 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCC,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\foregroundmanager.cpp",
      (const char *)0x80070057LL);
  }
  return v4;
}
