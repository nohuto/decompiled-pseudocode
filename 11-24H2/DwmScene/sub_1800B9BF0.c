/*
 * XREFs of sub_1800B9BF0 @ 0x1800B9BF0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     memset @ 0x18000C4E8 (memset.c)
 *     sub_18000E954 @ 0x18000E954 (sub_18000E954.c)
 *     sub_1800B628C @ 0x1800B628C (sub_1800B628C.c)
 *     sub_1800B9B64 @ 0x1800B9B64 (sub_1800B9B64.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800B9BF0(__int64 a1)
{
  _QWORD *v1; // rax
  int v2; // eax
  ULONG_PTR v3; // rbx
  unsigned int v4; // ebx
  int v6; // [rsp+20h] [rbp-79h] BYREF
  __int64 v7; // [rsp+28h] [rbp-71h] BYREF
  __int64 v8[2]; // [rsp+30h] [rbp-69h] BYREF
  EXCEPTION_RECORD pExceptionRecord; // [rsp+40h] [rbp-59h] BYREF
  void *retaddr; // [rsp+F8h] [rbp+5Fh]

  v6 = -1;
  v7 = 0LL;
  v1 = sub_1800B9B64(a1, v8);
  sub_1800B628C((__int64 (__fastcall ****)(_QWORD, void *, __int64 *))v1, &v7);
  sub_18000E954(v8);
  if ( v7 )
  {
    v2 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v7 + 104LL))(v7, &v6);
    v3 = v2;
    if ( v2 < 0 )
    {
      memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
      pExceptionRecord.ExceptionCode = -532265403;
      pExceptionRecord.ExceptionAddress = retaddr;
      pExceptionRecord.NumberParameters = 1;
      pExceptionRecord.ExceptionInformation[0] = v3;
      RaiseFailFastException(&pExceptionRecord, 0LL, 0);
    }
  }
  v4 = v6;
  sub_18000E954(&v7);
  return v4;
}
