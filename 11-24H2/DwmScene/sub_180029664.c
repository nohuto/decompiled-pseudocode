/*
 * XREFs of sub_180029664 @ 0x180029664
 * Callers:
 *     sub_1800298C4 @ 0x1800298C4 (sub_1800298C4.c)
 * Callees:
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 *     sub_180028CAC @ 0x180028CAC (sub_180028CAC.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180029664(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx

  v2 = sub_18001B1F8(56LL);
  v3 = v2;
  if ( v2 )
  {
    *(_OWORD *)v2 = 0LL;
    *(_DWORD *)(v2 + 8) = 1;
    *(_DWORD *)(v2 + 12) = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj2<Spectre::Engine::GpuProfilingGrapher>::`vftable';
    sub_180028CAC();
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3 + 16;
  a1[1] = v3;
  return a1;
}
