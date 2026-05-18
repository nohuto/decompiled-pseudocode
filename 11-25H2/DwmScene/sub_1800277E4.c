/*
 * XREFs of sub_1800277E4 @ 0x1800277E4
 * Callers:
 *     sub_1800D77DC @ 0x1800D77DC (sub_1800D77DC.c)
 * Callees:
 *     <none>
 */

void **__fastcall sub_1800277E4(_QWORD *a1)
{
  void **result; // rax

  result = &Spectre::Engine::IVisitable::`vftable';
  *a1 = &Spectre::Engine::IVisitable::`vftable';
  return result;
}
