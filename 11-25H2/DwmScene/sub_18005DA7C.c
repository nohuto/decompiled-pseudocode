/*
 * XREFs of sub_18005DA7C @ 0x18005DA7C
 * Callers:
 *     sub_18005E35C @ 0x18005E35C (sub_18005E35C.c)
 * Callees:
 *     <none>
 */

void **__fastcall sub_18005DA7C(__int64 a1)
{
  void **result; // rax

  result = &Spectre::Engine::DistanceFromCameraSceneNodeTraversal::`vftable';
  *(_DWORD *)(a1 + 8) = 1;
  *(_QWORD *)a1 = &Spectre::Engine::DistanceFromCameraSceneNodeTraversal::`vftable';
  return result;
}
