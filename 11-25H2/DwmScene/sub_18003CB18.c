/*
 * XREFs of sub_18003CB18 @ 0x18003CB18
 * Callers:
 *     sub_18003E14C @ 0x18003E14C (sub_18003E14C.c)
 * Callees:
 *     sub_18001CA04 @ 0x18001CA04 (sub_18001CA04.c)
 *     sub_18003CE3C @ 0x18003CE3C (sub_18003CE3C.c)
 *     sub_18003CF94 @ 0x18003CF94 (sub_18003CF94.c)
 *     sub_18003D0D8 @ 0x18003D0D8 (sub_18003D0D8.c)
 *     sub_18003D454 @ 0x18003D454 (sub_18003D454.c)
 *     sub_18003D858 @ 0x18003D858 (sub_18003D858.c)
 *     sub_18003FE5C @ 0x18003FE5C (sub_18003FE5C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18003CB18(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rax
  __int128 v9; // xmm6
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rbx
  _BYTE v16[8]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v17; // [rsp+28h] [rbp-38h]
  __int128 v18; // [rsp+30h] [rbp-30h] BYREF
  __int64 v19; // [rsp+40h] [rbp-20h]

  v8 = sub_18003CE3C(a1, &v18);
  v9 = *(_OWORD *)v8;
  v19 = *(_QWORD *)(v8 + 16);
  v10 = v19;
  if ( (unsigned __int8)sub_18003CF94(v11, v19, a3) )
  {
    *(_QWORD *)a2 = v10;
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    sub_18003FE5C(a1);
    v12 = *a1;
    sub_18003D454(v16, a1);
    sub_18003D0D8(v13, v17 + 32, a3, a4);
    *(_QWORD *)v17 = v12;
    *(_QWORD *)(v17 + 8) = v12;
    *(_QWORD *)(v17 + 16) = v12;
    *(_BYTE *)(v17 + 24) = 0;
    *(_BYTE *)(v17 + 25) = 0;
    v14 = v17;
    v17 = 0LL;
    sub_18003D858(v16);
    v18 = v9;
    *(_QWORD *)a2 = sub_18001CA04((__int64)a1, (__int64)&v18, v14);
    *(_BYTE *)(a2 + 8) = 1;
  }
  return a2;
}
