/*
 * XREFs of sub_180095664 @ 0x180095664
 * Callers:
 *     sub_180028B1C @ 0x180028B1C (sub_180028B1C.c)
 * Callees:
 *     sub_18000CBBC @ 0x18000CBBC (sub_18000CBBC.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_18001B098 @ 0x18001B098 (sub_18001B098.c)
 *     sub_180023E8C @ 0x180023E8C (sub_180023E8C.c)
 *     sub_18006CE40 @ 0x18006CE40 (sub_18006CE40.c)
 *     sub_180095360 @ 0x180095360 (sub_180095360.c)
 *     sub_180095468 @ 0x180095468 (sub_180095468.c)
 *     sub_18009561C @ 0x18009561C (sub_18009561C.c)
 */

// Hidden C++ exception states: #wind=6
_QWORD *__fastcall sub_180095664(_QWORD *a1)
{
  _QWORD *v2; // rdx
  unsigned int v3; // ebp
  __int64 v4; // r15
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v10; // [rsp+80h] [rbp+18h] BYREF
  __int64 v11; // [rsp+88h] [rbp+20h]

  sub_180023E8C(a1);
  v10 = (__int64)(a1 + 1);
  a1[1] = 0LL;
  a1[2] = 0LL;
  a1[3] = 0LL;
  a1[4] = 0LL;
  a1[5] = 0LL;
  sub_18006CE40(a1 + 1, v2);
  sub_18009561C(a1 + 6);
  sub_18000CBBC(
    (__int64)(a1 + 8),
    16LL,
    5LL,
    (__int64 (__fastcall *)(__int64))_Stl_critical_section::_Stl_critical_section);
  v3 = 0;
  v4 = 0LL;
  v5 = 0LL;
  do
  {
    v6 = sub_18001B098(1096LL);
    v7 = v6;
    v11 = v6;
    if ( v6 )
    {
      *(_OWORD *)v6 = 0LL;
      *(_DWORD *)(v6 + 8) = 1;
      *(_DWORD *)(v6 + 12) = 1;
      *(_QWORD *)v6 = &std::_Ref_count_obj2<Spectre::Engine::GpuProfilerFrame>::`vftable';
      sub_180095360();
    }
    else
    {
      v7 = 0LL;
    }
    a1[v5 + 8] = v7 + 16;
    v8 = a1[v5 + 9];
    a1[v5 + 9] = v7;
    if ( v8 )
      sub_18001050C(v8);
    a1[v4 + 18] = 0LL;
    v10 = (int)v3;
    sub_180095468((__int64)(a1 + 1), &v10);
    ++v3;
    v5 += 2LL;
    ++v4;
  }
  while ( v3 < 5 );
  return a1;
}
