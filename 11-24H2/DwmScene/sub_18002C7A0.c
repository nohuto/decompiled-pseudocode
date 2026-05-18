/*
 * XREFs of sub_18002C7A0 @ 0x18002C7A0
 * Callers:
 *     sub_18002F2A0 @ 0x18002F2A0 (sub_18002F2A0.c)
 * Callees:
 *     sub_18001CB64 @ 0x18001CB64 (sub_18001CB64.c)
 *     sub_18002D2B0 @ 0x18002D2B0 (sub_18002D2B0.c)
 *     sub_18002E4C0 @ 0x18002E4C0 (sub_18002E4C0.c)
 *     sub_18002EFA4 @ 0x18002EFA4 (sub_18002EFA4.c)
 *     sub_18002FD3C @ 0x18002FD3C (sub_18002FD3C.c)
 *     sub_180036328 @ 0x180036328 (sub_180036328.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18002C7A0(__int64 *a1, __int64 a2, __int64 a3)
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

  v5 = sub_18002D2B0(a1, &v13, a2, a3);
  v6 = *(_OWORD *)v5;
  v14 = *(_QWORD *)(v5 + 16);
  if ( (_BYTE)v14 )
    return v6;
  sub_180036328(a1);
  v8 = *a1;
  sub_18002EFA4(v11, a1);
  sub_18002E4C0(v9, v12 + 32, a3);
  *(_QWORD *)v12 = v8;
  *(_QWORD *)(v12 + 8) = v8;
  *(_QWORD *)(v12 + 16) = v8;
  *(_BYTE *)(v12 + 24) = 0;
  *(_BYTE *)(v12 + 25) = 0;
  v10 = v12;
  v12 = 0LL;
  sub_18002FD3C(v11);
  v13 = v6;
  return sub_18001CB64((__int64)a1, (__int64)&v13, v10);
}
