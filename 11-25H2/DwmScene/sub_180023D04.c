/*
 * XREFs of sub_180023D04 @ 0x180023D04
 * Callers:
 *     sub_18005F730 @ 0x18005F730 (sub_18005F730.c)
 *     sub_18006A0E0 @ 0x18006A0E0 (sub_18006A0E0.c)
 *     sub_180083420 @ 0x180083420 (sub_180083420.c)
 *     sub_18008CBE8 @ 0x18008CBE8 (sub_18008CBE8.c)
 * Callees:
 *     sub_18001B098 @ 0x18001B098 (sub_18001B098.c)
 */

_QWORD *__fastcall sub_180023D04(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx

  v2 = sub_18001B098(24LL);
  v3 = v2;
  if ( v2 )
  {
    *(_DWORD *)(v2 + 8) = 1;
    *(_DWORD *)(v2 + 12) = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj2<Spectre::Engine::DefaultSceneNodeTraversal>::`vftable';
    *(_QWORD *)(v2 + 16) = &Spectre::Engine::DefaultSceneNodeTraversal::`vftable';
  }
  else
  {
    v3 = 0LL;
  }
  a1[1] = v3;
  *a1 = v3 + 16;
  return a1;
}
