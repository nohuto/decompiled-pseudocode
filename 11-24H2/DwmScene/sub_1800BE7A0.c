/*
 * XREFs of sub_1800BE7A0 @ 0x1800BE7A0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     memset @ 0x18000C4E8 (memset.c)
 *     sub_18000E954 @ 0x18000E954 (sub_18000E954.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_1800BB2F8 @ 0x1800BB2F8 (sub_1800BB2F8.c)
 *     sub_1800BD7C0 @ 0x1800BD7C0 (sub_1800BD7C0.c)
 *     sub_1800BD81C @ 0x1800BD81C (sub_1800BD81C.c)
 *     sub_1800BD964 @ 0x1800BD964 (sub_1800BD964.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall sub_1800BE7A0(__int64 a1, __int64 *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rdi
  int (__fastcall *v6)(__int64, _DWORD *, _QWORD, __int64 *); // rbx
  ULONG_PTR v7; // rbx
  __int64 *v8; // rax
  __int64 v10; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v11; // [rsp+40h] [rbp-C0h]
  __int64 *v12; // [rsp+48h] [rbp-B8h]
  EXCEPTION_RECORD pExceptionRecord; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v14[12]; // [rsp+F0h] [rbp-10h] BYREF
  void *retaddr; // [rsp+158h] [rbp+58h]

  v12 = a2;
  v14[9] = 0;
  v14[3] = 1;
  v14[8] = 32;
  v14[4] = sub_1800BD81C(a1);
  v14[0] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 80LL))(a1);
  v14[1] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 88LL))(a1);
  v14[2] = 1;
  v14[5] = 1;
  v14[6] = 0;
  v14[10] = 512;
  v14[7] = 0;
  *a2 = 0LL;
  v4 = sub_1800BD7C0(a1, &v10);
  v5 = *v4;
  v6 = *(int (__fastcall **)(__int64, _DWORD *, _QWORD, __int64 *))(*(_QWORD *)*v4 + 40LL);
  sub_18000E954(a2);
  v7 = v6(v5, v14, 0LL, a2);
  sub_18000E954(&v10);
  v8 = sub_1800BD964(a1, &v10);
  sub_1800BB2F8(*v8, v7);
  if ( v11 )
    sub_18001060C(v11);
  if ( (v7 & 0x80000000) != 0LL )
  {
    memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    pExceptionRecord.ExceptionCode = -532265403;
    pExceptionRecord.ExceptionAddress = retaddr;
    pExceptionRecord.NumberParameters = 1;
    pExceptionRecord.ExceptionInformation[0] = v7;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  return a2;
}
