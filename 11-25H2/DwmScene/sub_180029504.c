/*
 * XREFs of sub_180029504 @ 0x180029504
 * Callers:
 *     sub_180029764 @ 0x180029764 (sub_180029764.c)
 * Callees:
 *     sub_18001B098 @ 0x18001B098 (sub_18001B098.c)
 *     sub_180028B4C @ 0x180028B4C (sub_180028B4C.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180029504(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx

  v2 = sub_18001B098(56LL);
  v3 = v2;
  if ( v2 )
  {
    *(_OWORD *)v2 = 0LL;
    *(_DWORD *)(v2 + 8) = 1;
    *(_DWORD *)(v2 + 12) = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj2<Spectre::Engine::GpuProfilingGrapher>::`vftable';
    sub_180028B4C();
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3 + 16;
  a1[1] = v3;
  return a1;
}
