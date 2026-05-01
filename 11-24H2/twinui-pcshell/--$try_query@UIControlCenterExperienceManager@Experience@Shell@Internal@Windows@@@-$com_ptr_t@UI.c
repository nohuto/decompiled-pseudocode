/*
 * XREFs of ??$try_query@UIControlCenterExperienceManager@Experience@Shell@Internal@Windows@@@?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIControlCenterExperienceManager@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1801E8088
 * Callers:
 *     _lambda_b959cc7d3c94daadbba7e8631760d391_::operator() @ 0x180373954 (_lambda_b959cc7d3c94daadbba7e8631760d391_--operator().c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e42ff9ffcd3368a4558d518826f3b602___::Run @ 0x180376710 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_e42ff9ffcd3368a4558d518826f3b602___--Run.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall wil::com_ptr_t<IWeakReference,wil::err_exception_policy>::try_query<Windows::Internal::Shell::Experience::IControlCenterExperienceManager>(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v3; // rcx

  v3 = *a1;
  *a2 = 0LL;
  (*(void (__fastcall **)(__int64, GUID *, _QWORD *))(*(_QWORD *)v3 + 24LL))(
    v3,
    &GUID_d669a58e_6b18_4d1d_9004_a8862adb0a20,
    a2);
  return a2;
}
