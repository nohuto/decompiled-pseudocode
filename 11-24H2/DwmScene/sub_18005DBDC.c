/*
 * XREFs of sub_18005DBDC @ 0x18005DBDC
 * Callers:
 *     sub_18005E4BC @ 0x18005E4BC (sub_18005E4BC.c)
 * Callees:
 *     <none>
 */

void **__fastcall sub_18005DBDC(__int64 a1)
{
  void **result; // rax

  result = &Spectre::Engine::DistanceFromCameraSceneNodeTraversal::`vftable';
  *(_DWORD *)(a1 + 8) = 1;
  *(_QWORD *)a1 = &Spectre::Engine::DistanceFromCameraSceneNodeTraversal::`vftable';
  return result;
}
