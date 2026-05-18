/*
 * XREFs of sub_1800CF78C @ 0x1800CF78C
 * Callers:
 *     sub_1800D0130 @ 0x1800D0130 (sub_1800D0130.c)
 * Callees:
 *     sub_1800131AC @ 0x1800131AC (sub_1800131AC.c)
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 *     sub_18001E5E0 @ 0x18001E5E0 (sub_18001E5E0.c)
 *     sub_180040254 @ 0x180040254 (sub_180040254.c)
 *     sub_18005DD38 @ 0x18005DD38 (sub_18005DD38.c)
 *     sub_180068010 @ 0x180068010 (sub_180068010.c)
 *     sub_1800CFA60 @ 0x1800CFA60 (sub_1800CFA60.c)
 *     sub_1800CFE24 @ 0x1800CFE24 (sub_1800CFE24.c)
 *     sub_1800D0DD4 @ 0x1800D0DD4 (sub_1800D0DD4.c)
 *     sub_1800D10A0 @ 0x1800D10A0 (sub_1800D10A0.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800CF78C(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rbp
  _QWORD *v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // r8
  __int128 v14; // [rsp+30h] [rbp-38h] BYREF
  _QWORD *v15; // [rsp+40h] [rbp-28h] BYREF
  _QWORD *v16; // [rsp+48h] [rbp-20h]
  __int64 v17; // [rsp+70h] [rbp+8h] BYREF

  v6 = sub_1800131AC(a3);
  v9 = sub_18001E5E0(v8, v6, 2 * v7);
  sub_18005DD38(a1, &v14, a3, v9);
  if ( *((_QWORD *)&v14 + 1) )
  {
    *(_QWORD *)a2 = *((_QWORD *)&v14 + 1);
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    sub_1800D0DD4(a1);
    v17 = a3;
    v15 = a1 + 1;
    v10 = (_QWORD *)sub_18001B1F8(176LL);
    v16 = v10;
    sub_1800CFA60(v11, v10 + 2, v12, &v17);
    if ( sub_180068010((__int64)a1) )
    {
      sub_1800D10A0(a1);
      v14 = *(_OWORD *)sub_18005DD38(a1, &v14, (__int64)(v10 + 2), v9);
    }
    v16 = 0LL;
    *(_QWORD *)a2 = sub_180040254(a1, v9, v14, v10);
    *(_BYTE *)(a2 + 8) = 1;
    sub_1800CFE24(&v15);
  }
  return a2;
}
