/*
 * XREFs of sub_180047A7C @ 0x180047A7C
 * Callers:
 *     sub_180048CD8 @ 0x180048CD8 (sub_180048CD8.c)
 * Callees:
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 *     sub_1800476F8 @ 0x1800476F8 (sub_1800476F8.c)
 */

_QWORD *__fastcall sub_180047A7C(_QWORD *a1, __int64 *a2, __int64 *a3)
{
  __int64 v6; // rax
  __int64 v7; // r10
  _QWORD *result; // rax

  v6 = sub_18001B1F8(40LL);
  if ( v6 )
  {
    *(_DWORD *)(v6 + 8) = 1;
    *(_DWORD *)(v6 + 12) = 1;
    *(_QWORD *)v6 = &std::_Ref_count_obj2<Spectre::Engine::MeshInstance::MaterialLoadedFnc>::`vftable';
    sub_1800476F8((_QWORD *)(v6 + 16), a2, a3);
  }
  else
  {
    v7 = 0LL;
  }
  *a1 = v7 + 16;
  result = a1;
  a1[1] = v7;
  return result;
}
