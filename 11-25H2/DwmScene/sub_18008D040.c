/*
 * XREFs of sub_18008D040 @ 0x18008D040
 * Callers:
 *     sub_1800DB272 @ 0x1800DB272 (sub_1800DB272.c)
 * Callees:
 *     <none>
 */

void **__fastcall sub_18008D040(_QWORD *a1)
{
  void **result; // rax

  result = &Spectre::Engine::IImageProcessingEffect::`vftable';
  *a1 = &Spectre::Engine::IImageProcessingEffect::`vftable';
  return result;
}
