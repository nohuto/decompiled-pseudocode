/*
 * XREFs of _lambda_665d6f33f7c53b091004cce062c6e03d_::operator() @ 0x1801317A8
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_665d6f33f7c53b091004cce062c6e03d___::Run @ 0x180131780 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_665d6f33f7c53b091004cce062c6e03d___--.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIViewPresentationMediator@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18019204C (-reset@-$com_ptr_t@UIViewPresentationMediator@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_665d6f33f7c53b091004cce062c6e03d_::operator()(__int64 **a1)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64, __int64 *); // rbx
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = 0LL;
  v2 = **a1;
  v3 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 48LL);
  wil::com_ptr_t<IViewPresentationMediator,wil::err_returncode_policy>::reset(&v10);
  v4 = v3(v2, &v10);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 797LL;
  }
  else
  {
    v4 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1[1][37] + 144LL))(a1[1][37], v10);
    v5 = v4;
    if ( v4 >= 0 )
    {
      v5 = 0;
      goto LABEL_5;
    }
    v6 = 798LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
    (const char *)(unsigned int)v4,
    v8);
LABEL_5:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v10);
  return v5;
}
