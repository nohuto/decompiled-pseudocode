/*
 * XREFs of sub_18004A390 @ 0x18004A390
 * Callers:
 *     sub_18004AD84 @ 0x18004AD84 (sub_18004AD84.c)
 * Callees:
 *     sub_18001B9BC @ 0x18001B9BC (sub_18001B9BC.c)
 *     sub_18001BA80 @ 0x18001BA80 (sub_18001BA80.c)
 *     sub_18001CB64 @ 0x18001CB64 (sub_18001CB64.c)
 *     sub_180025F38 @ 0x180025F38 (sub_180025F38.c)
 *     sub_180049D24 @ 0x180049D24 (sub_180049D24.c)
 *     sub_18004B78C @ 0x18004B78C (sub_18004B78C.c)
 */

__int64 __fastcall sub_18004A390(__int64 *a1, __int64 a2, __int64 a3)
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

  v6 = sub_18001B9BC((__int64)a1, (__int64 **)&v14, a3);
  v7 = *(_OWORD *)v6;
  v15 = v6[2];
  v8 = (__int64)v15;
  if ( sub_18001BA80(v9, (__int64)v15) )
  {
    *(_QWORD *)a2 = v8;
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    sub_180025F38((__int64)a1);
    v10 = sub_180049D24(v13, (__int64)a1, *a1, a3);
    v11 = v10[1];
    v10[1] = 0LL;
    sub_18004B78C(v13);
    v14 = v7;
    *(_QWORD *)a2 = sub_18001CB64((__int64)a1, (__int64)&v14, v11);
    *(_BYTE *)(a2 + 8) = 1;
  }
  return a2;
}
