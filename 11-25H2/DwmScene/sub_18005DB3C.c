/*
 * XREFs of sub_18005DB3C @ 0x18005DB3C
 * Callers:
 *     sub_18005E620 @ 0x18005E620 (sub_18005E620.c)
 * Callees:
 *     sub_18001CA04 @ 0x18001CA04 (sub_18001CA04.c)
 *     sub_180025DD8 @ 0x180025DD8 (sub_180025DD8.c)
 *     sub_18002D150 @ 0x18002D150 (sub_18002D150.c)
 *     sub_180049BC4 @ 0x180049BC4 (sub_180049BC4.c)
 *     sub_18004B62C @ 0x18004B62C (sub_18004B62C.c)
 */

__int64 __fastcall sub_18005DB3C(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int128 v6; // xmm6
  _QWORD *v8; // rax
  __int64 v9; // rbx
  _QWORD v10[2]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v11; // [rsp+30h] [rbp-38h] BYREF
  __int64 v12; // [rsp+40h] [rbp-28h]

  v5 = sub_18002D150(a1, (__int64)&v11, a2, a3);
  v6 = *(_OWORD *)v5;
  v12 = *(_QWORD *)(v5 + 16);
  if ( (_BYTE)v12 )
    return v6;
  sub_180025DD8((__int64)a1);
  v8 = sub_180049BC4(v10, (__int64)a1, *a1, a3);
  v9 = v8[1];
  v8[1] = 0LL;
  sub_18004B62C((__int64)v10);
  v11 = v6;
  return sub_18001CA04((__int64)a1, (__int64)&v11, v9);
}
