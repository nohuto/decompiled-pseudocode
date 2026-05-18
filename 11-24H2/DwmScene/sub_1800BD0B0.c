/*
 * XREFs of sub_1800BD0B0 @ 0x1800BD0B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     memset @ 0x18000C4E8 (memset.c)
 *     sub_18000E954 @ 0x18000E954 (sub_18000E954.c)
 *     sub_1800115D0 @ 0x1800115D0 (sub_1800115D0.c)
 *     sub_1800BC2CC @ 0x1800BC2CC (sub_1800BC2CC.c)
 *     sub_1800BCF80 @ 0x1800BCF80 (sub_1800BCF80.c)
 *     sub_1800BD734 @ 0x1800BD734 (sub_1800BD734.c)
 *     sub_1800BD81C @ 0x1800BD81C (sub_1800BD81C.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800BD0B0(__int64 *a1, __int64 *a2)
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
  sub_1800115D0(v12);
  sub_1800BCF80((__int64)a1, v12);
  v4 = a1 + 207;
  v5 = sub_1800BC2CC((__int64 (__fastcall ****)(_QWORD, void *, __int64 *))a2, a1 + 207);
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
  sub_1800BD734(*v4, "BackBufferSurface");
  sub_18000E954(a1 + 209);
  D2D1CreateFactory(D2D1_FACTORY_TYPE_SINGLE_THREADED, &riid, 0LL, (void **)a1 + 209);
  v12[0] = (unsigned int)sub_1800BD81C(a1) | 0x100000000LL;
  v14 = 0;
  v15 = v12[0];
  v16 = 0;
  v17 = 0;
  v18 = 2;
  v19 = 0;
  v7 = a1[209];
  v8 = *(__int64 (__fastcall **)(__int64, _QWORD, int *, __int64 *))(*(_QWORD *)v7 + 120LL);
  sub_18000E954(a1 + 208);
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
  return sub_18000E954(a2);
}
