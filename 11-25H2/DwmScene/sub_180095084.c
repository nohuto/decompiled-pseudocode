/*
 * XREFs of sub_180095084 @ 0x180095084
 * Callers:
 *     sub_18002F2B4 @ 0x18002F2B4 (sub_18002F2B4.c)
 * Callees:
 *     sub_180011B8C @ 0x180011B8C (sub_180011B8C.c)
 *     sub_180027FBC @ 0x180027FBC (sub_180027FBC.c)
 *     sub_18002815C @ 0x18002815C (sub_18002815C.c)
 *     sub_180040290 @ 0x180040290 (sub_180040290.c)
 *     sub_18009502C @ 0x18009502C (sub_18009502C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180095084(__int64 a1, __int64 a2)
{
  __int64 *v4; // rax
  __int64 v5; // rbx
  __int64 v7[5]; // [rsp+30h] [rbp-28h] BYREF
  int v8; // [rsp+60h] [rbp+8h] BYREF
  __int64 v9; // [rsp+70h] [rbp+18h] BYREF
  __int64 v10; // [rsp+78h] [rbp+20h]

  if ( !sub_180040290(a1 + 8) )
    return 0LL;
  v10 = a1;
  sub_180027FBC(a1);
  v9 = 0LL;
  v4 = sub_180011B8C(v7);
  v8 = 1;
  sub_18009502C((__int64 *)(a1 + 32), &v8, a2, v4, &v9);
  v5 = 0x6DB6DB6DB6DB6DB7LL * ((__int64)(*(_QWORD *)(a1 + 40) - *(_QWORD *)(a1 + 32)) >> 3);
  sub_18002815C(a1);
  return v5 - 1;
}
