/*
 * XREFs of sub_18002C300 @ 0x18002C300
 * Callers:
 *     sub_18002E95C @ 0x18002E95C (sub_18002E95C.c)
 * Callees:
 *     sub_180017054 @ 0x180017054 (sub_180017054.c)
 *     sub_18005AA08 @ 0x18005AA08 (sub_18005AA08.c)
 */

void **__fastcall sub_18002C300(__int64 a1)
{
  __int64 v2; // rax
  void **result; // rax
  _BYTE v4[40]; // [rsp+20h] [rbp-28h] BYREF

  v2 = sub_180017054((__int64)v4, (__int64)&unk_1801C8F18);
  sub_18005AA08(a1, v2);
  result = &Spectre::Engine::ImageProcessingShaderExtension::`vftable';
  *(_DWORD *)(a1 + 112) = 16;
  *(_QWORD *)a1 = &Spectre::Engine::ImageProcessingShaderExtension::`vftable';
  *(_DWORD *)(a1 + 116) = 32;
  return result;
}
