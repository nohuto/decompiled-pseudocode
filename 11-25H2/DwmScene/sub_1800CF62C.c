/*
 * XREFs of sub_1800CF62C @ 0x1800CF62C
 * Callers:
 *     sub_1800CFFD0 @ 0x1800CFFD0 (sub_1800CFFD0.c)
 * Callees:
 *     sub_1800130AC @ 0x1800130AC (sub_1800130AC.c)
 *     sub_18001B098 @ 0x18001B098 (sub_18001B098.c)
 *     sub_18001E480 @ 0x18001E480 (sub_18001E480.c)
 *     sub_1800400F4 @ 0x1800400F4 (sub_1800400F4.c)
 *     sub_18005DBD8 @ 0x18005DBD8 (sub_18005DBD8.c)
 *     sub_180067EB0 @ 0x180067EB0 (sub_180067EB0.c)
 *     sub_1800CF900 @ 0x1800CF900 (sub_1800CF900.c)
 *     sub_1800CFCC4 @ 0x1800CFCC4 (sub_1800CFCC4.c)
 *     sub_1800D0C74 @ 0x1800D0C74 (sub_1800D0C74.c)
 *     sub_1800D0F40 @ 0x1800D0F40 (sub_1800D0F40.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800CF62C(_QWORD *a1, __int64 a2, __int64 a3)
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

  v6 = sub_1800130AC(a3);
  v9 = sub_18001E480(v8, v6, 2 * v7);
  sub_18005DBD8(a1, &v14, a3, v9);
  if ( *((_QWORD *)&v14 + 1) )
  {
    *(_QWORD *)a2 = *((_QWORD *)&v14 + 1);
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    sub_1800D0C74(a1);
    v17 = a3;
    v15 = a1 + 1;
    v10 = (_QWORD *)sub_18001B098(176LL);
    v16 = v10;
    sub_1800CF900(v11, v10 + 2, v12, &v17);
    if ( sub_180067EB0((__int64)a1) )
    {
      sub_1800D0F40(a1);
      v14 = *(_OWORD *)sub_18005DBD8(a1, &v14, (__int64)(v10 + 2), v9);
    }
    v16 = 0LL;
    *(_QWORD *)a2 = sub_1800400F4(a1, v9, v14, v10);
    *(_BYTE *)(a2 + 8) = 1;
    sub_1800CFCC4(&v15);
  }
  return a2;
}
