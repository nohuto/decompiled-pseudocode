/*
 * XREFs of sub_18002E4B8 @ 0x18002E4B8
 * Callers:
 *     sub_18002BB14 @ 0x18002BB14 (sub_18002BB14.c)
 *     sub_180030F90 @ 0x180030F90 (sub_180030F90.c)
 * Callees:
 *     sub_18001B098 @ 0x18001B098 (sub_18001B098.c)
 *     sub_18002C074 @ 0x18002C074 (sub_18002C074.c)
 */

_QWORD *__fastcall sub_18002E4B8(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // r8

  v2 = sub_18001B098(56LL);
  if ( v2 )
  {
    *(_DWORD *)(v2 + 8) = 1;
    *(_DWORD *)(v2 + 12) = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj2<Spectre::Engine::Engine::EngineSceneData>::`vftable';
    sub_18002C074((_QWORD *)(v2 + 16));
  }
  else
  {
    v3 = 0LL;
  }
  a1[1] = v3;
  *a1 = v3 + 16;
  return a1;
}
