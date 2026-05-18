/*
 * XREFs of sub_1800BD120 @ 0x1800BD120
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     memset @ 0x18000C088 (memset.c)
 *     sub_18000E854 @ 0x18000E854 (sub_18000E854.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_1800BD804 @ 0x1800BD804 (sub_1800BD804.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800BD120(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  __int64 result; // rax
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(__int64, void *, _QWORD); // rbx
  int v12; // eax
  ULONG_PTR v13; // rbx
  __int64 (__fastcall ***v14)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v15)(_QWORD, _DWORD *, __int64 *); // rdi
  int v16; // eax
  ULONG_PTR v17; // rbx
  int v18; // eax
  ULONG_PTR v19; // rbx
  void (__fastcall *v20)(_QWORD, __int64); // rbx
  __int64 v21; // rax
  __int64 v22; // [rsp+40h] [rbp-C0h] BYREF
  __int64 (__fastcall ***v23)(_QWORD, _DWORD *, __int64 *); // [rsp+48h] [rbp-B8h] BYREF
  __int64 v24; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v25; // [rsp+58h] [rbp-A8h]
  EXCEPTION_RECORD pExceptionRecord; // [rsp+80h] [rbp-80h] BYREF
  void *retaddr; // [rsp+178h] [rbp+78h]

  result = sub_1800BD804(a1, &v24);
  if ( v24 )
  {
    *(_DWORD *)(a4 + 36) = 3;
    v10 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 368LL))(a1);
    v23 = 0LL;
    v11 = *(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v10 + 24LL);
    sub_18000E854((__int64 *)&v23);
    v12 = v11(v10, &unk_18018A6D0, &v23);
    v13 = v12;
    if ( v12 < 0 )
    {
      memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
      pExceptionRecord.ExceptionCode = -532265403;
      pExceptionRecord.ExceptionAddress = retaddr;
      pExceptionRecord.NumberParameters = 1;
      pExceptionRecord.ExceptionInformation[0] = v13;
      RaiseFailFastException(&pExceptionRecord, 0LL, 0);
    }
    v22 = 0LL;
    v14 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v23;
    v15 = **v23;
    sub_18000E854(&v22);
    v16 = v15(v14, dword_1800F7220, &v22);
    v17 = v16;
    if ( v16 < 0 )
    {
      memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
      pExceptionRecord.ExceptionCode = -532265403;
      pExceptionRecord.ExceptionAddress = retaddr;
      pExceptionRecord.NumberParameters = 1;
      pExceptionRecord.ExceptionInformation[0] = v17;
      RaiseFailFastException(&pExceptionRecord, 0LL, 0);
    }
    v18 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD, _QWORD *))(*(_QWORD *)a2 + 128LL))(
            a2,
            a3,
            v22,
            a4,
            0LL,
            a5);
    v19 = v18;
    if ( v18 < 0 )
    {
      memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
      pExceptionRecord.ExceptionCode = -532265403;
      pExceptionRecord.ExceptionAddress = retaddr;
      pExceptionRecord.NumberParameters = 1;
      pExceptionRecord.ExceptionInformation[0] = v19;
      RaiseFailFastException(&pExceptionRecord, 0LL, 0);
    }
    v20 = (void (__fastcall *)(_QWORD, __int64))a1[14];
    if ( v20 )
    {
      v21 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 368LL))(a1);
      v20(*a5, v21);
    }
    sub_18000E854(&v22);
    result = sub_18000E854((__int64 *)&v23);
  }
  if ( v25 )
    return sub_18001050C(v25);
  return result;
}
