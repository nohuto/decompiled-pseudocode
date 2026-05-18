/*
 * XREFs of sub_1800284B0 @ 0x1800284B0
 * Callers:
 *     sub_18002811C @ 0x18002811C (sub_18002811C.c)
 *     sub_1800281EC @ 0x1800281EC (sub_1800281EC.c)
 *     sub_1800282BC @ 0x1800282BC (sub_1800282BC.c)
 *     sub_18002838C @ 0x18002838C (sub_18002838C.c)
 *     sub_180028890 @ 0x180028890 (sub_180028890.c)
 *     sub_18002894C @ 0x18002894C (sub_18002894C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     sub_180017054 @ 0x180017054 (sub_180017054.c)
 *     sub_1800686D4 @ 0x1800686D4 (sub_1800686D4.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800284B0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v7; // eax
  int v8; // r8d
  _QWORD v10[5]; // [rsp+38h] [rbp-40h] BYREF

  v10[4] = a2;
  v7 = sub_180017054((__int64)v10, a2);
  sub_1800686D4((_DWORD)a1, v7, v8, -2147024891, a4, 0);
  *a1 = &Spectre::Engine::EngineAccessDeniedException::`vftable';
  sub_180011B5C(a2);
  return a1;
}
