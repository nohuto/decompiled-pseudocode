/*
 * XREFs of sub_180011290 @ 0x180011290
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     memset @ 0x18000C4E8 (memset.c)
 *     sub_18000E954 @ 0x18000E954 (sub_18000E954.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180010790 @ 0x180010790 (sub_180010790.c)
 *     sub_1800108FC @ 0x1800108FC (sub_1800108FC.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011110 @ 0x180011110 (sub_180011110.c)
 *     sub_180011524 @ 0x180011524 (sub_180011524.c)
 *     sub_1800115D0 @ 0x1800115D0 (sub_1800115D0.c)
 *     sub_180026870 @ 0x180026870 (sub_180026870.c)
 *     sub_180027D84 @ 0x180027D84 (sub_180027D84.c)
 *     sub_18002AE30 @ 0x18002AE30 (sub_18002AE30.c)
 *     sub_1800B9B64 @ 0x1800B9B64 (sub_1800B9B64.c)
 *     sub_1800BD964 @ 0x1800BD964 (sub_1800BD964.c)
 *     sub_1800BEE5C @ 0x1800BEE5C (sub_1800BEE5C.c)
 *     __RTDynamicCast @ 0x1800D4FA0 (__RTDynamicCast.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_180011290(__int64 a1, __int64 *a2)
{
  __int64 v4; // r14
  __int64 v5; // rbx
  _QWORD *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdi
  int (__fastcall *v9)(__int64, __int64, _QWORD, __int64 *); // rbx
  ULONG_PTR v10; // rbx
  int v11; // ebx
  __int64 v13; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v14; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v15; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v16; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v17; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v18; // [rsp+58h] [rbp-A8h]
  __int64 *v19; // [rsp+60h] [rbp-A0h]
  __int128 v20; // [rsp+70h] [rbp-90h] BYREF
  __int64 v21[4]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v22; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v23; // [rsp+A8h] [rbp-58h]
  EXCEPTION_RECORD pExceptionRecord; // [rsp+B0h] [rbp-50h] BYREF
  _OWORD v25[2]; // [rsp+150h] [rbp+50h] BYREF
  __int64 v26; // [rsp+170h] [rbp+70h]
  int v27; // [rsp+178h] [rbp+78h]
  void *retaddr; // [rsp+1B8h] [rbp+B8h]

  v19 = a2;
  sub_1800BD964(a1, &v22);
  v4 = v22;
  if ( v22 )
  {
    v20 = 0LL;
    if ( *a2 )
    {
      sub_180010790(v22, &v17);
      v5 = v17;
      v6 = std::string::string(v21, "Output");
      sub_180027D84(v5, v6);
      memset(v25, 0, sizeof(v25));
      v26 = 0LL;
      v27 = 0;
      (*(void (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)*a2 + 80LL))(*a2, v25);
      v13 = 0LL;
      v7 = sub_1800B9B64(v4, &v14);
      v8 = *(_QWORD *)v7;
      v9 = *(int (__fastcall **)(__int64, __int64, _QWORD, __int64 *))(**(_QWORD **)v7 + 72LL);
      sub_18000E954(&v13);
      v10 = v9(v8, *a2, 0LL, &v13);
      sub_18000E954(&v14);
      if ( (v10 & 0x80000000) != 0LL )
      {
        memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
        pExceptionRecord.ExceptionCode = -532265403;
        pExceptionRecord.ExceptionAddress = retaddr;
        pExceptionRecord.NumberParameters = 1;
        pExceptionRecord.ExceptionInformation[0] = v10;
        RaiseFailFastException(&pExceptionRecord, 0LL, 0);
      }
      sub_180011524(*a2, "RenderOutput ColorBuffer");
      sub_180011524(v13, "RenderOutput ColorBuffer");
      v11 = _RTDynamicCast(
              v17,
              0LL,
              &Spectre::Engine::DeviceFrameBuffer `RTTI Type Descriptor',
              &Spectre::Engine::D3D11::RenderTargetD3D11 `RTTI Type Descriptor',
              0);
      v16 = 0LL;
      v15 = *a2;
      sub_1800115D0(&v15);
      v14 = v13;
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
      sub_1800BEE5C(v11, (unsigned int)&v14, (unsigned int)&v15, (unsigned int)&v16, v25[0], DWORD1(v25[0]));
      sub_1800108FC(*(_QWORD *)(v4 + 3648), v21);
      sub_180011110(&v20, v21);
      if ( v21[1] )
        sub_18001060C(v21[1]);
      sub_180026870(v20, &v17);
      sub_18000E954(&v13);
      if ( v18 )
        sub_18001060C(v18);
    }
    *(_OWORD *)v21 = v20;
    sub_18002AE30(a1, v21);
  }
  if ( v23 )
    sub_18001060C(v23);
  return sub_18000E954(a2);
}
