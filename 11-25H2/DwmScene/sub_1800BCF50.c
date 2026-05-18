/*
 * XREFs of sub_1800BCF50 @ 0x1800BCF50
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     memset @ 0x18000C088 (memset.c)
 *     sub_18000E854 @ 0x18000E854 (sub_18000E854.c)
 *     sub_1800114D0 @ 0x1800114D0 (sub_1800114D0.c)
 *     sub_1800BC16C @ 0x1800BC16C (sub_1800BC16C.c)
 *     sub_1800BCE20 @ 0x1800BCE20 (sub_1800BCE20.c)
 *     sub_1800BD5D4 @ 0x1800BD5D4 (sub_1800BD5D4.c)
 *     sub_1800BD6BC @ 0x1800BD6BC (sub_1800BD6BC.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800BCF50(__int64 *a1, __int64 *a2)
{
  _QWORD *v4; // r15
  int v5; // eax
  ULONG_PTR v6; // rdi
  __int64 v7; // rsi
  __int64 (__fastcall *v8)(__int64, _QWORD, int *, __int64 *); // rdi
  int v9; // eax
  ULONG_PTR v10; // rbx
  __int64 v12[2]; // [rsp+30h] [rbp-D0h] BYREF
  EXCEPTION_RECORD pExceptionRecord; // [rsp+40h] [rbp-C0h] BYREF
  int v14; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v15; // [rsp+E4h] [rbp-1Ch]
  int v16; // [rsp+ECh] [rbp-14h]
  int v17; // [rsp+F0h] [rbp-10h]
  int v18; // [rsp+F4h] [rbp-Ch]
  int v19; // [rsp+F8h] [rbp-8h]
  void *retaddr; // [rsp+138h] [rbp+38h]

  v12[1] = (__int64)a2;
  v12[0] = *a2;
  sub_1800114D0(v12);
  sub_1800BCE20((__int64)a1, v12);
  v4 = a1 + 207;
  v5 = sub_1800BC16C((__int64 (__fastcall ****)(_QWORD, void *, __int64 *))a2, a1 + 207);
  v6 = v5;
  if ( v5 < 0 )
  {
    memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    pExceptionRecord.ExceptionCode = -532265403;
    pExceptionRecord.ExceptionAddress = retaddr;
    pExceptionRecord.NumberParameters = 1;
    pExceptionRecord.ExceptionInformation[0] = v6;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  sub_1800BD5D4(*v4, "BackBufferSurface");
  sub_18000E854(a1 + 209);
  D2D1CreateFactory(D2D1_FACTORY_TYPE_SINGLE_THREADED, &riid, 0LL, (void **)a1 + 209);
  v12[0] = (unsigned int)sub_1800BD6BC(a1) | 0x100000000LL;
  v14 = 0;
  v15 = v12[0];
  v16 = 0;
  v17 = 0;
  v18 = 2;
  v19 = 0;
  v7 = a1[209];
  v8 = *(__int64 (__fastcall **)(__int64, _QWORD, int *, __int64 *))(*(_QWORD *)v7 + 120LL);
  sub_18000E854(a1 + 208);
  v9 = v8(v7, *v4, &v14, a1 + 208);
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
  return sub_18000E854(a2);
}
