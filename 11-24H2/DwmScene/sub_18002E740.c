/*
 * XREFs of sub_18002E740 @ 0x18002E740
 * Callers:
 *     sub_18002F488 @ 0x18002F488 (sub_18002F488.c)
 * Callees:
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 *     sub_18002C244 @ 0x18002C244 (sub_18002C244.c)
 */

_QWORD *__fastcall sub_18002E740(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx

  v2 = sub_18001B1F8(312LL);
  v3 = v2;
  if ( v2 )
  {
    *(_DWORD *)(v2 + 8) = 1;
    *(_DWORD *)(v2 + 12) = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj2<Spectre::Engine::CpuProfiler>::`vftable';
    sub_18002C244(v2 + 16);
  }
  else
  {
    v3 = 0LL;
  }
  a1[1] = v3;
  *a1 = v3 + 16;
  return a1;
}
