/*
 * XREFs of sub_180015898 @ 0x180015898
 * Callers:
 *     sub_180018DD0 @ 0x180018DD0 (sub_180018DD0.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180010AE8 @ 0x180010AE8 (sub_180010AE8.c)
 *     sub_180010F44 @ 0x180010F44 (sub_180010F44.c)
 *     sub_180011C64 @ 0x180011C64 (sub_180011C64.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_1800169B8 @ 0x1800169B8 (sub_1800169B8.c)
 *     sub_180016C78 @ 0x180016C78 (sub_180016C78.c)
 *     sub_180017598 @ 0x180017598 (sub_180017598.c)
 *     sub_18002574C @ 0x18002574C (sub_18002574C.c)
 *     sub_180028444 @ 0x180028444 (sub_180028444.c)
 *     sub_1800287EC @ 0x1800287EC (sub_1800287EC.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall sub_180015898(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v13; // rax
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rdx
  _QWORD *v17; // rax
  __int128 v19; // [rsp+50h] [rbp-29h] BYREF
  __int64 v20; // [rsp+60h] [rbp-19h] BYREF
  __int64 v21; // [rsp+68h] [rbp-11h]
  __int64 v22; // [rsp+70h] [rbp-9h] BYREF
  char v23; // [rsp+78h] [rbp-1h]
  __int64 v24; // [rsp+80h] [rbp+7h] BYREF
  __int64 v25; // [rsp+88h] [rbp+Fh]

  sub_1800287EC(a1 + 3);
  v22 = 0LL;
  v23 = 0;
  if ( a1[456] )
  {
    v13 = sub_18002574C(a1, &v24);
    sub_180017598(&v22, v13);
    sub_180010F44((__int64)&v24);
  }
  sub_180016C78((_DWORD)a2, a3, a4, a5, a6, a7, a8, a9);
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 16LL))(*a2);
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a2 + 64LL))(*a2, *(_QWORD *)(a3 + 8));
  unknown_libname_81(&v20, a2);
  v15 = a1[32];
  if ( v15 == a1[33] )
    sub_1800169B8(v14, v15, &v20);
  else
    sub_180010AE8(v14, &v20);
  if ( v21 )
    sub_18001050C(v21);
  v19 = 0LL;
  v16 = a2[1];
  if ( v16 )
  {
    *(_QWORD *)&v19 = (*a2 + 8LL) & -(__int64)(*a2 != 0LL);
    *((_QWORD *)&v19 + 1) = v16;
    _InterlockedIncrement((volatile signed __int32 *)(v16 + 12));
  }
  v17 = (_QWORD *)sub_180011C64((__int64)(a1 + 1), &v24);
  v20 = (*v17 + 24LL) & -(__int64)(*v17 != 0LL);
  v21 = v17[1];
  *v17 = 0LL;
  v17[1] = 0LL;
  sub_180028444(&v20, &v19);
  if ( v25 )
    sub_18001050C(v25);
  sub_180010F44((__int64)&v22);
  return a2;
}
