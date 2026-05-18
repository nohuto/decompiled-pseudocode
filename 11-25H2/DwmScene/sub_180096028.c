/*
 * XREFs of sub_180096028 @ 0x180096028
 * Callers:
 *     sub_18002AF10 @ 0x18002AF10 (sub_18002AF10.c)
 * Callees:
 *     sub_18001C2C0 @ 0x18001C2C0 (sub_18001C2C0.c)
 *     sub_180027FBC @ 0x180027FBC (sub_180027FBC.c)
 *     sub_18002815C @ 0x18002815C (sub_18002815C.c)
 *     sub_18002909C @ 0x18002909C (sub_18002909C.c)
 *     sub_180029A60 @ 0x180029A60 (sub_180029A60.c)
 *     sub_180095468 @ 0x180095468 (sub_180095468.c)
 *     sub_1800964CC @ 0x1800964CC (sub_1800964CC.c)
 *     sub_180097A70 @ 0x180097A70 (sub_180097A70.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180096028(__int64 a1)
{
  __int64 v2; // rbx
  _BYTE v4[136]; // [rsp+20h] [rbp-B8h] BYREF
  void *v5[6]; // [rsp+A8h] [rbp-30h] BYREF
  __int64 v6; // [rsp+E0h] [rbp+8h] BYREF
  __int64 v7; // [rsp+E8h] [rbp+10h]
  char v8; // [rsp+F0h] [rbp+18h] BYREF

  v7 = a1;
  sub_180027FBC(a1);
  sub_180029A60((__int64)v4);
  v2 = **(_QWORD **)(a1 + 48);
LABEL_2:
  v6 = v2;
  while ( v2 != *(_QWORD *)(a1 + 48) )
  {
    if ( (unsigned int)sub_180097A70(*(_QWORD *)(a1 + 16 * (*(_QWORD *)(v2 + 32) + 4LL)), v4) == 3 )
    {
      sub_180095468(a1 + 8, (__int64 *)(v2 + 32));
      v2 = *(_QWORD *)sub_1800964CC(a1 + 48, &v8, v2);
      goto LABEL_2;
    }
    sub_18001C2C0(&v6);
    v2 = v6;
  }
  sub_18002909C(v5, (__int64)v5);
  return sub_18002815C(a1);
}
