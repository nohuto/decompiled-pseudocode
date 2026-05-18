/*
 * XREFs of sub_1800971A4 @ 0x1800971A4
 * Callers:
 *     sub_1800975D8 @ 0x1800975D8 (sub_1800975D8.c)
 *     sub_1800983FC @ 0x1800983FC (sub_1800983FC.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_180023E8C @ 0x180023E8C (sub_180023E8C.c)
 *     sub_180025288 @ 0x180025288 (sub_180025288.c)
 *     sub_180096638 @ 0x180096638 (sub_180096638.c)
 *     sub_18009686C @ 0x18009686C (sub_18009686C.c)
 *     sub_18009690C @ 0x18009690C (sub_18009690C.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_1800971A4(__int64 a1, int a2, _QWORD *a3, _QWORD *a4, __int64 a5)
{
  _QWORD *v9; // rax
  _QWORD *v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v14; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v15[5]; // [rsp+30h] [rbp-28h] BYREF

  *(_QWORD *)a1 = &Spectre::Engine::GpuProfilerFrame::MarkerQueryData::`vftable';
  sub_180023E8C((_QWORD *)(a1 + 8));
  *(_DWORD *)(a1 + 16) = a2;
  *(_QWORD *)(a1 + 24) = a5;
  sub_180025288(a5, a1 + 32, 1u);
  sub_180096638(a1 + 216);
  if ( sub_18009686C(a1 + 32) )
  {
    unknown_libname_81(&v14, a4);
    v9 = unknown_libname_81(v15, a3);
    sub_18009690C(a1 + 32, v9, v10);
  }
  v11 = a3[1];
  if ( v11 )
    sub_18001050C(v11);
  v12 = a4[1];
  if ( v12 )
    sub_18001050C(v12);
  return a1;
}
