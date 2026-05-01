/*
 * XREFs of _lambda_8dfae0f1a0c35483e19f36087ce437d3_::operator() @ 0x180050B28
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5af8d5de97e6639990840c940ce8594c___::Run @ 0x180050AA0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5af8d5de97e6639990840c940ce8594c___--Run.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall lambda_8dfae0f1a0c35483e19f36087ce437d3_::operator()(_QWORD *a1)
{
  __int64 *v2; // rcx
  __int64 v3; // rax
  unsigned int v4; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v5; // [rsp+24h] [rbp-24h] BYREF
  unsigned int v6; // [rsp+28h] [rbp-20h] BYREF
  unsigned int v7; // [rsp+2Ch] [rbp-1Ch] BYREF
  unsigned int v8; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v9; // [rsp+34h] [rbp-14h] BYREF
  __int64 v10[2]; // [rsp+38h] [rbp-10h] BYREF
  unsigned int v11; // [rsp+60h] [rbp+18h] BYREF
  unsigned int v12; // [rsp+68h] [rbp+20h] BYREF
  unsigned int v13; // [rsp+70h] [rbp+28h] BYREF
  int v14; // [rsp+78h] [rbp+30h] BYREF

  v10[0] = 0LL;
  v2 = *(__int64 **)(a1[1] + 120LL);
  v3 = *v2;
  v10[0] = 0LL;
  if ( (*(int (__fastcall **)(__int64 *, __int64 *))(v3 + 144))(v2, v10) >= 0 )
  {
    if ( (*(int (__fastcall **)(_QWORD, unsigned int *, unsigned int *))(*(_QWORD *)*a1 + 48LL))(*a1, &v12, &v11) >= 0 )
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v10[0] + 48LL))(v10[0], v12, v11);
    if ( (*(int (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)*a1 + 112LL))(*a1, &v13) >= 0 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10[0] + 120LL))(v10[0], v13);
    if ( (*(int (__fastcall **)(_QWORD, int *))(*(_QWORD *)*a1 + 32LL))(*a1, &v14) >= 0 )
      (*(void (__fastcall **)(__int64, bool))(*(_QWORD *)v10[0] + 32LL))(v10[0], v14 != 0);
    if ( (*(int (__fastcall **)(_QWORD, unsigned int *, unsigned int *))(*(_QWORD *)*a1 + 64LL))(*a1, &v5, &v4) >= 0 )
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v10[0] + 88LL))(v10[0], v5, v4);
    if ( (*(int (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)*a1 + 80LL))(*a1, &v6) >= 0 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10[0] + 56LL))(v10[0], v6);
    if ( (*(int (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)*a1 + 96LL))(*a1, &v7) >= 0 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10[0] + 104LL))(v10[0], v7);
    if ( (*(int (__fastcall **)(_QWORD, unsigned int *, unsigned int *))(*(_QWORD *)*a1 + 128LL))(*a1, &v9, &v8) >= 0 )
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v10[0] + 136LL))(v10[0], v9, v8);
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v10);
}
