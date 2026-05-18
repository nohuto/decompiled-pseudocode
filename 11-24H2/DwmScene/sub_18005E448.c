/*
 * XREFs of sub_18005E448 @ 0x18005E448
 * Callers:
 *     sub_18005CC84 @ 0x18005CC84 (sub_18005CC84.c)
 *     sub_1800601D0 @ 0x1800601D0 (sub_1800601D0.c)
 * Callees:
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 *     sub_18005DB70 @ 0x18005DB70 (sub_18005DB70.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18005E448(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx

  v2 = sub_18001B1F8(344LL);
  v3 = v2;
  if ( v2 )
  {
    *(_OWORD *)v2 = 0LL;
    *(_DWORD *)(v2 + 8) = 1;
    *(_DWORD *)(v2 + 12) = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj2<Spectre::Engine::ViewerEngine::ViewerSceneData>::`vftable';
    sub_18005DB70((void *)(v2 + 16));
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3 + 16;
  a1[1] = v3;
  return a1;
}
