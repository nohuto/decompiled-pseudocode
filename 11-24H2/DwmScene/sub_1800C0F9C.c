/*
 * XREFs of sub_1800C0F9C @ 0x1800C0F9C
 * Callers:
 *     sub_1800C0598 @ 0x1800C0598 (sub_1800C0598.c)
 *     sub_1800C13C0 @ 0x1800C13C0 (sub_1800C13C0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     memset @ 0x18000C4E8 (memset.c)
 *     sub_18000E954 @ 0x18000E954 (sub_18000E954.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011524 @ 0x180011524 (sub_180011524.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     sub_180011C04 @ 0x180011C04 (sub_180011C04.c)
 *     sub_1800138F8 @ 0x1800138F8 (sub_1800138F8.c)
 *     sub_180027BEC @ 0x180027BEC (sub_180027BEC.c)
 *     sub_1800B9B64 @ 0x1800B9B64 (sub_1800B9B64.c)
 *     sub_1800BB2F8 @ 0x1800BB2F8 (sub_1800BB2F8.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=4
__int64 **__fastcall sub_1800C0F9C(__int64 a1, __int64 **a2, __int64 a3, __int16 a4, int a5)
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
    sub_180011C04(a1 + 72, &v22);
    v12 = (__int64)v22;
    v28 = (__int64)v22;
    v13 = v23;
    v29 = v23;
    sub_1800B9B64((__int64)v22, &v22);
    v14 = (__int64)v22;
    v15 = (__int64 (__fastcall *)(__int64, __int64, unsigned int *, __int64 **))(*v22)[7];
    sub_18000E954((__int64 *)&v21);
    v16 = v15(v14, a3, &v24, &v21);
    v17 = v16;
    sub_1800BB2F8(v12, v16);
    if ( (v17 & 0x80000000) != 0LL )
    {
      memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
      pExceptionRecord.ExceptionCode = -532265403;
      pExceptionRecord.ExceptionAddress = retaddr;
      pExceptionRecord.NumberParameters = 1;
      pExceptionRecord.ExceptionInformation[0] = v17;
      RaiseFailFastException(&pExceptionRecord, 0LL, 0);
    }
    v18 = sub_180027BEC(a1, (__int64)v35);
    v19 = (const char *)sub_1800138F8(v18);
    sub_180011524(v21, v19);
    sub_180011B5C((__int64)v35);
    sub_18000E954((__int64 *)&v22);
    if ( v13 )
      sub_18001060C(v13);
    *a2 = 0LL;
    if ( a2 != &v21 )
    {
      *a2 = v21;
      v21 = 0LL;
    }
    sub_18000E954((__int64 *)&v21);
  }
  else
  {
    *a2 = 0LL;
  }
  return a2;
}
