/*
 * XREFs of sub_1800BEB08 @ 0x1800BEB08
 * Callers:
 *     sub_1800BDDAC @ 0x1800BDDAC (sub_1800BDDAC.c)
 * Callees:
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 *     sub_18001C2C0 @ 0x18001C2C0 (sub_18001C2C0.c)
 *     sub_180027138 @ 0x180027138 (sub_180027138.c)
 *     sub_18002CD98 @ 0x18002CD98 (sub_18002CD98.c)
 */

_QWORD *__fastcall sub_1800BEB08(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rdi
  __int64 v6; // r10
  __int64 v10; // r10
  __int64 v11; // r10
  __int64 *v12; // rax
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF
  __int64 v14; // [rsp+48h] [rbp+10h] BYREF

  v4 = (_QWORD *)*a1;
  v6 = a3;
  v13 = a3;
  if ( a3 == *v4 && *(_BYTE *)(a4 + 25) )
  {
    sub_18002CD98((__int64)a1, (__int64)a1, v4[1]);
    v4[1] = v4;
    *v4 = v4;
    v4[2] = v4;
    a1[1] = 0LL;
  }
  else
  {
    while ( v6 != a4 )
    {
      sub_18001C2C0(&v13);
      v14 = v10;
      sub_18001C2C0(&v14);
      v12 = sub_180027138(a1, v11);
      sub_180010134(v12, 0x30uLL);
      v6 = v13;
    }
  }
  *a2 = a4;
  return a2;
}
