/*
 * XREFs of sub_18003D140 @ 0x18003D140
 * Callers:
 *     sub_18003FB38 @ 0x18003FB38 (sub_18003FB38.c)
 * Callees:
 *     sub_18001CB64 @ 0x18001CB64 (sub_18001CB64.c)
 *     sub_18003CF9C @ 0x18003CF9C (sub_18003CF9C.c)
 *     sub_18003D0F4 @ 0x18003D0F4 (sub_18003D0F4.c)
 *     sub_18003D270 @ 0x18003D270 (sub_18003D270.c)
 *     sub_18003D5B4 @ 0x18003D5B4 (sub_18003D5B4.c)
 *     sub_18003D9B8 @ 0x18003D9B8 (sub_18003D9B8.c)
 *     sub_18003FFBC @ 0x18003FFBC (sub_18003FFBC.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18003D140(__int64 *a1, __int64 a2, void *a3)
{
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rbx
  _BYTE v12[8]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v13; // [rsp+38h] [rbp-28h]
  __int128 v14; // [rsp+40h] [rbp-20h] BYREF
  __int64 v15; // [rsp+50h] [rbp-10h]
  void *v16; // [rsp+90h] [rbp+30h] BYREF

  v16 = a3;
  sub_18003CF9C((__int64)a1, (__int64 **)&v14, (__int64)&unk_1801C5038);
  v5 = v15;
  if ( sub_18003D0F4(v6, v15) )
  {
    *(_QWORD *)a2 = v5;
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    sub_18003FFBC(a1);
    v16 = &unk_1801C5038;
    v7 = *a1;
    sub_18003D5B4(v12, a1);
    sub_18003D270(v8, v13 + 32, v9, &v16);
    *(_QWORD *)v13 = v7;
    *(_QWORD *)(v13 + 8) = v7;
    *(_QWORD *)(v13 + 16) = v7;
    *(_BYTE *)(v13 + 24) = 0;
    *(_BYTE *)(v13 + 25) = 0;
    v10 = v13;
    v13 = 0LL;
    sub_18003D9B8(v12);
    *(_QWORD *)a2 = sub_18001CB64((__int64)a1, (__int64)&v14, v10);
    *(_BYTE *)(a2 + 8) = 1;
  }
  return a2;
}
