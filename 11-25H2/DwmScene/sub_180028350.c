/*
 * XREFs of sub_180028350 @ 0x180028350
 * Callers:
 *     sub_180027FBC @ 0x180027FBC (sub_180027FBC.c)
 *     sub_18002808C @ 0x18002808C (sub_18002808C.c)
 *     sub_18002815C @ 0x18002815C (sub_18002815C.c)
 *     sub_18002822C @ 0x18002822C (sub_18002822C.c)
 *     sub_180028730 @ 0x180028730 (sub_180028730.c)
 *     sub_1800287EC @ 0x1800287EC (sub_1800287EC.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     sub_180016F54 @ 0x180016F54 (sub_180016F54.c)
 *     sub_180068574 @ 0x180068574 (sub_180068574.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180028350(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v7; // eax
  int v8; // r8d
  _QWORD v10[5]; // [rsp+38h] [rbp-40h] BYREF

  v10[4] = a2;
  v7 = sub_180016F54((__int64)v10, a2);
  sub_180068574((_DWORD)a1, v7, v8, -2147024891, a4, 0);
  *a1 = &Spectre::Engine::EngineAccessDeniedException::`vftable';
  sub_180011A5C(a2);
  return a1;
}
