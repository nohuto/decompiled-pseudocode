/*
 * XREFs of sub_180051F28 @ 0x180051F28
 * Callers:
 *     sub_180051580 @ 0x180051580 (sub_180051580.c)
 *     sub_180051A28 @ 0x180051A28 (sub_180051A28.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011010 @ 0x180011010 (sub_180011010.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_18001244C @ 0x18001244C (sub_18001244C.c)
 *     sub_180015A5C @ 0x180015A5C (sub_180015A5C.c)
 *     sub_180027A8C @ 0x180027A8C (sub_180027A8C.c)
 *     sub_180027C24 @ 0x180027C24 (sub_180027C24.c)
 *     sub_18004099C @ 0x18004099C (sub_18004099C.c)
 *     sub_18005187C @ 0x18005187C (sub_18005187C.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180051F28(__int64 a1, __int64 a2, __int64 a3)
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
  v7 = sub_18004099C(a1 + 112, (__int64)&v16);
  if ( v7 == *(_QWORD *)(a1 + 112) || !*(_QWORD *)(v7 + 40) )
  {
    v8 = sub_180015A5C(a3, &v14);
    sub_180011010(&v13, v8);
    if ( v15 )
      sub_18001050C(v15);
    v9 = unknown_libname_81(&v14, &v13);
    sub_18005187C(a1, v9);
  }
  else
  {
    sub_18001244C((__int64 *)&v13, (_QWORD *)(v7 + 40));
  }
  v10 = sub_180027A8C(a1, (__int64)&v14);
  v11 = v13;
  sub_180027C24(v13, v10);
  result = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v11 + 40LL))(v11, *(_QWORD *)(a1 + 128), a2);
  if ( *((_QWORD *)&v13 + 1) )
    return sub_18001050C(*((__int64 *)&v13 + 1));
  return result;
}
