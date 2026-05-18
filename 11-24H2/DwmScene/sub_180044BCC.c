/*
 * XREFs of sub_180044BCC @ 0x180044BCC
 * Callers:
 *     sub_180044C0C @ 0x180044C0C (sub_180044C0C.c)
 * Callees:
 *     sub_18007F388 @ 0x18007F388 (sub_18007F388.c)
 */

void **__fastcall sub_180044BCC(_QWORD *a1)
{
  void **result; // rax

  sub_18007F388(a1, 8LL, 6LL);
  result = &Spectre::Engine::IndexBuffer::`vftable';
  *a1 = &Spectre::Engine::IndexBuffer::`vftable';
  return result;
}
