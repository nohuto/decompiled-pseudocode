/*
 * XREFs of sub_1800B98C0 @ 0x1800B98C0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     memset @ 0x18000C088 (memset.c)
 *     sub_18000E854 @ 0x18000E854 (sub_18000E854.c)
 *     sub_1800B9A04 @ 0x1800B9A04 (sub_1800B9A04.c)
 *     sub_1800B9CA0 @ 0x1800B9CA0 (sub_1800B9CA0.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800B98C0(__int64 a1, unsigned int *a2, _DWORD *a3)
{
  __int64 result; // rax
  int v7; // r9d
  unsigned int v8; // ebx
  int v9; // r9d
  int v10; // r9d
  _QWORD *v11; // rax
  ULONG_PTR v12; // r14
  unsigned int v13; // [rsp+30h] [rbp-E8h] BYREF
  __int64 v14; // [rsp+38h] [rbp-E0h] BYREF
  EXCEPTION_RECORD pExceptionRecord; // [rsp+40h] [rbp-D8h] BYREF
  void *retaddr; // [rsp+118h] [rbp+0h]

  result = sub_1800B9CA0();
  *a2 = 1;
  *a3 = 0;
  v7 = *(_DWORD *)(a1 + 420);
  if ( v7 != 1 )
  {
    v8 = 2;
    v9 = v7 - 2;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        if ( v10 == 1 )
          v8 = 8;
        else
          v8 = 1;
      }
      else
      {
        v8 = 4;
      }
    }
    while ( v8 )
    {
      v13 = 0;
      v11 = (_QWORD *)sub_1800B9A04(a1, &v14);
      v12 = (*(int (__fastcall **)(_QWORD, __int64, _QWORD, unsigned int *))(*(_QWORD *)*v11 + 240LL))(
              *v11,
              10LL,
              v8,
              &v13);
      sub_18000E854(&v14);
      if ( (v12 & 0x80000000) != 0LL )
      {
        memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
        pExceptionRecord.ExceptionCode = -532265403;
        pExceptionRecord.ExceptionAddress = retaddr;
        pExceptionRecord.NumberParameters = 1;
        pExceptionRecord.ExceptionInformation[0] = v12;
        RaiseFailFastException(&pExceptionRecord, 0LL, 0);
      }
      result = v13;
      if ( v13 )
      {
        *a2 = v8;
        result = (unsigned int)(result - 1);
        *a3 = result;
        return result;
      }
      --v8;
    }
  }
  return result;
}
