/*
 * XREFs of sub_180030D14 @ 0x180030D14
 * Callers:
 *     sub_180030E70 @ 0x180030E70 (sub_180030E70.c)
 *     sub_18005F890 @ 0x18005F890 (sub_18005F890.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180010644 @ 0x180010644 (sub_180010644.c)
 *     sub_180010BE8 @ 0x180010BE8 (sub_180010BE8.c)
 *     sub_180011C04 @ 0x180011C04 (sub_180011C04.c)
 *     sub_18001268C @ 0x18001268C (sub_18001268C.c)
 *     sub_180015274 @ 0x180015274 (sub_180015274.c)
 *     sub_18002CBC4 @ 0x18002CBC4 (sub_18002CBC4.c)
 *     sub_18002E2D8 @ 0x18002E2D8 (sub_18002E2D8.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180030D14(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v11; // [rsp+20h] [rbp-30h] BYREF
  __int64 v12; // [rsp+28h] [rbp-28h]
  __int64 v13; // [rsp+30h] [rbp-20h] BYREF
  volatile signed __int32 *v14; // [rsp+38h] [rbp-18h]
  _BYTE v15[16]; // [rsp+40h] [rbp-10h] BYREF

  sub_180011C04(*a2 + 56LL, &v13);
  sub_18001268C(v13, &v11);
  if ( v14 )
    sub_18001060C((__int64)v14);
  sub_180015274(&v13, &v11);
  v4 = sub_18002E2D8((__int64 *)(a1 + 728), (__int64)v15, (__int64)&v13);
  v5 = (__int64 *)(*(_QWORD *)v4 + 48LL);
  v6 = *(_QWORD *)(*(_QWORD *)v4 + 56LL);
  if ( v6 == *(_QWORD *)(*(_QWORD *)v4 + 64LL) )
    sub_18002CBC4(v5, v6, a2);
  else
    sub_180010BE8((__int64)v5, a2);
  if ( v14 )
    sub_180010644(v14);
  sub_180015274(&v13, &v11);
  v7 = sub_18002E2D8((__int64 *)(a1 + 728), (__int64)v15, (__int64)&v13);
  v8 = (__int64)(*(_QWORD *)(*(_QWORD *)v7 + 56LL) - *(_QWORD *)(*(_QWORD *)v7 + 48LL)) >> 4;
  if ( v14 )
    sub_180010644(v14);
  if ( v12 )
    sub_18001060C(v12);
  v9 = a2[1];
  if ( v9 )
    sub_18001060C(v9);
  return v8 - 1;
}
