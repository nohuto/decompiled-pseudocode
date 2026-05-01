/*
 * XREFs of _lambda_e3b2dfd5cb0eb4bda98ec96399df3c7e_::operator() @ 0x1801F905C
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_e3b2dfd5cb0eb4bda98ec96399df3c7e___::Run @ 0x1801F9B50 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_e3b2dfd5cb0eb4bda98ec96399df3c7e___--.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_e3b2dfd5cb0eb4bda98ec96399df3c7e_::operator()(_BYTE **a1)
{
  __int64 v2; // rcx
  int v3; // eax
  _QWORD *v4; // rax
  int v5; // eax
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v9; // [rsp+30h] [rbp+8h] BYREF
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF
  __int64 v11; // [rsp+40h] [rbp+18h] BYREF

  v2 = *((_QWORD *)*a1 + 16);
  if ( v2 )
  {
    v3 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v2 + 80LL))(v2, &v9);
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x4D3,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
        (const char *)(unsigned int)v3,
        v7);
    v4 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)*a1 + 35) + 152LL))(
                     *((_QWORD *)*a1 + 35),
                     &v11);
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v4 + 48LL))(*v4, &v10);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v11);
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, bool))(*(_QWORD *)v10 + 112LL))(v10, v9, *a1[1] != 0);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x4D7,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
        (const char *)(unsigned int)v5,
        v7);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v10);
  }
  return 0LL;
}
