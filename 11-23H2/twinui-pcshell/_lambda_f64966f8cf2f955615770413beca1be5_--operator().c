/*
 * XREFs of _lambda_f64966f8cf2f955615770413beca1be5_::operator() @ 0x1804E8884
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f64966f8cf2f955615770413beca1be5___::Run @ 0x1804EC0B0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_f64966f8cf2f955615770413beca1be5___--.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_f64966f8cf2f955615770413beca1be5_::operator()(_QWORD *a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rax
  _DWORD *v4; // r8
  int v5; // ebx
  __int64 result; // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v2 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(*a1 + 280LL) + 144LL))(
                   *(_QWORD *)(*a1 + 280LL),
                   &v8);
  v3 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v2 + 40LL))(*v2, &v7);
  v4 = (_DWORD *)a1[1];
  LOBYTE(v4) = *v4 == 1;
  v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(*(_QWORD *)*v3 + 216LL))(
         *v3,
         *(unsigned int *)(*a1 + 352LL),
         v4);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v7);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v8);
  result = 0LL;
  if ( v5 < 0 )
    return (unsigned int)v5;
  return result;
}
