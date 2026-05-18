/*
 * XREFs of sub_18008D1A0 @ 0x18008D1A0
 * Callers:
 *     sub_1800DB3D2 @ 0x1800DB3D2 (sub_1800DB3D2.c)
 * Callees:
 *     <none>
 */

void **__fastcall sub_18008D1A0(_QWORD *a1)
{
  void **result; // rax

  result = &Spectre::Engine::IImageProcessingEffect::`vftable';
  *a1 = &Spectre::Engine::IImageProcessingEffect::`vftable';
  return result;
}
