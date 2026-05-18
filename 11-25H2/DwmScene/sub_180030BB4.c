/*
 * XREFs of sub_180030BB4 @ 0x180030BB4
 * Callers:
 *     sub_180030D10 @ 0x180030D10 (sub_180030D10.c)
 *     sub_18005F730 @ 0x18005F730 (sub_18005F730.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180010544 @ 0x180010544 (sub_180010544.c)
 *     sub_180010AE8 @ 0x180010AE8 (sub_180010AE8.c)
 *     sub_180011B04 @ 0x180011B04 (sub_180011B04.c)
 *     sub_18001258C @ 0x18001258C (sub_18001258C.c)
 *     sub_180015174 @ 0x180015174 (sub_180015174.c)
 *     sub_18002CA64 @ 0x18002CA64 (sub_18002CA64.c)
 *     sub_18002E178 @ 0x18002E178 (sub_18002E178.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180030BB4(__int64 a1, _QWORD *a2)
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

  sub_180011B04(*a2 + 56LL, &v13);
  sub_18001258C(v13, &v11);
  if ( v14 )
    sub_18001050C((__int64)v14);
  sub_180015174(&v13, &v11);
  v4 = sub_18002E178((__int64 *)(a1 + 728), (__int64)v15, (__int64)&v13);
  v5 = (__int64 *)(*(_QWORD *)v4 + 48LL);
  v6 = *(_QWORD *)(*(_QWORD *)v4 + 56LL);
  if ( v6 == *(_QWORD *)(*(_QWORD *)v4 + 64LL) )
    sub_18002CA64(v5, v6, a2);
  else
    sub_180010AE8((__int64)v5, a2);
  if ( v14 )
    sub_180010544(v14);
  sub_180015174(&v13, &v11);
  v7 = sub_18002E178((__int64 *)(a1 + 728), (__int64)v15, (__int64)&v13);
  v8 = (__int64)(*(_QWORD *)(*(_QWORD *)v7 + 56LL) - *(_QWORD *)(*(_QWORD *)v7 + 48LL)) >> 4;
  if ( v14 )
    sub_180010544(v14);
  if ( v12 )
    sub_18001050C(v12);
  v9 = a2[1];
  if ( v9 )
    sub_18001050C(v9);
  return v8 - 1;
}
