/*
 * XREFs of sub_1800686D4 @ 0x1800686D4
 * Callers:
 *     sub_1800284B0 @ 0x1800284B0 (sub_1800284B0.c)
 *     sub_180038BB8 @ 0x180038BB8 (sub_180038BB8.c)
 *     sub_180044DDC @ 0x180044DDC (sub_180044DDC.c)
 *     sub_180047B20 @ 0x180047B20 (sub_180047B20.c)
 *     sub_180081150 @ 0x180081150 (sub_180081150.c)
 *     sub_1800C0598 @ 0x1800C0598 (sub_1800C0598.c)
 *     sub_1800C1490 @ 0x1800C1490 (sub_1800C1490.c)
 *     sub_1800C1F10 @ 0x1800C1F10 (sub_1800C1F10.c)
 *     sub_1800C6590 @ 0x1800C6590 (sub_1800C6590.c)
 *     sub_1800CAA7C @ 0x1800CAA7C (sub_1800CAA7C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     sub_18001B49C @ 0x18001B49C (sub_18001B49C.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800686D4(_QWORD *a1, __int64 a2, __int64 a3, int a4, __int64 a5, char a6)
{
  sub_18001B49C((__int64)a1, a4, a5, a6);
  *a1 = &Spectre::Engine::EngineException::`vftable';
  sub_180011B5C(a2);
  return a1;
}
