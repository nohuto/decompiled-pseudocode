/*
 * XREFs of sub_1800B617C @ 0x1800B617C
 * Callers:
 *     sub_1800B9600 @ 0x1800B9600 (sub_1800B9600.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180010AE8 @ 0x180010AE8 (sub_180010AE8.c)
 *     sub_180010F44 @ 0x180010F44 (sub_180010F44.c)
 *     sub_180011C64 @ 0x180011C64 (sub_180011C64.c)
 *     sub_1800169B8 @ 0x1800169B8 (sub_1800169B8.c)
 *     sub_180017598 @ 0x180017598 (sub_180017598.c)
 *     sub_18002574C @ 0x18002574C (sub_18002574C.c)
 *     sub_180028444 @ 0x180028444 (sub_180028444.c)
 *     sub_1800287EC @ 0x1800287EC (sub_1800287EC.c)
 *     sub_1800B802C @ 0x1800B802C (sub_1800B802C.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall sub_1800B617C(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5)
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

  sub_1800287EC((__int64)(a1 + 3), (__int64)a2);
  v20 = 0LL;
  v21 = 0;
  if ( a1[456] )
  {
    v9 = sub_18002574C((__int64)a1, (__int64)v19);
    sub_180017598((__int64)&v20, v9);
    sub_180010F44((__int64)v19);
  }
  sub_1800B802C(a2, a3, a4, a5, 0);
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
    sub_1800169B8(v10, v12, &v16);
  else
    sub_180010AE8((__int64)v10, &v16);
  if ( v17 )
    sub_18001050C(v17);
  v18 = 0LL;
  v13 = a2[1];
  if ( v13 )
  {
    *(_QWORD *)&v18 = (*a2 + 8LL) & -(__int64)(*a2 != 0LL);
    *((_QWORD *)&v18 + 1) = v13;
    _InterlockedIncrement((volatile signed __int32 *)(v13 + 12));
  }
  v14 = (_QWORD *)sub_180011C64((__int64)(a1 + 1), &v22);
  v19[0] = (*v14 + 24LL) & -(__int64)(*v14 != 0LL);
  v19[1] = v14[1];
  *v14 = 0LL;
  v14[1] = 0LL;
  sub_180028444((__int64)v19, (__int64)&v18);
  if ( v23 )
    sub_18001050C(v23);
  sub_180010F44((__int64)&v20);
  return a2;
}
