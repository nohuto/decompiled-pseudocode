/*
 * XREFs of sub_1800951E4 @ 0x1800951E4
 * Callers:
 *     sub_18002F414 @ 0x18002F414 (sub_18002F414.c)
 * Callees:
 *     sub_180011C8C @ 0x180011C8C (sub_180011C8C.c)
 *     sub_18002811C @ 0x18002811C (sub_18002811C.c)
 *     sub_1800282BC @ 0x1800282BC (sub_1800282BC.c)
 *     sub_1800403F0 @ 0x1800403F0 (sub_1800403F0.c)
 *     sub_18009518C @ 0x18009518C (sub_18009518C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800951E4(__int64 a1, __int64 a2)
{
  __int64 *v4; // rax
  __int64 v5; // rbx
  __int64 v7[5]; // [rsp+30h] [rbp-28h] BYREF
  int v8; // [rsp+60h] [rbp+8h] BYREF
  __int64 v9; // [rsp+70h] [rbp+18h] BYREF
  __int64 v10; // [rsp+78h] [rbp+20h]

  if ( !sub_1800403F0(a1 + 8) )
    return 0LL;
  v10 = a1;
  sub_18002811C(a1);
  v9 = 0LL;
  v4 = sub_180011C8C(v7);
  v8 = 1;
  sub_18009518C((__int64 *)(a1 + 32), &v8, a2, v4, &v9);
  v5 = 0x6DB6DB6DB6DB6DB7LL * ((__int64)(*(_QWORD *)(a1 + 40) - *(_QWORD *)(a1 + 32)) >> 3);
  sub_1800282BC(a1);
  return v5 - 1;
}
