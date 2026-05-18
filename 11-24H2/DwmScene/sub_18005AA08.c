/*
 * XREFs of sub_18005AA08 @ 0x18005AA08
 * Callers:
 *     sub_18002C2C4 @ 0x18002C2C4 (sub_18002C2C4.c)
 *     sub_18002C300 @ 0x18002C300 (sub_18002C300.c)
 *     sub_18002C39C @ 0x18002C39C (sub_18002C39C.c)
 *     sub_180059FB4 @ 0x180059FB4 (sub_180059FB4.c)
 *     sub_180076EB8 @ 0x180076EB8 (sub_180076EB8.c)
 *     sub_18008DC8C @ 0x18008DC8C (sub_18008DC8C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     sub_180017054 @ 0x180017054 (sub_180017054.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18005AA08(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)a1 = &Spectre::Engine::IShaderExtension::`vftable';
  sub_180017054(a1 + 24, a2);
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_OWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 15LL;
  *(_BYTE *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 104) = 1;
  sub_180011B5C(a2);
  return a1;
}
