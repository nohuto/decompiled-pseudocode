/*
 * XREFs of sub_1800BE3F0 @ 0x1800BE3F0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     memset @ 0x18000C4E8 (memset.c)
 *     sub_18000E954 @ 0x18000E954 (sub_18000E954.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180024A88 @ 0x180024A88 (sub_180024A88.c)
 *     sub_1800B99E4 @ 0x1800B99E4 (sub_1800B99E4.c)
 *     sub_1800BB2F8 @ 0x1800BB2F8 (sub_1800BB2F8.c)
 *     sub_1800BD7C0 @ 0x1800BD7C0 (sub_1800BD7C0.c)
 *     sub_1800BD81C @ 0x1800BD81C (sub_1800BD81C.c)
 *     sub_1800BD964 @ 0x1800BD964 (sub_1800BD964.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=5
__int64 *__fastcall sub_1800BE3F0(__int64 *a1, __int64 *a2)
{
  __int64 v4; // r12
  _QWORD *v5; // rsi
  __int64 v6; // r13
  __int64 (__fastcall *v7)(__int64, __int64, _QWORD, _QWORD, int, _DWORD); // rsi
  int v8; // edi
  unsigned int v9; // ebx
  unsigned int v10; // eax
  int v11; // eax
  ULONG_PTR v12; // rbx
  __int64 v13; // rdi
  __int64 i; // rbx
  __int64 v15; // rdi
  __int64 (__fastcall *v16)(__int64, _QWORD, void *, __int64 *); // rbx
  int v17; // eax
  ULONG_PTR v18; // rbx
  __int64 v19; // rbx
  void (__fastcall *v20)(__int64, const IID *, __int64 *); // rdi
  void (__fastcall *v21)(__int64 *, __int64, _QWORD, _DWORD *, __int64 *); // rbx
  _QWORD *v22; // rax
  __int64 v24; // [rsp+40h] [rbp-C0h] BYREF
  __int64 *v25; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v26[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v27; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v28; // [rsp+68h] [rbp-98h]
  __int64 v29; // [rsp+70h] [rbp-90h] BYREF
  __int64 v30; // [rsp+78h] [rbp-88h]
  EXCEPTION_RECORD pExceptionRecord; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v32[4]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v33; // [rsp+130h] [rbp+30h]
  int v34; // [rsp+138h] [rbp+38h]
  int v35; // [rsp+13Ch] [rbp+3Ch]
  int v36; // [rsp+140h] [rbp+40h]
  int v37; // [rsp+144h] [rbp+44h]
  __int64 v38; // [rsp+148h] [rbp+48h]
  void *retaddr; // [rsp+198h] [rbp+98h]

  v25 = a2;
  sub_1800BD964((__int64)a1, &v29);
  v4 = v29;
  if ( !v29 )
    goto LABEL_25;
  v5 = a1 + 57;
  v6 = a1[57];
  if ( v6 )
  {
    v7 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, int, _DWORD))(*(_QWORD *)v6 + 104LL);
    v8 = sub_1800BD81C((__int64)a1);
    v9 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 88))(a1);
    v10 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 80))(a1);
    v11 = v7(v6, 2LL, v10, v9, v8, 0);
    v12 = v11;
    sub_1800BB2F8(v4, v11);
    if ( (v12 & 0x80000000) != 0LL )
    {
      memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
      pExceptionRecord.ExceptionCode = -532265403;
      pExceptionRecord.ExceptionAddress = retaddr;
      pExceptionRecord.NumberParameters = 1;
      pExceptionRecord.ExceptionInformation[0] = v12;
      RaiseFailFastException(&pExceptionRecord, 0LL, 0);
    }
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4) )
    {
      v13 = a1[17];
      for ( i = a1[16]; i != v13; i += 64LL )
        sub_180024A88(i);
    }
    v5 = a1 + 57;
  }
  else
  {
    v37 = 0;
    v38 = 3LL;
    v34 = 32;
    v35 = 2;
    v32[2] = sub_1800BD81C((__int64)a1);
    v32[1] = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 88))(a1);
    v32[0] = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 80))(a1);
    v33 = 1LL;
    v36 = 0;
    v32[3] = 0;
    v26[0] = 0LL;
    sub_1800BD964((__int64)a1, &v27);
    if ( v27 )
    {
      sub_1800B99E4(v27, &v25);
      if ( v28 )
        sub_18001060C(v28);
      v19 = (__int64)v25;
    }
    else
    {
      if ( v28 )
        sub_18001060C(v28);
      v25 = 0LL;
      v19 = 0LL;
    }
    v20 = *(void (__fastcall **)(__int64, const IID *, __int64 *))(*(_QWORD *)v19 + 48LL);
    sub_18000E954(v26);
    v20(v19, &stru_18018B450, v26);
    sub_18000E954((__int64 *)&v25);
    v21 = *(void (__fastcall **)(__int64 *, __int64, _QWORD, _DWORD *, __int64 *))(*a1 + 408);
    sub_18000E954(a1 + 57);
    v22 = sub_1800BD7C0((__int64)a1, &v25);
    v21(a1, v26[0], *v22, v32, a1 + 57);
    sub_18000E954((__int64 *)&v25);
    sub_18000E954(v26);
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4) )
  {
    (*(void (__fastcall **)(__int64 *))(*a1 + 416))(a1);
    v24 = 0LL;
    v15 = *v5;
    v16 = *(__int64 (__fastcall **)(__int64, _QWORD, void *, __int64 *))(*(_QWORD *)*v5 + 72LL);
    sub_18000E954(&v24);
    v17 = v16(v15, 0LL, &unk_18018B6C0, &v24);
    v18 = v17;
    if ( v17 < 0 )
    {
      memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
      pExceptionRecord.ExceptionCode = -532265403;
      pExceptionRecord.ExceptionAddress = retaddr;
      pExceptionRecord.NumberParameters = 1;
      pExceptionRecord.ExceptionInformation[0] = v18;
      RaiseFailFastException(&pExceptionRecord, 0LL, 0);
    }
    *a2 = 0LL;
    if ( a2 != &v24 )
    {
      *a2 = v24;
      v24 = 0LL;
    }
    sub_18000E954(&v24);
    if ( v30 )
      sub_18001060C(v30);
  }
  else
  {
LABEL_25:
    if ( v30 )
      sub_18001060C(v30);
    *a2 = 0LL;
  }
  return a2;
}
