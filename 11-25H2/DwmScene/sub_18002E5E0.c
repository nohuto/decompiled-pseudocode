/*
 * XREFs of sub_18002E5E0 @ 0x18002E5E0
 * Callers:
 *     sub_18002F328 @ 0x18002F328 (sub_18002F328.c)
 * Callees:
 *     sub_18001B098 @ 0x18001B098 (sub_18001B098.c)
 *     sub_18002C0E4 @ 0x18002C0E4 (sub_18002C0E4.c)
 */

_QWORD *__fastcall sub_18002E5E0(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx

  v2 = sub_18001B098(312LL);
  v3 = v2;
  if ( v2 )
  {
    *(_DWORD *)(v2 + 8) = 1;
    *(_DWORD *)(v2 + 12) = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj2<Spectre::Engine::CpuProfiler>::`vftable';
    sub_18002C0E4(v2 + 16);
  }
  else
  {
    v3 = 0LL;
  }
  a1[1] = v3;
  *a1 = v3 + 16;
  return a1;
}
