/*
 * XREFs of sub_1800CF540 @ 0x1800CF540
 * Callers:
 *     sub_1800CDE88 @ 0x1800CDE88 (sub_1800CDE88.c)
 *     sub_1800CE11C @ 0x1800CE11C (sub_1800CE11C.c)
 *     sub_1800CE3F4 @ 0x1800CE3F4 (sub_1800CE3F4.c)
 *     sub_1800CE734 @ 0x1800CE734 (sub_1800CE734.c)
 *     sub_1800D0150 @ 0x1800D0150 (sub_1800D0150.c)
 * Callees:
 *     sub_18001CA04 @ 0x18001CA04 (sub_18001CA04.c)
 *     sub_18003CE3C @ 0x18003CE3C (sub_18003CE3C.c)
 *     sub_18003CF94 @ 0x18003CF94 (sub_18003CF94.c)
 *     sub_1800CF92C @ 0x1800CF92C (sub_1800CF92C.c)
 *     sub_1800CFA84 @ 0x1800CFA84 (sub_1800CFA84.c)
 *     sub_1800CFD98 @ 0x1800CFD98 (sub_1800CFD98.c)
 *     sub_1800D0C4C @ 0x1800D0C4C (sub_1800D0C4C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800CF540(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rbx
  _BYTE v13[8]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v14; // [rsp+38h] [rbp-28h]
  __int128 v15; // [rsp+40h] [rbp-20h] BYREF
  __int64 v16; // [rsp+50h] [rbp-10h]
  __int64 v17; // [rsp+98h] [rbp+38h] BYREF

  sub_18003CE3C((__int64)a1, (__int64 **)&v15, a3);
  v6 = v16;
  if ( sub_18003CF94(v7, v16) )
  {
    *(_QWORD *)a2 = v6;
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    sub_1800D0C4C(a1);
    v17 = a3;
    v8 = *a1;
    sub_1800CFA84(v13, a1);
    sub_1800CF92C(v9, v14 + 32, v10, &v17);
    *(_QWORD *)v14 = v8;
    *(_QWORD *)(v14 + 8) = v8;
    *(_QWORD *)(v14 + 16) = v8;
    *(_BYTE *)(v14 + 24) = 0;
    *(_BYTE *)(v14 + 25) = 0;
    v11 = v14;
    v14 = 0LL;
    sub_1800CFD98(v13);
    *(_QWORD *)a2 = sub_18001CA04((__int64)a1, (__int64)&v15, v11);
    *(_BYTE *)(a2 + 8) = 1;
  }
  return a2;
}
