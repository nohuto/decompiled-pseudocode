/*
 * XREFs of _lambda_bdb274a0361bbe69399ac0e2c4eec277_::operator() @ 0x1804E7DC8
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_bdb274a0361bbe69399ac0e2c4eec277___::Run @ 0x1804EBED0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_bdb274a0361bbe69399ac0e2c4eec277___--.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@UIAppViewPreview@WindowManagement@ApplicationModel@Internal@Windows@@@?$com_ptr_t@UIAppView@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIAppViewPreview@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1801F537C (--$query@UIAppViewPreview@WindowManagement@ApplicationModel@Internal@Windows@@@-$com_ptr_t@UIApp.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_bdb274a0361bbe69399ac0e2c4eec277_::operator()(_QWORD **a1)
{
  __int64 (__fastcall ****v2)(_QWORD, GUID *, _QWORD *); // rcx
  int v3; // eax
  const char *v4; // r9
  __int64 result; // rax
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))(*a1 + 13);
  try
  {
    wil::com_ptr_t<Windows::Internal::ApplicationModel::WindowManagement::IAppView,wil::err_exception_policy>::query<Windows::Internal::ApplicationModel::WindowManagement::IAppViewPreview>(
      v2,
      &v8);
    v3 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v8 + 72LL))(v8, *a1[1], *a1[2]);
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x5A8,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v3,
        v6);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v8);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x5AA,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v4);
  }
  return result;
}
