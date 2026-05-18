/*
 * XREFs of sub_18002C6BC @ 0x18002C6BC
 * Callers:
 *     sub_18002F22C @ 0x18002F22C (sub_18002F22C.c)
 * Callees:
 *     sub_18001C38C @ 0x18001C38C (sub_18001C38C.c)
 *     sub_18001CB64 @ 0x18001CB64 (sub_18001CB64.c)
 *     sub_18002CFD8 @ 0x18002CFD8 (sub_18002CFD8.c)
 *     sub_18002E450 @ 0x18002E450 (sub_18002E450.c)
 *     sub_18002EF70 @ 0x18002EF70 (sub_18002EF70.c)
 *     sub_180036300 @ 0x180036300 (sub_180036300.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18002C6BC(__int64 *a1, __int64 a2, __int64 a3)
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

  v5 = sub_18002CFD8(a1, &v13, a2, a3);
  v6 = *(_OWORD *)v5;
  v14 = *(_QWORD *)(v5 + 16);
  if ( (_BYTE)v14 )
    return v6;
  sub_180036300(a1);
  v8 = *a1;
  sub_18002EF70(v11, a1);
  sub_18002E450(v9, v12 + 32, a3);
  *(_QWORD *)v12 = v8;
  *(_QWORD *)(v12 + 8) = v8;
  *(_QWORD *)(v12 + 16) = v8;
  *(_BYTE *)(v12 + 24) = 0;
  *(_BYTE *)(v12 + 25) = 0;
  v10 = v12;
  v12 = 0LL;
  sub_18001C38C((__int64)v11);
  v13 = v6;
  return sub_18001CB64((__int64)a1, (__int64)&v13, v10);
}
