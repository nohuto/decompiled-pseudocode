/*
 * XREFs of sub_180044A6C @ 0x180044A6C
 * Callers:
 *     sub_180044AAC @ 0x180044AAC (sub_180044AAC.c)
 * Callees:
 *     sub_18007F228 @ 0x18007F228 (sub_18007F228.c)
 */

void **__fastcall sub_180044A6C(_QWORD *a1)
{
  void **result; // rax

  sub_18007F228(a1, 8LL, 6LL);
  result = &Spectre::Engine::IndexBuffer::`vftable';
  *a1 = &Spectre::Engine::IndexBuffer::`vftable';
  return result;
}
