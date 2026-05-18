/*
 * XREFs of sub_18005E588 @ 0x18005E588
 * Callers:
 *     sub_180066E54 @ 0x180066E54 (sub_180066E54.c)
 * Callees:
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 *     sub_18005DC04 @ 0x18005DC04 (sub_18005DC04.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18005E588(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx

  v2 = sub_18001B1F8(256LL);
  v3 = v2;
  if ( v2 )
  {
    *(_OWORD *)v2 = 0LL;
    *(_DWORD *)(v2 + 8) = 1;
    *(_DWORD *)(v2 + 12) = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj2<Spectre::Engine::ImageProcessingEffectPlanarReflection>::`vftable';
    sub_18005DC04(v2 + 16);
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3 + 16;
  a1[1] = v3;
  return a1;
}
