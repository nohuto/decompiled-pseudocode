/*
 * XREFs of sub_180047598 @ 0x180047598
 * Callers:
 *     sub_18004791C @ 0x18004791C (sub_18004791C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180047598(_QWORD *a1, __int64 *a2, __int64 *a3)
{
  __int64 result; // rax
  __int64 v4; // r9

  result = *a2;
  v4 = *a3;
  *a1 = &Spectre::Engine::MeshInstance::MaterialLoadedFnc::`vftable';
  a1[1] = result;
  a1[2] = v4;
  return result;
}
