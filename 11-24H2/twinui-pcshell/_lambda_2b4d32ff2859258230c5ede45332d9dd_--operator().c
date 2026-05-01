/*
 * XREFs of _lambda_2b4d32ff2859258230c5ede45332d9dd_::operator() @ 0x18042E538
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_2b4d32ff2859258230c5ede45332d9dd___::Run @ 0x180430600 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_2b4d32ff2859258230c5ede45332d9dd___--.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18004D04C (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_2b4d32ff2859258230c5ede45332d9dd_::operator()(__int64 **a1)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64, __int64 *); // rbx
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = 0LL;
  v2 = **a1;
  v3 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 48LL);
  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(&v9);
  v4 = v3(v2, &v9);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1[1][35] + 136LL))(a1[1][35], v9);
    v5 = v4;
    if ( v4 >= 0 )
    {
      v5 = 0;
      goto LABEL_7;
    }
    v6 = 650LL;
  }
  else
  {
    v6 = 649LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
    (const char *)(unsigned int)v4);
LABEL_7:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v9);
  return v5;
}
