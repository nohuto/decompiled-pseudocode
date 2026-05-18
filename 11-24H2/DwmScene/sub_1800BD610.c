/*
 * XREFs of sub_1800BD610 @ 0x1800BD610
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     memset @ 0x18000C4E8 (memset.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_1800BD964 @ 0x1800BD964 (sub_1800BD964.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_1800BD610(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  int v9; // eax
  ULONG_PTR v10; // rdi
  void (__fastcall *v11)(_QWORD, __int64); // rdi
  __int64 v12; // rax
  __int64 v13; // [rsp+30h] [rbp-108h] BYREF
  __int64 v14; // [rsp+38h] [rbp-100h]
  EXCEPTION_RECORD pExceptionRecord; // [rsp+60h] [rbp-D8h] BYREF
  void *retaddr; // [rsp+138h] [rbp+0h]

  sub_1800BD964(a1, &v13);
  if ( v13 )
  {
    *(_DWORD *)(a4 + 36) = 3;
    v9 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, _QWORD *))(*(_QWORD *)a2 + 192LL))(
           a2,
           a3,
           a4,
           0LL,
           a5);
    v10 = v9;
    if ( v9 < 0 )
    {
      memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
      pExceptionRecord.ExceptionCode = -532265403;
      pExceptionRecord.ExceptionAddress = retaddr;
      pExceptionRecord.NumberParameters = 1;
      pExceptionRecord.ExceptionInformation[0] = v10;
      RaiseFailFastException(&pExceptionRecord, 0LL, 0);
    }
    v11 = (void (__fastcall *)(_QWORD, __int64))a1[14];
    if ( v11 )
    {
      v12 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 368LL))(a1);
      v11(*a5, v12);
    }
  }
  if ( v14 )
    sub_18001060C(v14);
}
