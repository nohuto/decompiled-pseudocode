/*
 * XREFs of sub_18003D998 @ 0x18003D998
 * Callers:
 *     sub_1800D975F @ 0x1800D975F (sub_1800D975F.c)
 * Callees:
 *     <none>
 */

void **__fastcall sub_18003D998(_QWORD *a1)
{
  void **result; // rax

  result = &Spectre::Engine::SceneCustomData::`vftable';
  *a1 = &Spectre::Engine::SceneCustomData::`vftable';
  return result;
}
