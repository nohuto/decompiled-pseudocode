/*
 * XREFs of sub_1800CA800 @ 0x1800CA800
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E854 @ 0x18000E854 (sub_18000E854.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011B04 @ 0x180011B04 (sub_180011B04.c)
 *     sub_1800BEC70 @ 0x1800BEC70 (sub_1800BEC70.c)
 *     sub_1800CA91C @ 0x1800CA91C (sub_1800CA91C.c)
 */

__int64 __fastcall sub_1800CA800(__int64 a1, __int64 a2)
{
  int v4; // edx
  int v5; // r11d
  __int64 *v6; // rax
  __int64 v8; // [rsp+30h] [rbp-18h] BYREF
  __int64 v9; // [rsp+38h] [rbp-10h]
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF

  sub_180011B04(a1 + 72, &v8);
  v6 = (__int64 *)sub_1800CA91C((unsigned int)&v10, v4, v8, v5, a2, 2);
  sub_1800BEC70((__int64 *)(a1 + 104), v6);
  sub_18000E854(&v10);
  if ( v9 )
    sub_18001050C(v9);
  return sub_180027BB8(a1, *(unsigned int *)(*(_QWORD *)(a1 + 96) + 12LL), 6);
}
