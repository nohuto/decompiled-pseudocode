/*
 * XREFs of sub_180068574 @ 0x180068574
 * Callers:
 *     sub_180028350 @ 0x180028350 (sub_180028350.c)
 *     sub_180038A58 @ 0x180038A58 (sub_180038A58.c)
 *     sub_180044C7C @ 0x180044C7C (sub_180044C7C.c)
 *     sub_1800479C0 @ 0x1800479C0 (sub_1800479C0.c)
 *     sub_180080FF0 @ 0x180080FF0 (sub_180080FF0.c)
 *     sub_1800C0438 @ 0x1800C0438 (sub_1800C0438.c)
 *     sub_1800C1330 @ 0x1800C1330 (sub_1800C1330.c)
 *     sub_1800C1DB0 @ 0x1800C1DB0 (sub_1800C1DB0.c)
 *     sub_1800C6430 @ 0x1800C6430 (sub_1800C6430.c)
 *     sub_1800CA91C @ 0x1800CA91C (sub_1800CA91C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     sub_18001B33C @ 0x18001B33C (sub_18001B33C.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180068574(_QWORD *a1, __int64 a2, __int64 a3, int a4, __int64 a5, char a6)
{
  sub_18001B33C((__int64)a1, a4, a5, a6);
  *a1 = &Spectre::Engine::EngineException::`vftable';
  sub_180011A5C(a2);
  return a1;
}
