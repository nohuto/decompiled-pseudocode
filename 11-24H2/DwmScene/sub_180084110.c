/*
 * XREFs of sub_180084110 @ 0x180084110
 * Callers:
 *     sub_180084830 @ 0x180084830 (sub_180084830.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_18002563C @ 0x18002563C (sub_18002563C.c)
 *     sub_1800840E8 @ 0x1800840E8 (sub_1800840E8.c)
 */

_QWORD *__fastcall sub_180084110(__int64 a1, _QWORD *a2)
{
  __int64 *v3; // r9
  char v4; // bl
  __int64 v5; // rax
  __int64 v6; // rax
  char v8; // [rsp+20h] [rbp-38h] BYREF
  __int64 v9; // [rsp+28h] [rbp-30h]
  __int64 v10; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11; // [rsp+38h] [rbp-20h]
  __int64 v12; // [rsp+40h] [rbp-18h] BYREF
  __int64 v13; // [rsp+48h] [rbp-10h]

  sub_1800840E8(a1, &v10);
  if ( v10 )
  {
    v3 = (__int64 *)sub_18002563C(v10, &v12);
    v4 = 1;
    v5 = *v3;
  }
  else
  {
    v9 = 0LL;
    v3 = (__int64 *)&v8;
    v5 = 0LL;
    v4 = 2;
  }
  *v3 = 0LL;
  *a2 = v5;
  v6 = v3[1];
  v3[1] = 0LL;
  a2[1] = v6;
  if ( (v4 & 2) != 0 )
  {
    v4 &= ~2u;
    if ( v9 )
      sub_18001060C(v9);
  }
  if ( (v4 & 1) != 0 && v13 )
    sub_18001060C(v13);
  if ( v11 )
    sub_18001060C(v11);
  return a2;
}
