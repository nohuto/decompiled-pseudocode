/*
 * XREFs of CMultitaskingViewTaskCallback__lambda_e646d3ab26e1953b7e25ed2742d58c2e___::RunTask @ 0x180603460
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIImmersiveComponentCreator@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800AC91C (--1-$com_ptr_t@UIImmersiveComponentCreator@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x180177BB4 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CMultitaskingViewTaskCallback__lambda_e646d3ab26e1953b7e25ed2742d58c2e___::RunTask(
        __int64 a1,
        __int64 *a2)
{
  __int64 v3; // rax
  void *v4; // rdx
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v3 = *a2;
  v6 = 0LL;
  if ( (*(int (__fastcall **)(__int64 *, __int64, GUID *, __int64 *))(v3 + 40))(
         a2,
         2LL,
         &GUID_49484dfc_13ca_4d28_aa1b_981c61ed37c9,
         &v6) >= 0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 40LL))(v6);
  wil::details::SetEvent(**(wil::details ***)(a1 + 16), v4);
  return wil::com_ptr_t<IImmersiveComponentCreator,wil::err_exception_policy>::~com_ptr_t<IImmersiveComponentCreator,wil::err_exception_policy>(&v6);
}
