/*
 * XREFs of sub_18002C55C @ 0x18002C55C
 * Callers:
 *     sub_18002F0CC @ 0x18002F0CC (sub_18002F0CC.c)
 * Callees:
 *     sub_18001C22C @ 0x18001C22C (sub_18001C22C.c)
 *     sub_18001CA04 @ 0x18001CA04 (sub_18001CA04.c)
 *     sub_18002CE78 @ 0x18002CE78 (sub_18002CE78.c)
 *     sub_18002E2F0 @ 0x18002E2F0 (sub_18002E2F0.c)
 *     sub_18002EE10 @ 0x18002EE10 (sub_18002EE10.c)
 *     sub_1800361A0 @ 0x1800361A0 (sub_1800361A0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18002C55C(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int128 v6; // xmm6
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rbx
  _BYTE v11[8]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v12; // [rsp+28h] [rbp-38h]
  __int128 v13; // [rsp+30h] [rbp-30h] BYREF
  __int64 v14; // [rsp+40h] [rbp-20h]

  v5 = sub_18002CE78(a1, &v13, a2, a3);
  v6 = *(_OWORD *)v5;
  v14 = *(_QWORD *)(v5 + 16);
  if ( (_BYTE)v14 )
    return v6;
  sub_1800361A0(a1);
  v8 = *a1;
  sub_18002EE10(v11, a1);
  sub_18002E2F0(v9, v12 + 32, a3);
  *(_QWORD *)v12 = v8;
  *(_QWORD *)(v12 + 8) = v8;
  *(_QWORD *)(v12 + 16) = v8;
  *(_BYTE *)(v12 + 24) = 0;
  *(_BYTE *)(v12 + 25) = 0;
  v10 = v12;
  v12 = 0LL;
  sub_18001C22C((__int64)v11);
  v13 = v6;
  return sub_18001CA04((__int64)a1, (__int64)&v13, v10);
}
