/*
 * XREFs of sub_18005E35C @ 0x18005E35C
 * Callers:
 *     sub_18005F730 @ 0x18005F730 (sub_18005F730.c)
 * Callees:
 *     sub_18001B098 @ 0x18001B098 (sub_18001B098.c)
 *     sub_18005DA7C @ 0x18005DA7C (sub_18005DA7C.c)
 */

_QWORD *__fastcall sub_18005E35C(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx

  v2 = sub_18001B098(32LL);
  if ( v2 )
  {
    *(_DWORD *)(v2 + 8) = 1;
    *(_DWORD *)(v2 + 12) = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj2<Spectre::Engine::DistanceFromCameraSceneNodeTraversal>::`vftable';
    sub_18005DA7C(v2 + 16);
  }
  else
  {
    v3 = 0LL;
  }
  a1[1] = v3;
  *a1 = v3 + 16;
  return a1;
}
