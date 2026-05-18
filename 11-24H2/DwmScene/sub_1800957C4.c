/*
 * XREFs of sub_1800957C4 @ 0x1800957C4
 * Callers:
 *     sub_180028C7C @ 0x180028C7C (sub_180028C7C.c)
 * Callees:
 *     sub_18000CD2C @ 0x18000CD2C (sub_18000CD2C.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 *     sub_180023FEC @ 0x180023FEC (sub_180023FEC.c)
 *     sub_18006CFA0 @ 0x18006CFA0 (sub_18006CFA0.c)
 *     sub_1800954C0 @ 0x1800954C0 (sub_1800954C0.c)
 *     sub_1800955C8 @ 0x1800955C8 (sub_1800955C8.c)
 *     sub_18009577C @ 0x18009577C (sub_18009577C.c)
 */

// Hidden C++ exception states: #wind=6
_QWORD *__fastcall sub_1800957C4(_QWORD *a1)
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

  sub_180023FEC(a1);
  v10 = (__int64)(a1 + 1);
  a1[1] = 0LL;
  a1[2] = 0LL;
  a1[3] = 0LL;
  a1[4] = 0LL;
  a1[5] = 0LL;
  sub_18006CFA0(a1 + 1, v2);
  sub_18009577C(a1 + 6);
  sub_18000CD2C(
    (__int64)(a1 + 8),
    16LL,
    5LL,
    (__int64 (__fastcall *)(__int64))_Stl_critical_section::_Stl_critical_section);
  v3 = 0;
  v4 = 0LL;
  v5 = 0LL;
  do
  {
    v6 = sub_18001B1F8(1096LL);
    v7 = v6;
    v11 = v6;
    if ( v6 )
    {
      *(_OWORD *)v6 = 0LL;
      *(_DWORD *)(v6 + 8) = 1;
      *(_DWORD *)(v6 + 12) = 1;
      *(_QWORD *)v6 = &std::_Ref_count_obj2<Spectre::Engine::GpuProfilerFrame>::`vftable';
      sub_1800954C0();
    }
    else
    {
      v7 = 0LL;
    }
    a1[v5 + 8] = v7 + 16;
    v8 = a1[v5 + 9];
    a1[v5 + 9] = v7;
    if ( v8 )
      sub_18001060C(v8);
    a1[v4 + 18] = 0LL;
    v10 = (int)v3;
    sub_1800955C8((__int64)(a1 + 1), &v10);
    ++v3;
    v5 += 2LL;
    ++v4;
  }
  while ( v3 < 5 );
  return a1;
}
