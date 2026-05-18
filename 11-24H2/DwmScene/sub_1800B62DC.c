/*
 * XREFs of sub_1800B62DC @ 0x1800B62DC
 * Callers:
 *     sub_1800B9760 @ 0x1800B9760 (sub_1800B9760.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180010BE8 @ 0x180010BE8 (sub_180010BE8.c)
 *     sub_180011044 @ 0x180011044 (sub_180011044.c)
 *     sub_180011D64 @ 0x180011D64 (sub_180011D64.c)
 *     sub_180016AB8 @ 0x180016AB8 (sub_180016AB8.c)
 *     sub_180017658 @ 0x180017658 (sub_180017658.c)
 *     sub_1800258AC @ 0x1800258AC (sub_1800258AC.c)
 *     sub_1800285A4 @ 0x1800285A4 (sub_1800285A4.c)
 *     sub_18002894C @ 0x18002894C (sub_18002894C.c)
 *     sub_1800B818C @ 0x1800B818C (sub_1800B818C.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall sub_1800B62DC(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v9; // rax
  __int64 *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rdx
  _QWORD *v14; // rax
  __int64 v16; // [rsp+28h] [rbp-58h] BYREF
  __int64 v17; // [rsp+30h] [rbp-50h]
  __int128 v18; // [rsp+38h] [rbp-48h] BYREF
  _QWORD v19[2]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v20; // [rsp+58h] [rbp-28h] BYREF
  char v21; // [rsp+60h] [rbp-20h]
  __int64 v22; // [rsp+68h] [rbp-18h] BYREF
  __int64 v23; // [rsp+70h] [rbp-10h]

  sub_18002894C((__int64)(a1 + 3), (__int64)a2);
  v20 = 0LL;
  v21 = 0;
  if ( a1[456] )
  {
    v9 = sub_1800258AC((__int64)a1, (__int64)v19);
    sub_180017658((__int64)&v20, v9);
    sub_180011044((__int64)v19);
  }
  sub_1800B818C(a2, a3, a4, a5, 0);
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 16LL))(*a2);
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a2 + 64LL))(*a2, *(_QWORD *)(a3 + 8));
  v10 = a1 + 31;
  v11 = a2[1];
  if ( v11 )
    _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
  v16 = *a2;
  v17 = a2[1];
  v12 = a1[32];
  if ( v12 == a1[33] )
    sub_180016AB8(v10, v12, &v16);
  else
    sub_180010BE8((__int64)v10, &v16);
  if ( v17 )
    sub_18001060C(v17);
  v18 = 0LL;
  v13 = a2[1];
  if ( v13 )
  {
    *(_QWORD *)&v18 = (*a2 + 8LL) & -(__int64)(*a2 != 0LL);
    *((_QWORD *)&v18 + 1) = v13;
    _InterlockedIncrement((volatile signed __int32 *)(v13 + 12));
  }
  v14 = (_QWORD *)sub_180011D64((__int64)(a1 + 1), &v22);
  v19[0] = (*v14 + 24LL) & -(__int64)(*v14 != 0LL);
  v19[1] = v14[1];
  *v14 = 0LL;
  v14[1] = 0LL;
  sub_1800285A4((__int64)v19, (__int64)&v18);
  if ( v23 )
    sub_18001060C(v23);
  sub_180011044((__int64)&v20);
  return a2;
}
