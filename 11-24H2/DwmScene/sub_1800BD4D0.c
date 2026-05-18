/*
 * XREFs of sub_1800BD4D0 @ 0x1800BD4D0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     memset @ 0x18000C4E8 (memset.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1800BD4D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v8; // rsi
  int v9; // eax
  ULONG_PTR v10; // rdi
  EXCEPTION_RECORD pExceptionRecord; // [rsp+40h] [rbp-D8h] BYREF
  void *retaddr; // [rsp+118h] [rbp+0h]

  v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 368LL))(a1);
  *(_DWORD *)(a4 + 36) = 4;
  if ( (*(int (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD, _QWORD, __int64))(*(_QWORD *)a2 + 120LL))(
         a2,
         a3,
         v8,
         a4,
         0LL,
         0LL,
         a5) < 0 )
  {
    *(_DWORD *)(a4 + 36) = 0;
    v9 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD, _QWORD, __int64))(*(_QWORD *)a2 + 120LL))(
           a2,
           a3,
           v8,
           a4,
           0LL,
           0LL,
           a5);
    v10 = v9;
    if ( v9 < 0 )
    {
      memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
      pExceptionRecord.ExceptionAddress = retaddr;
      pExceptionRecord.ExceptionCode = -532265403;
      pExceptionRecord.NumberParameters = 1;
      pExceptionRecord.ExceptionInformation[0] = v10;
      RaiseFailFastException(&pExceptionRecord, 0LL, 0);
    }
  }
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a2 + 64LL))(a2, v8, 2LL);
}
