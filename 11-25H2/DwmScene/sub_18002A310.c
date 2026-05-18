/*
 * XREFs of sub_18002A310 @ 0x18002A310
 * Callers:
 *     sub_18002AF10 @ 0x18002AF10 (sub_18002AF10.c)
 * Callees:
 *     memset @ 0x18000C088 (memset.c)
 *     sub_180028E6C @ 0x180028E6C (sub_180028E6C.c)
 *     sub_180028F84 @ 0x180028F84 (sub_180028F84.c)
 *     sub_18002909C @ 0x18002909C (sub_18002909C.c)
 *     sub_180029390 @ 0x180029390 (sub_180029390.c)
 *     sub_1800293A4 @ 0x1800293A4 (sub_1800293A4.c)
 *     sub_180029A60 @ 0x180029A60 (sub_180029A60.c)
 *     sub_180040290 @ 0x180040290 (sub_180040290.c)
 *     sub_180095D94 @ 0x180095D94 (sub_180095D94.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall sub_18002A310(_QWORD *a1, __int64 *a2)
{
  unsigned __int64 v4; // rdx
  __int64 v5; // r9
  unsigned int v6; // eax
  __int64 v7; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  _BYTE v12[136]; // [rsp+38h] [rbp-D0h] BYREF
  void *v13[3]; // [rsp+C0h] [rbp-48h] BYREF
  void *v14[20]; // [rsp+D8h] [rbp-30h] BYREF

  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  while ( a1[45] < a1[54] )
  {
    sub_180029A60((__int64)v12);
    if ( !(unsigned __int8)sub_180040290(a1[49] + 184LL) || v4 > *(_QWORD *)(v5 + 192) )
      goto LABEL_13;
    v6 = sub_180095D94(v5, v4, v12);
    if ( !v6 )
    {
      v7 = a2[1];
      if ( v7 == a2[2] )
      {
        sub_180028E6C(a2, v7, (__int64)v12);
      }
      else
      {
        sub_180029390(v6, v7, (__int64)v12);
        a2[1] += 152LL;
      }
      goto LABEL_17;
    }
    if ( ((v6 - 2) & 0xFFFFFFFD) != 0 )
    {
      if ( ((v6 - 1) & 0xFFFFFFFD) == 0 )
      {
        sub_18002909C(v13, (__int64)v13);
        return a2;
      }
    }
    else
    {
LABEL_13:
      memset(v14, 0, 0x98uLL);
      v9 = sub_180029A60((__int64)v14);
      v11 = a2[1];
      if ( v11 == a2[2] )
      {
        sub_180028F84(a2, v11, v9);
      }
      else
      {
        sub_1800293A4(v10, v11, v9);
        a2[1] += 152LL;
      }
      sub_18002909C(&v14[17], (__int64)&v14[17]);
    }
LABEL_17:
    ++a1[45];
    sub_18002909C(v13, (__int64)v13);
  }
  return a2;
}
