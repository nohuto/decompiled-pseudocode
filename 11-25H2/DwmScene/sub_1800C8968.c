/*
 * XREFs of sub_1800C8968 @ 0x1800C8968
 * Callers:
 *     sub_1800BCCF0 @ 0x1800BCCF0 (sub_1800BCCF0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     memset @ 0x18000C088 (memset.c)
 *     sub_18000E854 @ 0x18000E854 (sub_18000E854.c)
 *     sub_180011424 @ 0x180011424 (sub_180011424.c)
 *     sub_1800114D0 @ 0x1800114D0 (sub_1800114D0.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     sub_1800137F8 @ 0x1800137F8 (sub_1800137F8.c)
 *     sub_1800685E8 @ 0x1800685E8 (sub_1800685E8.c)
 *     sub_1800B9A04 @ 0x1800B9A04 (sub_1800B9A04.c)
 *     sub_1800BB198 @ 0x1800BB198 (sub_1800BB198.c)
 *     sub_1800BD710 @ 0x1800BD710 (sub_1800BD710.c)
 *     sub_1800C833C @ 0x1800C833C (sub_1800C833C.c)
 *     __RTDynamicCast @ 0x1800D4E40 (__RTDynamicCast.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=7
__int64 *__fastcall sub_1800C8968(__int64 *a1, __int64 *a2, int a3, int a4, __int64 a5)
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
  v9 = sub_1800BD710(1, 0);
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
  v10 = sub_1800B9A04(*a2, &v25);
  v11 = *v10;
  v12 = *(int (__fastcall **)(__int64, _DWORD *, _QWORD, __int64 **))(*(_QWORD *)*v10 + 40LL);
  sub_18000E854((__int64 *)&v22);
  v13 = v12(v11, v31, 0LL, &v22);
  sub_18000E854((__int64 *)&v25);
  sub_1800BB198(*a2, v13);
  if ( (v13 & 0x80000000) != 0LL )
  {
    memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    pExceptionRecord.ExceptionCode = -532265403;
    pExceptionRecord.ExceptionAddress = retaddr;
    pExceptionRecord.NumberParameters = 1;
    pExceptionRecord.ExceptionInformation[0] = v13;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  v14 = (const char *)sub_1800137F8(a5);
  sub_180011424(v22, v14);
  v27[0] = 0;
  v27[1] = 5;
  v27[2] = 0;
  v24 = 0LL;
  v15 = sub_1800B9A04(*a2, &v23);
  v16 = *v15;
  v17 = *(int (__fastcall **)(__int64, __int64 *, _DWORD *, __int64 **))(*(_QWORD *)*v15 + 80LL);
  sub_18000E854((__int64 *)&v24);
  v18 = v17(v16, v22, v27, &v24);
  sub_18000E854((__int64 *)&v23);
  sub_1800BB198(*a2, v18);
  if ( (v18 & 0x80000000) != 0LL )
  {
    memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    pExceptionRecord.ExceptionCode = -532265403;
    pExceptionRecord.ExceptionAddress = retaddr;
    pExceptionRecord.NumberParameters = 1;
    pExceptionRecord.ExceptionInformation[0] = v18;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  v19 = (const char *)sub_1800137F8(a5);
  sub_180011424(v24, v19);
  sub_1800685E8(*a2, a1);
  v26 = 1;
  v20 = (_QWORD *)_RTDynamicCast(
                    *a1,
                    0LL,
                    &Spectre::Engine::DeviceDepthBuffer `RTTI Type Descriptor',
                    &Spectre::Engine::D3D11::DepthBufferD3D11 `RTTI Type Descriptor',
                    1);
  v23 = v22;
  sub_1800114D0((__int64 *)&v23);
  v25 = v24;
  if ( v24 )
    (*(void (__fastcall **)(__int64 *))(*v24 + 8))(v24);
  sub_1800C833C(v20, (__int64 *)&v25, (__int64 *)&v23);
  sub_18000E854((__int64 *)&v24);
  sub_18000E854((__int64 *)&v22);
  sub_180011A5C(a5);
  return a1;
}
