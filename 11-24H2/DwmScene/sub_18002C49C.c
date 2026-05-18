/*
 * XREFs of sub_18002C49C @ 0x18002C49C
 * Callers:
 *     sub_18002ED88 @ 0x18002ED88 (sub_18002ED88.c)
 * Callees:
 *     sub_180017054 @ 0x180017054 (sub_180017054.c)
 *     sub_18008DC8C @ 0x18008DC8C (sub_18008DC8C.c)
 */

void **__fastcall sub_18002C49C(_QWORD *a1)
{
  __int64 v2; // rax
  void **result; // rax
  _BYTE v4[40]; // [rsp+20h] [rbp-28h] BYREF

  v2 = sub_180017054((__int64)v4, (__int64)&unk_1801C9458);
  sub_18008DC8C(a1, v2);
  result = &Spectre::Engine::UnlitShaderExtension::`vftable';
  *a1 = &Spectre::Engine::UnlitShaderExtension::`vftable';
  return result;
}
