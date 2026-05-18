/*
 * XREFs of sub_180050390 @ 0x180050390
 * Callers:
 *     sub_1800503EC @ 0x1800503EC (sub_1800503EC.c)
 *     sub_180050430 @ 0x180050430 (sub_180050430.c)
 *     sub_1800C8630 @ 0x1800C8630 (sub_1800C8630.c)
 * Callees:
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 *     sub_18005025C @ 0x18005025C (sub_18005025C.c)
 */

_QWORD *__fastcall sub_180050390(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // r8

  v2 = sub_18001B1F8(72LL);
  if ( v2 )
  {
    *(_DWORD *)(v2 + 8) = 1;
    *(_DWORD *)(v2 + 12) = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj2<Spectre::Engine::SamplerStateDesc>::`vftable';
    sub_18005025C(v2 + 16);
  }
  else
  {
    v3 = 0LL;
  }
  a1[1] = v3;
  *a1 = v3 + 16;
  return a1;
}
