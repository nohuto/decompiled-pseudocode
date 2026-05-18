/*
 * XREFs of sub_18005A8A8 @ 0x18005A8A8
 * Callers:
 *     sub_18002C164 @ 0x18002C164 (sub_18002C164.c)
 *     sub_18002C1A0 @ 0x18002C1A0 (sub_18002C1A0.c)
 *     sub_18002C23C @ 0x18002C23C (sub_18002C23C.c)
 *     sub_180059E54 @ 0x180059E54 (sub_180059E54.c)
 *     sub_180076D58 @ 0x180076D58 (sub_180076D58.c)
 *     sub_18008DB2C @ 0x18008DB2C (sub_18008DB2C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     sub_180016F54 @ 0x180016F54 (sub_180016F54.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18005A8A8(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)a1 = &Spectre::Engine::IShaderExtension::`vftable';
  sub_180016F54(a1 + 24, a2);
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_OWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 15LL;
  *(_BYTE *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 104) = 1;
  sub_180011A5C(a2);
  return a1;
}
