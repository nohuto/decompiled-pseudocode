/*
 * XREFs of sub_18005E428 @ 0x18005E428
 * Callers:
 *     sub_180066CF4 @ 0x180066CF4 (sub_180066CF4.c)
 * Callees:
 *     sub_18001B098 @ 0x18001B098 (sub_18001B098.c)
 *     sub_18005DAA4 @ 0x18005DAA4 (sub_18005DAA4.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18005E428(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx

  v2 = sub_18001B098(256LL);
  v3 = v2;
  if ( v2 )
  {
    *(_OWORD *)v2 = 0LL;
    *(_DWORD *)(v2 + 8) = 1;
    *(_DWORD *)(v2 + 12) = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj2<Spectre::Engine::ImageProcessingEffectPlanarReflection>::`vftable';
    sub_18005DAA4(v2 + 16);
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3 + 16;
  a1[1] = v3;
  return a1;
}
