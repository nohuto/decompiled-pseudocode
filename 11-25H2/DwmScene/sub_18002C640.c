/*
 * XREFs of sub_18002C640 @ 0x18002C640
 * Callers:
 *     sub_18002F140 @ 0x18002F140 (sub_18002F140.c)
 * Callees:
 *     sub_18001CA04 @ 0x18001CA04 (sub_18001CA04.c)
 *     sub_18002D150 @ 0x18002D150 (sub_18002D150.c)
 *     sub_18002E360 @ 0x18002E360 (sub_18002E360.c)
 *     sub_18002EE44 @ 0x18002EE44 (sub_18002EE44.c)
 *     sub_18002FBDC @ 0x18002FBDC (sub_18002FBDC.c)
 *     sub_1800361C8 @ 0x1800361C8 (sub_1800361C8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18002C640(__int64 *a1, __int64 a2, __int64 a3)
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

  v5 = sub_18002D150(a1, &v13, a2, a3);
  v6 = *(_OWORD *)v5;
  v14 = *(_QWORD *)(v5 + 16);
  if ( (_BYTE)v14 )
    return v6;
  sub_1800361C8(a1);
  v8 = *a1;
  sub_18002EE44(v11, a1);
  sub_18002E360(v9, v12 + 32, a3);
  *(_QWORD *)v12 = v8;
  *(_QWORD *)(v12 + 8) = v8;
  *(_QWORD *)(v12 + 16) = v8;
  *(_BYTE *)(v12 + 24) = 0;
  *(_BYTE *)(v12 + 25) = 0;
  v10 = v12;
  v12 = 0LL;
  sub_18002FBDC(v11);
  v13 = v6;
  return sub_18001CA04((__int64)a1, (__int64)&v13, v10);
}
