/*
 * XREFs of sub_18005E2E8 @ 0x18005E2E8
 * Callers:
 *     sub_18005CB24 @ 0x18005CB24 (sub_18005CB24.c)
 *     sub_180060070 @ 0x180060070 (sub_180060070.c)
 * Callees:
 *     sub_18001B098 @ 0x18001B098 (sub_18001B098.c)
 *     sub_18005DA10 @ 0x18005DA10 (sub_18005DA10.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18005E2E8(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx

  v2 = sub_18001B098(344LL);
  v3 = v2;
  if ( v2 )
  {
    *(_OWORD *)v2 = 0LL;
    *(_DWORD *)(v2 + 8) = 1;
    *(_DWORD *)(v2 + 12) = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj2<Spectre::Engine::ViewerEngine::ViewerSceneData>::`vftable';
    sub_18005DA10((void *)(v2 + 16));
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3 + 16;
  a1[1] = v3;
  return a1;
}
