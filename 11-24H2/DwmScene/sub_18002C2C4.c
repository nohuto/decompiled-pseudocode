/*
 * XREFs of sub_18002C2C4 @ 0x18002C2C4
 * Callers:
 *     sub_18002E890 @ 0x18002E890 (sub_18002E890.c)
 * Callees:
 *     sub_180017054 @ 0x180017054 (sub_180017054.c)
 *     sub_18005AA08 @ 0x18005AA08 (sub_18005AA08.c)
 */

void **__fastcall sub_18002C2C4(_QWORD *a1)
{
  __int64 v2; // rax
  void **result; // rax
  _BYTE v4[40]; // [rsp+20h] [rbp-28h] BYREF

  v2 = sub_180017054((__int64)v4, (__int64)&unk_1801C93F8);
  sub_18005AA08(a1, v2);
  result = &Spectre::Engine::FontShaderExtension::`vftable';
  *a1 = &Spectre::Engine::FontShaderExtension::`vftable';
  return result;
}
