/*
 * XREFs of sub_1800B9420 @ 0x1800B9420
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     memset @ 0x18000C4E8 (memset.c)
 *     memcpy @ 0x18000CE31 (memcpy.c)
 *     sub_18000E954 @ 0x18000E954 (sub_18000E954.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180017024 @ 0x180017024 (sub_180017024.c)
 *     sub_18002516C @ 0x18002516C (sub_18002516C.c)
 *     sub_18002563C @ 0x18002563C (sub_18002563C.c)
 *     sub_180025A2C @ 0x180025A2C (sub_180025A2C.c)
 *     sub_180029CE0 @ 0x180029CE0 (sub_180029CE0.c)
 *     sub_180052358 @ 0x180052358 (sub_180052358.c)
 *     sub_1800B9D44 @ 0x1800B9D44 (sub_1800B9D44.c)
 *     sub_1800C22A4 @ 0x1800C22A4 (sub_1800C22A4.c)
 *     sub_1800C3044 @ 0x1800C3044 (sub_1800C3044.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=9
char __fastcall sub_1800B9420(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v7; // rax
  __int64 *v8; // rax
  __int64 *v9; // rax
  __int64 v10; // rbx
  void (__fastcall *v11)(__int64, _QWORD, __int64); // rsi
  __int64 v12; // rdi
  __int64 v13; // r14
  _QWORD *v14; // rax
  int (__fastcall *v15)(__int64, _QWORD, _QWORD, __int64, _DWORD, void **); // rdi
  _QWORD *v16; // rax
  ULONG_PTR v17; // rdi
  __int64 v18; // rcx
  float v19; // xmm1_4
  __int64 v20; // rdi
  unsigned __int64 v21; // rax
  float v22; // xmm1_4
  unsigned __int64 v23; // rsi
  size_t v24; // rdi
  __int64 v25; // r12
  char *v26; // r14
  char *i; // r15
  void (__fastcall *v28)(__int64, _QWORD, _QWORD); // rdi
  _QWORD *v29; // rax
  __int64 v31; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v32; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v33; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v34; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v35; // [rsp+68h] [rbp-98h] BYREF
  __int64 v36; // [rsp+70h] [rbp-90h]
  __int64 v37; // [rsp+78h] [rbp-88h] BYREF
  __int64 v38; // [rsp+80h] [rbp-80h]
  void *Src[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v40; // [rsp+98h] [rbp-68h] BYREF
  __int64 v41; // [rsp+A0h] [rbp-60h]
  __int64 v42; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v43; // [rsp+B0h] [rbp-50h]
  __int64 v44; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v45; // [rsp+C0h] [rbp-40h]
  _BYTE v46[24]; // [rsp+C8h] [rbp-38h] BYREF
  EXCEPTION_RECORD pExceptionRecord; // [rsp+E0h] [rbp-20h] BYREF
  void *retaddr; // [rsp+1D8h] [rbp+D8h]

  (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a3 + 320LL))(a3, v46);
  v7 = unknown_libname_81(&v37, (_QWORD *)(a1 + 272));
  sub_180017024(&v44, v7);
  sub_1800C3044(v44, &v34);
  sub_18002563C(a4, &v37);
  sub_1800B9D44(a4, &v42);
  v8 = sub_180052358(v37, &v35, *(_DWORD *)(a1 + 244));
  sub_180017024(&v40, v8);
  v9 = sub_180052358(v42, &v33, *(_DWORD *)(a1 + 244));
  sub_180017024(&v35, v9);
  v10 = v34;
  v11 = *(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v34 + 376LL);
  v12 = *(_QWORD *)sub_1800C22A4(v40, &v31);
  v13 = v35;
  v33 = v35;
  v14 = (_QWORD *)sub_1800C22A4(v35, &v32);
  v11(v10, *v14, v12);
  sub_18000E954(&v32);
  sub_18000E954(&v31);
  *(_OWORD *)Src = 0LL;
  v15 = *(int (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _DWORD, void **))(*(_QWORD *)v10 + 112LL);
  v16 = (_QWORD *)sub_1800C22A4(v13, &v31);
  v17 = v15(v10, *v16, 0LL, 1LL, 0, Src);
  sub_18000E954(&v31);
  if ( (v17 & 0x80000000) != 0LL )
  {
    memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    pExceptionRecord.ExceptionCode = -532265403;
    pExceptionRecord.ExceptionAddress = retaddr;
    pExceptionRecord.NumberParameters = 1;
    pExceptionRecord.ExceptionInformation[0] = v17;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  sub_18002516C(a4, &v32);
  v18 = 0LL;
  v19 = *(float *)&v32;
  if ( *(float *)&v32 >= 9.223372e18 )
  {
    v19 = *(float *)&v32 - 9.223372e18;
    if ( (float)(*(float *)&v32 - 9.223372e18) < 9.223372e18 )
      v18 = 0x8000000000000000uLL;
  }
  v20 = v18 + (unsigned int)(int)v19;
  v21 = 0LL;
  v22 = *((float *)&v32 + 1);
  if ( *((float *)&v32 + 1) >= 9.223372e18 )
  {
    v22 = *((float *)&v32 + 1) - 9.223372e18;
    if ( (float)(*((float *)&v32 + 1) - 9.223372e18) < 9.223372e18 )
      v21 = 0x8000000000000000uLL;
  }
  v23 = v21 + (unsigned int)(int)v22;
  v24 = 16 * v20;
  v25 = LODWORD(Src[1]);
  v26 = (char *)Src[0];
  for ( i = (char *)sub_180025A2C(v18, a2, a4, v23 * v24); v23; --v23 )
  {
    memcpy(i, v26, v24);
    v26 += v25;
    i += v24;
  }
  *(_DWORD *)(a2 + 20) = 1;
  v28 = *(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v10 + 120LL);
  v29 = (_QWORD *)sub_1800C22A4(v33, &v31);
  v28(v10, *v29, 0LL);
  sub_18000E954(&v31);
  if ( v36 )
    sub_18001060C(v36);
  if ( v41 )
    sub_18001060C(v41);
  if ( v43 )
    sub_18001060C(v43);
  if ( v38 )
    sub_18001060C(v38);
  sub_18000E954(&v34);
  if ( v45 )
    sub_18001060C(v45);
  sub_180029CE0((__int64)v46);
  return 1;
}
