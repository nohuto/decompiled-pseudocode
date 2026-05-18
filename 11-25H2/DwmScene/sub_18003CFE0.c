/*
 * XREFs of sub_18003CFE0 @ 0x18003CFE0
 * Callers:
 *     sub_18003F9D8 @ 0x18003F9D8 (sub_18003F9D8.c)
 * Callees:
 *     sub_18001CA04 @ 0x18001CA04 (sub_18001CA04.c)
 *     sub_18003CE3C @ 0x18003CE3C (sub_18003CE3C.c)
 *     sub_18003CF94 @ 0x18003CF94 (sub_18003CF94.c)
 *     sub_18003D110 @ 0x18003D110 (sub_18003D110.c)
 *     sub_18003D454 @ 0x18003D454 (sub_18003D454.c)
 *     sub_18003D858 @ 0x18003D858 (sub_18003D858.c)
 *     sub_18003FE5C @ 0x18003FE5C (sub_18003FE5C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18003CFE0(__int64 *a1, __int64 a2, void *a3)
{
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rbx
  _BYTE v12[8]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v13; // [rsp+38h] [rbp-28h]
  __int128 v14; // [rsp+40h] [rbp-20h] BYREF
  __int64 v15; // [rsp+50h] [rbp-10h]
  void *v16; // [rsp+90h] [rbp+30h] BYREF

  v16 = a3;
  sub_18003CE3C((__int64)a1, (__int64 **)&v14, (__int64)&unk_1801C4028);
  v5 = v15;
  if ( sub_18003CF94(v6, v15) )
  {
    *(_QWORD *)a2 = v5;
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    sub_18003FE5C(a1);
    v16 = &unk_1801C4028;
    v7 = *a1;
    sub_18003D454(v12, a1);
    sub_18003D110(v8, v13 + 32, v9, &v16);
    *(_QWORD *)v13 = v7;
    *(_QWORD *)(v13 + 8) = v7;
    *(_QWORD *)(v13 + 16) = v7;
    *(_BYTE *)(v13 + 24) = 0;
    *(_BYTE *)(v13 + 25) = 0;
    v10 = v13;
    v13 = 0LL;
    sub_18003D858(v12);
    *(_QWORD *)a2 = sub_18001CA04((__int64)a1, (__int64)&v14, v10);
    *(_BYTE *)(a2 + 8) = 1;
  }
  return a2;
}
