/*
 * XREFs of sub_1800C0E3C @ 0x1800C0E3C
 * Callers:
 *     sub_1800C0438 @ 0x1800C0438 (sub_1800C0438.c)
 *     sub_1800C1260 @ 0x1800C1260 (sub_1800C1260.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     memset @ 0x18000C088 (memset.c)
 *     sub_18000E854 @ 0x18000E854 (sub_18000E854.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011424 @ 0x180011424 (sub_180011424.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     sub_180011B04 @ 0x180011B04 (sub_180011B04.c)
 *     sub_1800137F8 @ 0x1800137F8 (sub_1800137F8.c)
 *     sub_180027A8C @ 0x180027A8C (sub_180027A8C.c)
 *     sub_1800B9A04 @ 0x1800B9A04 (sub_1800B9A04.c)
 *     sub_1800BB198 @ 0x1800BB198 (sub_1800BB198.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=4
__int64 **__fastcall sub_1800C0E3C(__int64 a1, __int64 **a2, __int64 a3, __int16 a4, int a5)
{
  unsigned int v9; // eax
  unsigned int v10; // eax
  int v11; // ecx
  __int64 v12; // rsi
  __int64 v13; // r15
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(__int64, __int64, unsigned int *, __int64 **); // rdi
  int v16; // eax
  ULONG_PTR v17; // rbx
  __int64 v18; // rax
  const char *v19; // rax
  __int64 *v21; // [rsp+30h] [rbp-D0h] BYREF
  __int64 **v22; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v23; // [rsp+40h] [rbp-C0h]
  unsigned int v24; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v25; // [rsp+4Ch] [rbp-B4h]
  int v26; // [rsp+54h] [rbp-ACh]
  __int64 v27; // [rsp+58h] [rbp-A8h]
  __int64 v28; // [rsp+68h] [rbp-98h]
  __int64 v29; // [rsp+70h] [rbp-90h]
  EXCEPTION_RECORD pExceptionRecord; // [rsp+80h] [rbp-80h] BYREF
  __int128 v31; // [rsp+120h] [rbp+20h] BYREF
  __int128 v32; // [rsp+130h] [rbp+30h]
  __int64 v33; // [rsp+140h] [rbp+40h]
  int v34; // [rsp+148h] [rbp+48h]
  _BYTE v35[32]; // [rsp+150h] [rbp+50h] BYREF
  void *retaddr; // [rsp+1B8h] [rbp+B8h]

  v22 = a2;
  if ( (a4 & 1) != 0 )
  {
    v27 = 0LL;
    v31 = 0LL;
    v32 = 0LL;
    v33 = 0LL;
    v34 = 0;
    (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)a3 + 80LL))(a3, &v31);
    v9 = v32;
    if ( (_DWORD)v32 == 44 )
    {
      v9 = (a4 & 0x400 | 0xB800u) >> 10;
    }
    else if ( (_DWORD)v32 == 39 )
    {
      v9 = 41;
    }
    v24 = v9;
    v10 = 4;
    if ( DWORD1(v32) > 1 )
      v10 = 6;
    v11 = -1;
    if ( (a4 & 0x10) != 0 )
      v25 = 9LL;
    else
      v25 = v10;
    if ( a5 )
      v11 = a5;
    v26 = v11;
    v21 = 0LL;
    sub_180011B04(a1 + 72, &v22);
    v12 = (__int64)v22;
    v28 = (__int64)v22;
    v13 = v23;
    v29 = v23;
    sub_1800B9A04((__int64)v22, &v22);
    v14 = (__int64)v22;
    v15 = (__int64 (__fastcall *)(__int64, __int64, unsigned int *, __int64 **))(*v22)[7];
    sub_18000E854((__int64 *)&v21);
    v16 = v15(v14, a3, &v24, &v21);
    v17 = v16;
    sub_1800BB198(v12, v16);
    if ( (v17 & 0x80000000) != 0LL )
    {
      memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
      pExceptionRecord.ExceptionCode = -532265403;
      pExceptionRecord.ExceptionAddress = retaddr;
      pExceptionRecord.NumberParameters = 1;
      pExceptionRecord.ExceptionInformation[0] = v17;
      RaiseFailFastException(&pExceptionRecord, 0LL, 0);
    }
    v18 = sub_180027A8C(a1, (__int64)v35);
    v19 = (const char *)sub_1800137F8(v18);
    sub_180011424(v21, v19);
    sub_180011A5C((__int64)v35);
    sub_18000E854((__int64 *)&v22);
    if ( v13 )
      sub_18001050C(v13);
    *a2 = 0LL;
    if ( a2 != &v21 )
    {
      *a2 = v21;
      v21 = 0LL;
    }
    sub_18000E854((__int64 *)&v21);
  }
  else
  {
    *a2 = 0LL;
  }
  return a2;
}
