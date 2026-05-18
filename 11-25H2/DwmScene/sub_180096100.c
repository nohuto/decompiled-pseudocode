/*
 * XREFs of sub_180096100 @ 0x180096100
 * Callers:
 *     sub_180024E70 @ 0x180024E70 (sub_180024E70.c)
 * Callees:
 *     sub_180011B8C @ 0x180011B8C (sub_180011B8C.c)
 *     sub_18001BD84 @ 0x18001BD84 (sub_18001BD84.c)
 *     sub_18001C99C @ 0x18001C99C (sub_18001C99C.c)
 *     sub_180027FBC @ 0x180027FBC (sub_180027FBC.c)
 *     sub_18002815C @ 0x18002815C (sub_18002815C.c)
 *     sub_18002909C @ 0x18002909C (sub_18002909C.c)
 *     sub_180029A60 @ 0x180029A60 (sub_180029A60.c)
 *     sub_180095338 @ 0x180095338 (sub_180095338.c)
 *     sub_180095468 @ 0x180095468 (sub_180095468.c)
 *     sub_1800964CC @ 0x1800964CC (sub_1800964CC.c)
 *     sub_180097A70 @ 0x180097A70 (sub_180097A70.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180096100(__int64 a1)
{
  char v2; // r14
  __int64 v3; // rbx
  _QWORD *v4; // rax
  _QWORD *v5; // r9
  __int64 *v6; // rax
  __int64 v8; // [rsp+30h] [rbp-99h] BYREF
  _BYTE v9[8]; // [rsp+38h] [rbp-91h] BYREF
  _BYTE v10[16]; // [rsp+40h] [rbp-89h] BYREF
  _BYTE v11[136]; // [rsp+50h] [rbp-79h] BYREF
  void *v12[9]; // [rsp+D8h] [rbp+Fh] BYREF
  __int64 v13; // [rsp+130h] [rbp+67h] BYREF
  __int64 v14; // [rsp+140h] [rbp+77h] BYREF
  __int64 v15; // [rsp+148h] [rbp+7Fh]

  v15 = a1;
  sub_180027FBC(a1);
  v14 = 500LL;
  sub_180011B8C(&v13);
  sub_180029A60((__int64)v11);
  v2 = 0;
  v3 = **(_QWORD **)(a1 + 48);
LABEL_2:
  while ( v3 != *(_QWORD *)(a1 + 48) && !v2 )
  {
    while ( 1 )
    {
      sub_180011B8C(&v8);
      v4 = sub_180095338((__int64)v9, (__int64)&v14);
      if ( *v5 - v13 >= *v4 )
        break;
      if ( (unsigned int)sub_180097A70(*(_QWORD *)(a1 + 16 * (*(_QWORD *)(v3 + 32) + 4LL)), v11) == 3 )
      {
        sub_180095468(a1 + 8, (__int64 *)(v3 + 32));
        v3 = *(_QWORD *)sub_1800964CC(a1 + 48, v10, v3);
        goto LABEL_2;
      }
      Thrd_yield();
    }
    sub_18001C99C(&stru_1801B8488, 4);
    v2 = 1;
  }
  v6 = sub_180011B8C(&v14);
  v13 = *v6 - v13;
  sub_18001BD84(&v14, &v13);
  sub_18001C99C(&stru_1801B8488, 2);
  sub_18002909C(v12, (__int64)v12);
  return sub_18002815C(a1);
}
