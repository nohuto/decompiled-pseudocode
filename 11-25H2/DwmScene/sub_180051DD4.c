/*
 * XREFs of sub_180051DD4 @ 0x180051DD4
 * Callers:
 *     sub_180051ED8 @ 0x180051ED8 (sub_180051ED8.c)
 * Callees:
 *     sub_18004596C @ 0x18004596C (sub_18004596C.c)
 *     sub_180050C18 @ 0x180050C18 (sub_180050C18.c)
 *     sub_180050D44 @ 0x180050D44 (sub_180050D44.c)
 *     sub_18005226C @ 0x18005226C (sub_18005226C.c)
 *     sub_1800522A8 @ 0x1800522A8 (sub_1800522A8.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180051DD4(_QWORD *a1, unsigned int *a2, unsigned __int64 a3)
{
  unsigned __int64 v5; // rsi
  __int64 v6; // r14
  unsigned __int64 i; // rdi
  __int64 v8; // rcx
  _BYTE *v9; // rdx
  int v11; // [rsp+40h] [rbp-28h] BYREF
  int v12; // [rsp+44h] [rbp-24h]
  unsigned __int64 v13; // [rsp+48h] [rbp-20h] BYREF
  __int64 v14[3]; // [rsp+50h] [rbp-18h] BYREF
  int v15; // [rsp+A8h] [rbp+40h] BYREF
  int v16; // [rsp+B0h] [rbp+48h] BYREF
  int v17; // [rsp+B8h] [rbp+50h] BYREF

  v12 = 0;
  v5 = (a2[5] & 0x10) != 0 ? 6LL : 1LL;
  v6 = a3 / v5;
  v13 = a3 / v5;
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v12 = 1;
  for ( i = 0LL; i < v5; ++i )
  {
    v15 = 0;
    v16 = sub_1800522A8(a2[4], *a2, a2[1]);
    v17 = sub_18005226C(a2[4], *a2);
    v11 = sub_18004596C(a2[4]);
    v14[0] = v6 * i;
    v9 = (_BYTE *)a1[1];
    if ( v9 == (_BYTE *)a1[2] )
    {
      sub_180050C18(a1, v9, (int)v14, (int)&v13, (__int64)&v11, (__int64)&v17, (__int64)&v16, (__int64)&v15);
      v6 = v13;
    }
    else
    {
      sub_180050D44(v8, (__int64)v9, v14, (__int64 *)&v13, &v11, &v17, &v16, &v15);
      a1[1] += 32LL;
    }
  }
  return a1;
}
