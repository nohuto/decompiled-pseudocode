/*
 * XREFs of sub_18002C39C @ 0x18002C39C
 * Callers:
 *     sub_18002ECBC @ 0x18002ECBC (sub_18002ECBC.c)
 * Callees:
 *     sub_180017054 @ 0x180017054 (sub_180017054.c)
 *     sub_18005AA08 @ 0x18005AA08 (sub_18005AA08.c)
 */

void **__fastcall sub_18002C39C(__int64 a1)
{
  __int64 v2; // rax
  void **result; // rax
  _BYTE v4[40]; // [rsp+20h] [rbp-28h] BYREF

  v2 = sub_180017054((__int64)v4, (__int64)&unk_1801C92F8);
  sub_18005AA08(a1, v2);
  result = &Spectre::Engine::SymbolShaderExtension::`vftable';
  *(_DWORD *)(a1 + 112) = 16;
  *(_QWORD *)a1 = &Spectre::Engine::SymbolShaderExtension::`vftable';
  *(_DWORD *)(a1 + 116) = 32;
  return result;
}
