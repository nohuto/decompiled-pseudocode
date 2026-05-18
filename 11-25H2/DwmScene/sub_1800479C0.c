/*
 * XREFs of sub_1800479C0 @ 0x1800479C0
 * Callers:
 *     sub_180048380 @ 0x180048380 (sub_180048380.c)
 *     sub_180078220 @ 0x180078220 (sub_180078220.c)
 *     sub_180085220 @ 0x180085220 (sub_180085220.c)
 *     sub_1800854D0 @ 0x1800854D0 (sub_1800854D0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     sub_180016F54 @ 0x180016F54 (sub_180016F54.c)
 *     sub_180068574 @ 0x180068574 (sub_180068574.c)
 */

_QWORD *__fastcall sub_1800479C0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v7; // eax
  int v8; // r8d
  _QWORD v10[5]; // [rsp+38h] [rbp-40h] BYREF

  v10[4] = a2;
  v7 = sub_180016F54((__int64)v10, a2);
  sub_180068574((_DWORD)a1, v7, v8, -2147467263, a4, 0);
  *a1 = &Spectre::Engine::EngineNotImplException::`vftable';
  sub_180011A5C(a2);
  return a1;
}
