/*
 * XREFs of sub_18004791C @ 0x18004791C
 * Callers:
 *     sub_180048B78 @ 0x180048B78 (sub_180048B78.c)
 * Callees:
 *     sub_18001B098 @ 0x18001B098 (sub_18001B098.c)
 *     sub_180047598 @ 0x180047598 (sub_180047598.c)
 */

_QWORD *__fastcall sub_18004791C(_QWORD *a1, __int64 *a2, __int64 *a3)
{
  __int64 v6; // rax
  __int64 v7; // r10
  _QWORD *result; // rax

  v6 = sub_18001B098(40LL);
  if ( v6 )
  {
    *(_DWORD *)(v6 + 8) = 1;
    *(_DWORD *)(v6 + 12) = 1;
    *(_QWORD *)v6 = &std::_Ref_count_obj2<Spectre::Engine::MeshInstance::MaterialLoadedFnc>::`vftable';
    sub_180047598((_QWORD *)(v6 + 16), a2, a3);
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
