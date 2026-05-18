/*
 * XREFs of sub_1800C5F38 @ 0x1800C5F38
 * Callers:
 *     sub_1800C51D0 @ 0x1800C51D0 (sub_1800C51D0.c)
 *     sub_1800C52F0 @ 0x1800C52F0 (sub_1800C52F0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     memset @ 0x18000C088 (memset.c)
 *     sub_18000FFE4 @ 0x18000FFE4 (sub_18000FFE4.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011B04 @ 0x180011B04 (sub_180011B04.c)
 *     sub_1800BB198 @ 0x1800BB198 (sub_1800BB198.c)
 *     sub_1800C2568 @ 0x1800C2568 (sub_1800C2568.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800C5F38(__int64 a1, __int64 a2, const void *a3, unsigned int a4)
{
  size_t v4; // r15
  ULONG_PTR v8; // rbx
  __int64 result; // rax
  __int64 v10; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v11; // [rsp+48h] [rbp-B8h]
  __int128 v12; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v13; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v14; // [rsp+68h] [rbp-98h]
  EXCEPTION_RECORD pExceptionRecord; // [rsp+70h] [rbp-90h] BYREF
  void *retaddr; // [rsp+158h] [rbp+58h]

  v4 = a4;
  v12 = 0LL;
  v8 = (*(int (__fastcall **)(_QWORD, __int64, _QWORD, __int64, _DWORD, __int128 *))(**(_QWORD **)(a1 + 144) + 112LL))(
         *(_QWORD *)(a1 + 144),
         a2,
         0LL,
         4LL,
         0,
         &v12);
  sub_180011B04(a1 + 72, &v10);
  sub_1800C2568(&v13, &v10);
  if ( v11 )
    sub_18001050C(v11);
  sub_1800BB198(v13, v8);
  if ( (v8 & 0x80000000) != 0LL )
  {
    memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    pExceptionRecord.ExceptionCode = -532265403;
    pExceptionRecord.ExceptionAddress = retaddr;
    pExceptionRecord.NumberParameters = 1;
    pExceptionRecord.ExceptionInformation[0] = v8;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  sub_18000FFE4((void *)v12, v4, a3, v4);
  result = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 144) + 120LL))(
             *(_QWORD *)(a1 + 144),
             a2,
             0LL);
  if ( v14 )
    return sub_18001050C(v14);
  return result;
}
