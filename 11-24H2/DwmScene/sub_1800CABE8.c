/*
 * XREFs of sub_1800CABE8 @ 0x1800CABE8
 * Callers:
 *     sub_1800C62B0 @ 0x1800C62B0 (sub_1800C62B0.c)
 *     sub_1800CA9F0 @ 0x1800CA9F0 (sub_1800CA9F0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     _o__invalid_parameter_noinfo @ 0x18000C3BA (_o__invalid_parameter_noinfo.c)
 *     memset @ 0x18000C4E8 (memset.c)
 *     memcpy @ 0x18000CE31 (memcpy.c)
 *     sub_18000E954 @ 0x18000E954 (sub_18000E954.c)
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 *     sub_1800246B0 @ 0x1800246B0 (sub_1800246B0.c)
 *     sub_18004D98C @ 0x18004D98C (sub_18004D98C.c)
 *     sub_1800B9B64 @ 0x1800B9B64 (sub_1800B9B64.c)
 *     sub_1800B9B9C @ 0x1800B9B9C (sub_1800B9B9C.c)
 *     sub_1800BB2F8 @ 0x1800BB2F8 (sub_1800BB2F8.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=6
_QWORD *__fastcall sub_1800CABE8(_QWORD *a1, __int64 *a2, __int64 *a3, unsigned int a4)
{
  size_t v4; // r15
  __int64 v7; // r12
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, _DWORD *, _QWORD, __int64 *); // rdi
  int v10; // eax
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  ULONG_PTR v13; // rbx
  __int64 v14; // rcx
  void *v15; // rdx
  void *v16; // rbx
  _QWORD *v17; // rax
  __int64 v18; // rax
  void *v20; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v21; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v23[2]; // [rsp+58h] [rbp-A8h] BYREF
  void *Src[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 *v25; // [rsp+78h] [rbp-88h]
  EXCEPTION_RECORD pExceptionRecord; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v27[6]; // [rsp+120h] [rbp+20h] BYREF
  void *retaddr; // [rsp+178h] [rbp+78h]

  v4 = a4;
  v23[0] = (__int64)a1;
  v25 = a3;
  v7 = *a2;
  sub_1800B9B64(*a2, &v22);
  v27[5] = 0;
  v27[0] = v4;
  v27[1] = 3;
  v27[3] = 0x20000;
  v27[2] = 0;
  v27[4] = 0;
  v21 = 0LL;
  v8 = v22;
  v9 = *(__int64 (__fastcall **)(__int64, _DWORD *, _QWORD, __int64 *))(*(_QWORD *)v22 + 24LL);
  sub_18000E954(&v21);
  v10 = v9(v8, v27, 0LL, &v21);
  sub_1800BB2F8(v7, v10);
  v11 = sub_1800B9B9C(v7, &v20);
  (*(void (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)*v11 + 376LL))(*v11, v21, *a3);
  sub_18000E954((__int64 *)&v20);
  *(_OWORD *)Src = 0LL;
  v12 = sub_1800B9B9C(v7, &v20);
  v13 = (*(int (__fastcall **)(_QWORD, __int64, _QWORD, __int64, _DWORD, void **))(*(_QWORD *)*v12 + 112LL))(
          *v12,
          v21,
          0LL,
          1LL,
          0,
          Src);
  sub_18000E954((__int64 *)&v20);
  if ( (v13 & 0x80000000) != 0LL )
  {
    memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    pExceptionRecord.ExceptionCode = -532265403;
    pExceptionRecord.ExceptionAddress = retaddr;
    pExceptionRecord.NumberParameters = 1;
    pExceptionRecord.ExceptionInformation[0] = v13;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  sub_18004D98C(&v20, v4);
  v15 = Src[0];
  v16 = v20;
  if ( (_DWORD)v4 )
  {
    if ( v20 )
    {
      if ( Src[0] )
      {
        memcpy(v20, Src[0], v4);
        goto LABEL_9;
      }
      memset(v20, 0, v4);
    }
    *(_DWORD *)o__errno(v14, v15) = 22;
    o__invalid_parameter_noinfo();
  }
LABEL_9:
  v17 = sub_1800B9B9C(v7, v23);
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)*v17 + 120LL))(*v17, v21, 0LL);
  sub_18000E954(v23);
  *a1 = 0LL;
  a1[1] = 0LL;
  if ( v16 )
  {
    v18 = sub_18001B1F8(24LL);
    if ( v18 )
    {
      *(_DWORD *)(v18 + 8) = 1;
      *(_DWORD *)(v18 + 12) = 1;
      *(_QWORD *)v18 = &std::_Ref_count_resource<unsigned char *,std::default_delete<unsigned char [0]>>::`vftable';
      *(_QWORD *)(v18 + 16) = v16;
    }
    *a1 = v16;
    a1[1] = v18;
    v20 = 0LL;
  }
  sub_1800246B0(&v20);
  sub_18000E954(&v21);
  sub_18000E954(&v22);
  sub_18000E954(a3);
  return a1;
}
