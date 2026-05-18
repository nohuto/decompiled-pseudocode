/*
 * XREFs of sub_18005E514 @ 0x18005E514
 * Callers:
 *     sub_18005F5A0 @ 0x18005F5A0 (sub_18005F5A0.c)
 * Callees:
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 *     sub_18005DBF8 @ 0x18005DBF8 (sub_18005DBF8.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18005E514(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx

  v2 = sub_18001B1F8(304LL);
  v3 = v2;
  if ( v2 )
  {
    *(_OWORD *)v2 = 0LL;
    *(_DWORD *)(v2 + 8) = 1;
    *(_DWORD *)(v2 + 12) = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj2<Spectre::Engine::ImageProcessingEffectBloom>::`vftable';
    sub_18005DBF8();
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3 + 16;
  a1[1] = v3;
  return a1;
}
