/*
 * XREFs of sub_1800295E0 @ 0x1800295E0
 * Callers:
 *     sub_1800298C4 @ 0x1800298C4 (sub_1800298C4.c)
 * Callees:
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 *     sub_180028C7C @ 0x180028C7C (sub_180028C7C.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800295E0(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx

  v2 = sub_18001B1F8(216LL);
  v3 = v2;
  if ( v2 )
  {
    *(_OWORD *)v2 = 0LL;
    *(_DWORD *)(v2 + 8) = 1;
    *(_DWORD *)(v2 + 12) = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj2<Spectre::Engine::GpuProfiler>::`vftable';
    sub_180028C7C(v2 + 16);
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3 + 16;
  a1[1] = v3;
  return a1;
}
