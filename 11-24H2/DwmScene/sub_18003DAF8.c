/*
 * XREFs of sub_18003DAF8 @ 0x18003DAF8
 * Callers:
 *     sub_1800D98BF @ 0x1800D98BF (sub_1800D98BF.c)
 * Callees:
 *     <none>
 */

void **__fastcall sub_18003DAF8(_QWORD *a1)
{
  void **result; // rax

  result = &Spectre::Engine::SceneCustomData::`vftable';
  *a1 = &Spectre::Engine::SceneCustomData::`vftable';
  return result;
}
