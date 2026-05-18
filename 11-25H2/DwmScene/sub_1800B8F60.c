/*
 * XREFs of sub_1800B8F60 @ 0x1800B8F60
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     memset @ 0x18000C088 (memset.c)
 *     memcpy @ 0x18000CD49 (memcpy.c)
 *     sub_18000E854 @ 0x18000E854 (sub_18000E854.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180010F44 @ 0x180010F44 (sub_180010F44.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_180016F24 @ 0x180016F24 (sub_180016F24.c)
 *     sub_18002500C @ 0x18002500C (sub_18002500C.c)
 *     sub_1800254DC @ 0x1800254DC (sub_1800254DC.c)
 *     sub_1800258CC @ 0x1800258CC (sub_1800258CC.c)
 *     sub_1800284DC @ 0x1800284DC (sub_1800284DC.c)
 *     sub_180029B80 @ 0x180029B80 (sub_180029B80.c)
 *     sub_1800521F8 @ 0x1800521F8 (sub_1800521F8.c)
 *     sub_1800B9BE4 @ 0x1800B9BE4 (sub_1800B9BE4.c)
 *     sub_1800C2144 @ 0x1800C2144 (sub_1800C2144.c)
 *     sub_1800C2EE4 @ 0x1800C2EE4 (sub_1800C2EE4.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=12
char __fastcall sub_1800B8F60(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v6; // rax
  __int64 *v7; // rax
  __int64 *v8; // rax
  __int64 v9; // rbx
  void (__fastcall *v10)(__int64, _QWORD, __int64); // rsi
  __int64 v11; // rdi
  _QWORD *v12; // rax
  __int64 v13; // rdi
  int v14; // eax
  ULONG_PTR v15; // rsi
  __int64 v16; // r8
  __int64 v17; // rcx
  float v18; // xmm1_4
  __int64 v19; // r9
  unsigned __int64 v20; // rax
  float v21; // xmm1_4
  unsigned __int64 v22; // rsi
  size_t v23; // r12
  __int64 v24; // r13
  char *v25; // r14
  char *i; // r15
  __int64 v28; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v29[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v30; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v31; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v32; // [rsp+68h] [rbp-98h]
  __int64 v33; // [rsp+70h] [rbp-90h] BYREF
  __int64 v34; // [rsp+78h] [rbp-88h]
  __int64 v35; // [rsp+80h] [rbp-80h] BYREF
  __int64 v36; // [rsp+88h] [rbp-78h]
  void *Src[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v38; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v39; // [rsp+A8h] [rbp-58h]
  __int64 v40; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v41; // [rsp+B8h] [rbp-48h]
  __int64 v42; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v43; // [rsp+C8h] [rbp-38h]
  _BYTE v44[16]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v45[16]; // [rsp+E0h] [rbp-20h] BYREF
  EXCEPTION_RECORD pExceptionRecord; // [rsp+F0h] [rbp-10h] BYREF
  void *retaddr; // [rsp+1D8h] [rbp+D8h]

  sub_1800284DC(a1 + 24, (__int64)v45);
  (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a3 + 320LL))(a3, v44);
  v6 = unknown_libname_81(&v35, (_QWORD *)(a1 + 272));
  sub_180016F24(&v42, v6);
  sub_1800C2EE4(v42, &v30);
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a3 + 32LL))(a3, &v31);
  sub_1800254DC(v31, &v35);
  v7 = sub_1800521F8(v35, &v33, *(_DWORD *)(a1 + 244));
  sub_180016F24(&v40, v7);
  sub_1800B9BE4(v31, &v33);
  v8 = sub_1800521F8(v33, v29, *(_DWORD *)(a1 + 244));
  sub_180016F24(&v38, v8);
  v9 = v30;
  v10 = *(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v30 + 376LL);
  v11 = *(_QWORD *)sub_1800C2144(v40, &v28);
  v12 = (_QWORD *)sub_1800C2144(v38, v29);
  v10(v9, *v12, v11);
  sub_18000E854(v29);
  sub_18000E854(&v28);
  sub_1800C2144(v38, v29);
  *(_OWORD *)Src = 0LL;
  v13 = v29[0];
  v14 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, _DWORD, void **))(*(_QWORD *)v9 + 112LL))(
          v9,
          v29[0],
          0LL,
          1LL,
          0,
          Src);
  v15 = v14;
  if ( v14 < 0 )
  {
    memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    pExceptionRecord.ExceptionCode = -532265403;
    pExceptionRecord.ExceptionAddress = retaddr;
    pExceptionRecord.NumberParameters = 1;
    pExceptionRecord.ExceptionInformation[0] = v15;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  sub_18002500C(v31, &v28);
  v17 = 0LL;
  v18 = *(float *)&v28;
  if ( *(float *)&v28 >= 9.223372e18 )
  {
    v18 = *(float *)&v28 - 9.223372e18;
    if ( (float)(*(float *)&v28 - 9.223372e18) < 9.223372e18 )
      v17 = 0x8000000000000000uLL;
  }
  v19 = v17 + (unsigned int)(int)v18;
  v20 = 0LL;
  v21 = *((float *)&v28 + 1);
  if ( *((float *)&v28 + 1) >= 9.223372e18 )
  {
    v21 = *((float *)&v28 + 1) - 9.223372e18;
    if ( (float)(*((float *)&v28 + 1) - 9.223372e18) < 9.223372e18 )
      v20 = 0x8000000000000000uLL;
  }
  v22 = v20 + (unsigned int)(int)v21;
  v23 = 4 * v19;
  v24 = LODWORD(Src[1]);
  v25 = (char *)Src[0];
  for ( i = (char *)sub_1800258CC(v17, a2, v16, v22 * 4 * v19); v22; --v22 )
  {
    memcpy(i, v25, v23);
    v25 += v24;
    i += v23;
  }
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v9 + 120LL))(v9, v13, 0LL);
  sub_18000E854(v29);
  if ( v39 )
    sub_18001050C(v39);
  if ( v34 )
    sub_18001050C(v34);
  if ( v41 )
    sub_18001050C(v41);
  if ( v36 )
    sub_18001050C(v36);
  if ( v32 )
    sub_18001050C(v32);
  sub_18000E854(&v30);
  if ( v43 )
    sub_18001050C(v43);
  sub_180029B80((__int64)v44);
  sub_180010F44((__int64)v45);
  return 1;
}
