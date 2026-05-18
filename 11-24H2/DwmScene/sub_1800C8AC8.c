/*
 * XREFs of sub_1800C8AC8 @ 0x1800C8AC8
 * Callers:
 *     sub_1800BCE50 @ 0x1800BCE50 (sub_1800BCE50.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     memset @ 0x18000C4E8 (memset.c)
 *     sub_18000E954 @ 0x18000E954 (sub_18000E954.c)
 *     sub_180011524 @ 0x180011524 (sub_180011524.c)
 *     sub_1800115D0 @ 0x1800115D0 (sub_1800115D0.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     sub_1800138F8 @ 0x1800138F8 (sub_1800138F8.c)
 *     sub_180068748 @ 0x180068748 (sub_180068748.c)
 *     sub_1800B9B64 @ 0x1800B9B64 (sub_1800B9B64.c)
 *     sub_1800BB2F8 @ 0x1800BB2F8 (sub_1800BB2F8.c)
 *     sub_1800BD870 @ 0x1800BD870 (sub_1800BD870.c)
 *     sub_1800C849C @ 0x1800C849C (sub_1800C849C.c)
 *     __RTDynamicCast @ 0x1800D4FA0 (__RTDynamicCast.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=7
__int64 *__fastcall sub_1800C8AC8(__int64 *a1, __int64 *a2, int a3, int a4, __int64 a5)
{
  int v9; // eax
  _QWORD *v10; // rax
  __int64 v11; // rdi
  int (__fastcall *v12)(__int64, _DWORD *, _QWORD, __int64 **); // rbx
  ULONG_PTR v13; // rbx
  const char *v14; // rax
  _QWORD *v15; // rax
  __int64 v16; // rdi
  int (__fastcall *v17)(__int64, __int64 *, _DWORD *, __int64 **); // rbx
  ULONG_PTR v18; // rbx
  const char *v19; // rax
  _QWORD *v20; // rbx
  __int64 *v22; // [rsp+30h] [rbp-D0h] BYREF
  __int64 *v23; // [rsp+38h] [rbp-C8h] BYREF
  __int64 *v24; // [rsp+40h] [rbp-C0h] BYREF
  __int64 *v25; // [rsp+48h] [rbp-B8h] BYREF
  int v26; // [rsp+50h] [rbp-B0h]
  _DWORD v27[6]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 *v28; // [rsp+70h] [rbp-90h]
  __int64 v29; // [rsp+78h] [rbp-88h]
  EXCEPTION_RECORD pExceptionRecord; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v31[12]; // [rsp+120h] [rbp+20h] BYREF
  void *retaddr; // [rsp+198h] [rbp+98h]

  v28 = a1;
  v29 = a5;
  v26 = 0;
  v9 = sub_1800BD870(1, 0);
  v31[0] = a3;
  v31[1] = a4;
  v31[2] = 1;
  v31[3] = 1;
  v31[4] = v9;
  v31[7] = 0;
  v31[8] = 64;
  v31[9] = 0;
  v31[10] = 0;
  v31[5] = 1;
  v31[6] = 0;
  v22 = 0LL;
  v10 = sub_1800B9B64(*a2, &v25);
  v11 = *v10;
  v12 = *(int (__fastcall **)(__int64, _DWORD *, _QWORD, __int64 **))(*(_QWORD *)*v10 + 40LL);
  sub_18000E954((__int64 *)&v22);
  v13 = v12(v11, v31, 0LL, &v22);
  sub_18000E954((__int64 *)&v25);
  sub_1800BB2F8(*a2, v13);
  if ( (v13 & 0x80000000) != 0LL )
  {
    memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    pExceptionRecord.ExceptionCode = -532265403;
    pExceptionRecord.ExceptionAddress = retaddr;
    pExceptionRecord.NumberParameters = 1;
    pExceptionRecord.ExceptionInformation[0] = v13;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  v14 = (const char *)sub_1800138F8(a5);
  sub_180011524(v22, v14);
  v27[0] = 0;
  v27[1] = 5;
  v27[2] = 0;
  v24 = 0LL;
  v15 = sub_1800B9B64(*a2, &v23);
  v16 = *v15;
  v17 = *(int (__fastcall **)(__int64, __int64 *, _DWORD *, __int64 **))(*(_QWORD *)*v15 + 80LL);
  sub_18000E954((__int64 *)&v24);
  v18 = v17(v16, v22, v27, &v24);
  sub_18000E954((__int64 *)&v23);
  sub_1800BB2F8(*a2, v18);
  if ( (v18 & 0x80000000) != 0LL )
  {
    memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    pExceptionRecord.ExceptionCode = -532265403;
    pExceptionRecord.ExceptionAddress = retaddr;
    pExceptionRecord.NumberParameters = 1;
    pExceptionRecord.ExceptionInformation[0] = v18;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  v19 = (const char *)sub_1800138F8(a5);
  sub_180011524(v24, v19);
  sub_180068748(*a2, a1);
  v26 = 1;
  v20 = (_QWORD *)_RTDynamicCast(
                    *a1,
                    0LL,
                    &Spectre::Engine::DeviceDepthBuffer `RTTI Type Descriptor',
                    &Spectre::Engine::D3D11::DepthBufferD3D11 `RTTI Type Descriptor',
                    1);
  v23 = v22;
  sub_1800115D0((__int64 *)&v23);
  v25 = v24;
  if ( v24 )
    (*(void (__fastcall **)(__int64 *))(*v24 + 8))(v24);
  sub_1800C849C(v20, (__int64 *)&v25, (__int64 *)&v23);
  sub_18000E954((__int64 *)&v24);
  sub_18000E954((__int64 *)&v22);
  sub_180011B5C(a5);
  return a1;
}
