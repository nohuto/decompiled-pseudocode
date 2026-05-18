/*
 * XREFs of sub_180097304 @ 0x180097304
 * Callers:
 *     sub_180097738 @ 0x180097738 (sub_180097738.c)
 *     sub_18009855C @ 0x18009855C (sub_18009855C.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180023FEC @ 0x180023FEC (sub_180023FEC.c)
 *     sub_1800253E8 @ 0x1800253E8 (sub_1800253E8.c)
 *     sub_180096798 @ 0x180096798 (sub_180096798.c)
 *     sub_1800969CC @ 0x1800969CC (sub_1800969CC.c)
 *     sub_180096A6C @ 0x180096A6C (sub_180096A6C.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_180097304(__int64 a1, int a2, _QWORD *a3, _QWORD *a4, __int64 a5)
{
  _QWORD *v9; // rax
  _QWORD *v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v14; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v15[5]; // [rsp+30h] [rbp-28h] BYREF

  *(_QWORD *)a1 = &Spectre::Engine::GpuProfilerFrame::MarkerQueryData::`vftable';
  sub_180023FEC((_QWORD *)(a1 + 8));
  *(_DWORD *)(a1 + 16) = a2;
  *(_QWORD *)(a1 + 24) = a5;
  sub_1800253E8(a5, a1 + 32, 1u);
  sub_180096798(a1 + 216);
  if ( sub_1800969CC(a1 + 32) )
  {
    unknown_libname_81(&v14, a4);
    v9 = unknown_libname_81(v15, a3);
    sub_180096A6C(a1 + 32, v9, v10);
  }
  v11 = a3[1];
  if ( v11 )
    sub_18001060C(v11);
  v12 = a4[1];
  if ( v12 )
    sub_18001060C(v12);
  return a1;
}
