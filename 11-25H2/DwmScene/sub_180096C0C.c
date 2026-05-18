/*
 * XREFs of sub_180096C0C @ 0x180096C0C
 * Callers:
 *     sub_1800577C8 @ 0x1800577C8 (sub_1800577C8.c)
 *     sub_180057AB0 @ 0x180057AB0 (sub_180057AB0.c)
 *     sub_18006C790 @ 0x18006C790 (sub_18006C790.c)
 *     sub_18006CB88 @ 0x18006CB88 (sub_18006CB88.c)
 *     sub_18008CD40 @ 0x18008CD40 (sub_18008CD40.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180010544 @ 0x180010544 (sub_180010544.c)
 *     sub_1800305B8 @ 0x1800305B8 (sub_1800305B8.c)
 *     sub_180036994 @ 0x180036994 (sub_180036994.c)
 *     sub_1800372BC @ 0x1800372BC (sub_1800372BC.c)
 *     sub_180095BEC @ 0x180095BEC (sub_180095BEC.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_180096C0C(_QWORD *a1, __int64 *a2)
{
  _QWORD *v3; // rax
  __int64 *v4; // rax
  __int64 v6; // [rsp+20h] [rbp-38h] BYREF
  __int64 v7; // [rsp+28h] [rbp-30h]
  __int64 v8; // [rsp+30h] [rbp-28h] BYREF
  volatile signed __int32 *v9; // [rsp+38h] [rbp-20h]
  __int64 v10; // [rsp+40h] [rbp-18h] BYREF
  volatile signed __int32 *v11; // [rsp+48h] [rbp-10h]

  *a1 = 0LL;
  a1[1] = 0LL;
  v3 = sub_1800372BC(*a2, &v8);
  sub_180036994((__int64)v3, &v6);
  if ( v9 )
    sub_180010544(v9);
  if ( v6 )
  {
    v4 = sub_180095BEC(v6, &v10);
    sub_1800305B8(a1, v4);
    if ( v11 )
      sub_180010544(v11);
  }
  if ( v7 )
    sub_18001050C(v7);
  return a1;
}
