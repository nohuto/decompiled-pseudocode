/*
 * XREFs of sub_1800B8E8C @ 0x1800B8E8C
 * Callers:
 *     sub_1800B9CA0 @ 0x1800B9CA0 (sub_1800B9CA0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     memset @ 0x18000C088 (memset.c)
 *     sub_18000E854 @ 0x18000E854 (sub_18000E854.c)
 *     sub_1800B9A04 @ 0x1800B9A04 (sub_1800B9A04.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall sub_1800B8E8C(__int64 a1)
{
  _QWORD *v1; // rax
  ULONG_PTR v2; // rbx
  int v4; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v5; // [rsp+28h] [rbp-C0h] BYREF
  EXCEPTION_RECORD pExceptionRecord; // [rsp+30h] [rbp-B8h] BYREF
  void *retaddr; // [rsp+E8h] [rbp+0h]

  v4 = 0;
  v1 = (_QWORD *)sub_1800B9A04(a1, &v5);
  v2 = (*(int (__fastcall **)(_QWORD, __int64, int *))(*(_QWORD *)*v1 + 232LL))(*v1, 87LL, &v4);
  sub_18000E854(&v5);
  if ( (v2 & 0x80000000) != 0LL )
  {
    memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    pExceptionRecord.ExceptionCode = -532265403;
    pExceptionRecord.ExceptionAddress = retaddr;
    pExceptionRecord.NumberParameters = 1;
    pExceptionRecord.ExceptionInformation[0] = v2;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  return (v4 & 0x240000) == 2359296;
}
