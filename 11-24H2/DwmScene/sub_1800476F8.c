/*
 * XREFs of sub_1800476F8 @ 0x1800476F8
 * Callers:
 *     sub_180047A7C @ 0x180047A7C (sub_180047A7C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800476F8(_QWORD *a1, __int64 *a2, __int64 *a3)
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
