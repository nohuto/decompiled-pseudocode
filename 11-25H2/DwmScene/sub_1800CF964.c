/*
 * XREFs of sub_1800CF964 @ 0x1800CF964
 * Callers:
 *     sub_1800CDCF0 @ 0x1800CDCF0 (sub_1800CDCF0.c)
 * Callees:
 *     sub_1800130AC @ 0x1800130AC (sub_1800130AC.c)
 *     sub_18001B098 @ 0x18001B098 (sub_18001B098.c)
 *     sub_18001E480 @ 0x18001E480 (sub_18001E480.c)
 *     sub_1800400F4 @ 0x1800400F4 (sub_1800400F4.c)
 *     sub_18005DBD8 @ 0x18005DBD8 (sub_18005DBD8.c)
 *     sub_180067EB0 @ 0x180067EB0 (sub_180067EB0.c)
 *     sub_1800CF884 @ 0x1800CF884 (sub_1800CF884.c)
 *     sub_1800CFCC4 @ 0x1800CFCC4 (sub_1800CFCC4.c)
 *     sub_1800D0C74 @ 0x1800D0C74 (sub_1800D0C74.c)
 *     sub_1800D0F40 @ 0x1800D0F40 (sub_1800D0F40.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800CF964(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rbp
  _QWORD *v10; // r14
  __int128 v12; // [rsp+20h] [rbp-38h] BYREF
  _QWORD *v13; // [rsp+30h] [rbp-28h] BYREF
  _QWORD *v14; // [rsp+38h] [rbp-20h]

  v6 = sub_1800130AC(a3);
  v9 = sub_18001E480(v8, v6, 2 * v7);
  sub_18005DBD8(a1, &v12, a3, v9);
  if ( *((_QWORD *)&v12 + 1) )
  {
    *(_QWORD *)a2 = *((_QWORD *)&v12 + 1);
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    sub_1800D0C74(a1);
    v13 = a1 + 1;
    v10 = (_QWORD *)sub_18001B098(176LL);
    v14 = v10;
    sub_1800CF884((__int64)(a1 + 1), (__int64)(v10 + 2), a3);
    if ( sub_180067EB0((__int64)a1) )
    {
      sub_1800D0F40(a1);
      v12 = *(_OWORD *)sub_18005DBD8(a1, &v12, (__int64)(v10 + 2), v9);
    }
    v14 = 0LL;
    *(_QWORD *)a2 = sub_1800400F4(a1, v9, v12, v10);
    *(_BYTE *)(a2 + 8) = 1;
    sub_1800CFCC4(&v13);
  }
  return a2;
}
