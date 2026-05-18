/*
 * XREFs of sub_180050230 @ 0x180050230
 * Callers:
 *     sub_18005028C @ 0x18005028C (sub_18005028C.c)
 *     sub_1800502D0 @ 0x1800502D0 (sub_1800502D0.c)
 *     sub_1800C84D0 @ 0x1800C84D0 (sub_1800C84D0.c)
 * Callees:
 *     sub_18001B098 @ 0x18001B098 (sub_18001B098.c)
 *     sub_1800500FC @ 0x1800500FC (sub_1800500FC.c)
 */

_QWORD *__fastcall sub_180050230(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // r8

  v2 = sub_18001B098(72LL);
  if ( v2 )
  {
    *(_DWORD *)(v2 + 8) = 1;
    *(_DWORD *)(v2 + 12) = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj2<Spectre::Engine::SamplerStateDesc>::`vftable';
    sub_1800500FC(v2 + 16);
  }
  else
  {
    v3 = 0LL;
  }
  a1[1] = v3;
  *a1 = v3 + 16;
  return a1;
}
