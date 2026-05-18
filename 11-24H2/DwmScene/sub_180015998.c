/*
 * XREFs of sub_180015998 @ 0x180015998
 * Callers:
 *     sub_180018E90 @ 0x180018E90 (sub_180018E90.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180010BE8 @ 0x180010BE8 (sub_180010BE8.c)
 *     sub_180011044 @ 0x180011044 (sub_180011044.c)
 *     sub_180011D64 @ 0x180011D64 (sub_180011D64.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180016AB8 @ 0x180016AB8 (sub_180016AB8.c)
 *     sub_180016D78 @ 0x180016D78 (sub_180016D78.c)
 *     sub_180017658 @ 0x180017658 (sub_180017658.c)
 *     sub_1800258AC @ 0x1800258AC (sub_1800258AC.c)
 *     sub_1800285A4 @ 0x1800285A4 (sub_1800285A4.c)
 *     sub_18002894C @ 0x18002894C (sub_18002894C.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall sub_180015998(
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

  sub_18002894C(a1 + 3);
  v22 = 0LL;
  v23 = 0;
  if ( a1[456] )
  {
    v13 = sub_1800258AC(a1, &v24);
    sub_180017658(&v22, v13);
    sub_180011044((__int64)&v24);
  }
  sub_180016D78((_DWORD)a2, a3, a4, a5, a6, a7, a8, a9);
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 16LL))(*a2);
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a2 + 64LL))(*a2, *(_QWORD *)(a3 + 8));
  unknown_libname_81(&v20, a2);
  v15 = a1[32];
  if ( v15 == a1[33] )
    sub_180016AB8(v14, v15, &v20);
  else
    sub_180010BE8(v14, &v20);
  if ( v21 )
    sub_18001060C(v21);
  v19 = 0LL;
  v16 = a2[1];
  if ( v16 )
  {
    *(_QWORD *)&v19 = (*a2 + 8LL) & -(__int64)(*a2 != 0LL);
    *((_QWORD *)&v19 + 1) = v16;
    _InterlockedIncrement((volatile signed __int32 *)(v16 + 12));
  }
  v17 = (_QWORD *)sub_180011D64((__int64)(a1 + 1), &v24);
  v20 = (*v17 + 24LL) & -(__int64)(*v17 != 0LL);
  v21 = v17[1];
  *v17 = 0LL;
  v17[1] = 0LL;
  sub_1800285A4(&v20, &v19);
  if ( v25 )
    sub_18001060C(v25);
  sub_180011044((__int64)&v22);
  return a2;
}
