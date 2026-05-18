/*
 * XREFs of sub_18005E4BC @ 0x18005E4BC
 * Callers:
 *     sub_18005F890 @ 0x18005F890 (sub_18005F890.c)
 * Callees:
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 *     sub_18005DBDC @ 0x18005DBDC (sub_18005DBDC.c)
 */

_QWORD *__fastcall sub_18005E4BC(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx

  v2 = sub_18001B1F8(32LL);
  if ( v2 )
  {
    *(_DWORD *)(v2 + 8) = 1;
    *(_DWORD *)(v2 + 12) = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj2<Spectre::Engine::DistanceFromCameraSceneNodeTraversal>::`vftable';
    sub_18005DBDC(v2 + 16);
  }
  else
  {
    v3 = 0LL;
  }
  a1[1] = v3;
  *a1 = v3 + 16;
  return a1;
}
