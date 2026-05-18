/*
 * XREFs of sub_18004F120 @ 0x18004F120
 * Callers:
 *     sub_18004FDA0 @ 0x18004FDA0 (sub_18004FDA0.c)
 * Callees:
 *     memset @ 0x18000C4E8 (memset.c)
 *     sub_18007FD70 @ 0x18007FD70 (sub_18007FD70.c)
 */

void **__fastcall sub_18004F120(_QWORD *a1)
{
  void **result; // rax

  memset(a1, 0, 0x68uLL);
  sub_18007FD70(a1);
  result = &Spectre::Engine::VertexBufferGeneric::`vftable';
  *a1 = &Spectre::Engine::VertexBufferGeneric::`vftable';
  return result;
}
