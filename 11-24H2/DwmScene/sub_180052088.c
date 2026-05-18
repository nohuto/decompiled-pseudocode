/*
 * XREFs of sub_180052088 @ 0x180052088
 * Callers:
 *     sub_1800516E0 @ 0x1800516E0 (sub_1800516E0.c)
 *     sub_180051B88 @ 0x180051B88 (sub_180051B88.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011110 @ 0x180011110 (sub_180011110.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_18001254C @ 0x18001254C (sub_18001254C.c)
 *     sub_180015B5C @ 0x180015B5C (sub_180015B5C.c)
 *     sub_180027BEC @ 0x180027BEC (sub_180027BEC.c)
 *     sub_180027D84 @ 0x180027D84 (sub_180027D84.c)
 *     sub_180040AFC @ 0x180040AFC (sub_180040AFC.c)
 *     sub_1800519DC @ 0x1800519DC (sub_1800519DC.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180052088(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // eax
  __int64 v7; // rax
  __int64 *v8; // rax
  __int64 *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 result; // rax
  __int128 v13; // [rsp+20h] [rbp-30h] BYREF
  __int64 v14; // [rsp+30h] [rbp-20h] BYREF
  __int64 v15; // [rsp+38h] [rbp-18h]
  int v16; // [rsp+70h] [rbp+20h] BYREF

  v6 = *(_DWORD *)(a3 + 244);
  v13 = 0LL;
  v16 = v6;
  v7 = sub_180040AFC(a1 + 112, (__int64)&v16);
  if ( v7 == *(_QWORD *)(a1 + 112) || !*(_QWORD *)(v7 + 40) )
  {
    v8 = sub_180015B5C(a3, &v14);
    sub_180011110(&v13, v8);
    if ( v15 )
      sub_18001060C(v15);
    v9 = unknown_libname_81(&v14, &v13);
    sub_1800519DC(a1, v9);
  }
  else
  {
    sub_18001254C((__int64 *)&v13, (_QWORD *)(v7 + 40));
  }
  v10 = sub_180027BEC(a1, (__int64)&v14);
  v11 = v13;
  sub_180027D84(v13, v10);
  result = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v11 + 40LL))(v11, *(_QWORD *)(a1 + 128), a2);
  if ( *((_QWORD *)&v13 + 1) )
    return sub_18001060C(*((__int64 *)&v13 + 1));
  return result;
}
