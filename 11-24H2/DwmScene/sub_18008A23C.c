/*
 * XREFs of sub_18008A23C @ 0x18008A23C
 * Callers:
 *     sub_18008AE90 @ 0x18008AE90 (sub_18008AE90.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18008A23C(__int64 a1, unsigned int *a2)
{
  __int64 result; // rax

  result = *a2;
  *(_QWORD *)a1 = &Spectre::Engine::DistanceFromCameraSceneNodeTraversal::`vftable';
  *(_DWORD *)(a1 + 8) = result;
  return result;
}
