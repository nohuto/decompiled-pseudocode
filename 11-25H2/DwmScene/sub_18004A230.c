/*
 * XREFs of sub_18004A230 @ 0x18004A230
 * Callers:
 *     sub_18004AC24 @ 0x18004AC24 (sub_18004AC24.c)
 * Callees:
 *     sub_18001B85C @ 0x18001B85C (sub_18001B85C.c)
 *     sub_18001B920 @ 0x18001B920 (sub_18001B920.c)
 *     sub_18001CA04 @ 0x18001CA04 (sub_18001CA04.c)
 *     sub_180025DD8 @ 0x180025DD8 (sub_180025DD8.c)
 *     sub_180049BC4 @ 0x180049BC4 (sub_180049BC4.c)
 *     sub_18004B62C @ 0x18004B62C (sub_18004B62C.c)
 */

__int64 __fastcall sub_18004A230(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 **v6; // rax
  __int128 v7; // xmm6
  __int64 v8; // rbx
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rbx
  _QWORD v13[2]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v14; // [rsp+30h] [rbp-38h] BYREF
  __int64 *v15; // [rsp+40h] [rbp-28h]

  v6 = sub_18001B85C((__int64)a1, (__int64 **)&v14, a3);
  v7 = *(_OWORD *)v6;
  v15 = v6[2];
  v8 = (__int64)v15;
  if ( sub_18001B920(v9, (__int64)v15) )
  {
    *(_QWORD *)a2 = v8;
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    sub_180025DD8((__int64)a1);
    v10 = sub_180049BC4(v13, (__int64)a1, *a1, a3);
    v11 = v10[1];
    v10[1] = 0LL;
    sub_18004B62C(v13);
    v14 = v7;
    *(_QWORD *)a2 = sub_18001CA04((__int64)a1, (__int64)&v14, v11);
    *(_BYTE *)(a2 + 8) = 1;
  }
  return a2;
}
