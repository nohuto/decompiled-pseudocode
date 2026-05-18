/*
 * XREFs of sub_180040620 @ 0x180040620
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180012310 @ 0x180012310 (sub_180012310.c)
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 *     sub_1800403FC @ 0x1800403FC (sub_1800403FC.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=3
_OWORD *__fastcall sub_180040620(__int64 a1, _OWORD *a2, __int64 a3, _QWORD *a4)
{
  __int64 v8; // rax
  __int64 v9; // rbx
  _QWORD *v10; // rax
  void (__fastcall *v11)(__int64, _QWORD *, __int64); // r9
  __int64 v12; // rcx
  __int128 v14; // [rsp+28h] [rbp-40h] BYREF
  _QWORD v15[3]; // [rsp+38h] [rbp-30h] BYREF

  v8 = sub_18001B1F8(152LL);
  v9 = v8;
  if ( v8 )
  {
    *(_OWORD *)v8 = 0LL;
    *(_DWORD *)(v8 + 8) = 1;
    *(_DWORD *)(v8 + 12) = 1;
    *(_QWORD *)v8 = &std::_Ref_count_obj2<Spectre::Engine::Light>::`vftable';
    sub_1800403FC(v8 + 16, a4);
  }
  else
  {
    v9 = 0LL;
  }
  v14 = 0LL;
  sub_180012310(&v14, v9 + 16, v9);
  v10 = unknown_libname_81(v15, &v14);
  v11(a1, v10, a3);
  *a2 = v14;
  v12 = a4[1];
  if ( v12 )
    sub_18001060C(v12);
  return a2;
}
