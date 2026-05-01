/*
 * XREFs of CMultitaskingViewTaskCallback__lambda_e646d3ab26e1953b7e25ed2742d58c2e___::RunTask @ 0x180555000
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x18004D078 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CMultitaskingViewTaskCallback__lambda_e646d3ab26e1953b7e25ed2742d58c2e___::RunTask(
        __int64 a1,
        __int64 *a2)
{
  __int64 v3; // rax
  void *v4; // rdx
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  v3 = *a2;
  v5 = 0LL;
  if ( (*(int (__fastcall **)(__int64 *, __int64, GUID *, __int64 *))(v3 + 40))(
         a2,
         2LL,
         &GUID_49484dfc_13ca_4d28_aa1b_981c61ed37c9,
         &v5) >= 0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 40LL))(v5);
  wil::details::SetEvent(**(wil::details ***)(a1 + 16), v4);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v5);
}
