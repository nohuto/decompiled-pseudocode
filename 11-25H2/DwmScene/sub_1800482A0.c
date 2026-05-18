/*
 * XREFs of sub_1800482A0 @ 0x1800482A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_180012210 @ 0x180012210 (sub_180012210.c)
 *     sub_18001B098 @ 0x18001B098 (sub_18001B098.c)
 *     sub_1800475B8 @ 0x1800475B8 (sub_1800475B8.c)
 *     sub_180048380 @ 0x180048380 (sub_180048380.c)
 */

// Hidden C++ exception states: #wind=3
_OWORD *__fastcall sub_1800482A0(__int64 a1, _OWORD *a2, __int64 a3, _QWORD *a4)
{
  __int64 v8; // rax
  __int64 v9; // rbx
  _QWORD *v10; // rax
  __int64 v11; // rcx
  __int128 v13; // [rsp+28h] [rbp-40h] BYREF
  _QWORD v14[3]; // [rsp+38h] [rbp-30h] BYREF

  v8 = sub_18001B098(208LL);
  v9 = v8;
  if ( v8 )
  {
    *(_OWORD *)v8 = 0LL;
    *(_DWORD *)(v8 + 8) = 1;
    *(_DWORD *)(v8 + 12) = 1;
    *(_QWORD *)v8 = &std::_Ref_count_obj2<Spectre::Engine::MeshInstance>::`vftable';
    sub_1800475B8(v8 + 16, a4);
  }
  else
  {
    v9 = 0LL;
  }
  v13 = 0LL;
  sub_180012210(&v13, v9 + 16, v9);
  v10 = unknown_libname_81(v14, &v13);
  sub_180048380(a1, v10, a3);
  *a2 = v13;
  v11 = a4[1];
  if ( v11 )
    sub_18001050C(v11);
  return a2;
}
