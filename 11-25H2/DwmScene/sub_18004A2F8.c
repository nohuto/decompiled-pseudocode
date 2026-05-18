/*
 * XREFs of sub_18004A2F8 @ 0x18004A2F8
 * Callers:
 *     sub_18004C754 @ 0x18004C754 (sub_18004C754.c)
 * Callees:
 *     sub_18001B85C @ 0x18001B85C (sub_18001B85C.c)
 *     sub_18001B920 @ 0x18001B920 (sub_18001B920.c)
 *     sub_18001CA04 @ 0x18001CA04 (sub_18001CA04.c)
 *     sub_180023E2C @ 0x180023E2C (sub_180023E2C.c)
 *     sub_180025DD8 @ 0x180025DD8 (sub_180025DD8.c)
 *     sub_18004ABEC @ 0x18004ABEC (sub_18004ABEC.c)
 *     sub_18004B62C @ 0x18004B62C (sub_18004B62C.c)
 */

__int64 __fastcall sub_18004A2F8(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 **v6; // rax
  __int128 v7; // xmm6
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v14; // [rsp+20h] [rbp-40h] BYREF
  __int64 v15; // [rsp+28h] [rbp-38h]
  __int128 v16; // [rsp+30h] [rbp-30h] BYREF
  __int64 *v17; // [rsp+40h] [rbp-20h]

  v6 = sub_18001B85C((__int64)a1, (__int64 **)&v16, a3);
  v7 = *(_OWORD *)v6;
  v17 = v6[2];
  v8 = (__int64)v17;
  if ( sub_18001B920(v9, (__int64)v17) )
  {
    *(_QWORD *)a2 = v8;
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    sub_180025DD8((__int64)a1);
    v10 = *a1;
    sub_180023E2C(&v14, (__int64)a1);
    sub_18004ABEC(v11, v15 + 32, a3);
    *(_QWORD *)v15 = v10;
    *(_QWORD *)(v15 + 8) = v10;
    *(_QWORD *)(v15 + 16) = v10;
    *(_BYTE *)(v15 + 24) = 0;
    *(_BYTE *)(v15 + 25) = 0;
    v12 = v15;
    v15 = 0LL;
    sub_18004B62C(&v14);
    v16 = v7;
    *(_QWORD *)a2 = sub_18001CA04((__int64)a1, (__int64)&v16, v12);
    *(_BYTE *)(a2 + 8) = 1;
  }
  return a2;
}
