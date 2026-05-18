/*
 * XREFs of sub_18008A0DC @ 0x18008A0DC
 * Callers:
 *     sub_18008AD30 @ 0x18008AD30 (sub_18008AD30.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18008A0DC(__int64 a1, unsigned int *a2)
{
  __int64 result; // rax

  result = *a2;
  *(_QWORD *)a1 = &Spectre::Engine::DistanceFromCameraSceneNodeTraversal::`vftable';
  *(_DWORD *)(a1 + 8) = result;
  return result;
}
