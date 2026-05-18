/*
 * XREFs of sub_18004EF04 @ 0x18004EF04
 * Callers:
 *     sub_18004FBB0 @ 0x18004FBB0 (sub_18004FBB0.c)
 * Callees:
 *     memset @ 0x18000C088 (memset.c)
 *     sub_1800801A4 @ 0x1800801A4 (sub_1800801A4.c)
 */

void **__fastcall sub_18004EF04(_QWORD *a1)
{
  void **result; // rax

  memset(a1, 0, 0x68uLL);
  sub_1800801A4(a1);
  result = &Spectre::Engine::IndexBufferGeneric::`vftable';
  *a1 = &Spectre::Engine::IndexBufferGeneric::`vftable';
  return result;
}
