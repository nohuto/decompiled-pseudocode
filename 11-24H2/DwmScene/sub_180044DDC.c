/*
 * XREFs of sub_180044DDC @ 0x180044DDC
 * Callers:
 *     sub_18004607C @ 0x18004607C (sub_18004607C.c)
 *     sub_1800462C4 @ 0x1800462C4 (sub_1800462C4.c)
 *     sub_180046404 @ 0x180046404 (sub_180046404.c)
 *     sub_1800464DC @ 0x1800464DC (sub_1800464DC.c)
 *     sub_180046654 @ 0x180046654 (sub_180046654.c)
 *     sub_1800467DC @ 0x1800467DC (sub_1800467DC.c)
 *     sub_180046914 @ 0x180046914 (sub_180046914.c)
 *     sub_180046A3C @ 0x180046A3C (sub_180046A3C.c)
 *     sub_180046C08 @ 0x180046C08 (sub_180046C08.c)
 *     sub_180046D30 @ 0x180046D30 (sub_180046D30.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     sub_180017054 @ 0x180017054 (sub_180017054.c)
 *     sub_1800686D4 @ 0x1800686D4 (sub_1800686D4.c)
 */

_QWORD *__fastcall sub_180044DDC(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v7; // eax
  int v8; // r8d
  _QWORD v10[5]; // [rsp+38h] [rbp-40h] BYREF

  v10[4] = a2;
  v7 = sub_180017054((__int64)v10, a2);
  sub_1800686D4((_DWORD)a1, v7, v8, -2147467261, a4, 0);
  *a1 = &Spectre::Engine::EngineInvalidPointerException::`vftable';
  sub_180011B5C(a2);
  return a1;
}
