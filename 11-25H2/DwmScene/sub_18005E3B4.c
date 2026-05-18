/*
 * XREFs of sub_18005E3B4 @ 0x18005E3B4
 * Callers:
 *     sub_18005F440 @ 0x18005F440 (sub_18005F440.c)
 * Callees:
 *     sub_18001B098 @ 0x18001B098 (sub_18001B098.c)
 *     sub_18005DA98 @ 0x18005DA98 (sub_18005DA98.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18005E3B4(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx

  v2 = sub_18001B098(304LL);
  v3 = v2;
  if ( v2 )
  {
    *(_OWORD *)v2 = 0LL;
    *(_DWORD *)(v2 + 8) = 1;
    *(_DWORD *)(v2 + 12) = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj2<Spectre::Engine::ImageProcessingEffectBloom>::`vftable';
    sub_18005DA98();
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3 + 16;
  a1[1] = v3;
  return a1;
}
