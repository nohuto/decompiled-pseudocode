/*
 * XREFs of sub_180023E64 @ 0x180023E64
 * Callers:
 *     sub_18005F890 @ 0x18005F890 (sub_18005F890.c)
 *     sub_18006A240 @ 0x18006A240 (sub_18006A240.c)
 *     sub_180083580 @ 0x180083580 (sub_180083580.c)
 *     sub_18008CD48 @ 0x18008CD48 (sub_18008CD48.c)
 * Callees:
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 */

_QWORD *__fastcall sub_180023E64(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx

  v2 = sub_18001B1F8(24LL);
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
