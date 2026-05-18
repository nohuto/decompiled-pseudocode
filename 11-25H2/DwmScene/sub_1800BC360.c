/*
 * XREFs of sub_1800BC360 @ 0x1800BC360
 * Callers:
 *     sub_1800BDA58 @ 0x1800BDA58 (sub_1800BDA58.c)
 *     sub_1800BDDAC @ 0x1800BDDAC (sub_1800BDDAC.c)
 * Callees:
 *     sub_18001B098 @ 0x18001B098 (sub_18001B098.c)
 *     sub_18001C1A8 @ 0x18001C1A8 (sub_18001C1A8.c)
 *     sub_18001CA04 @ 0x18001CA04 (sub_18001CA04.c)
 *     sub_18001CC04 @ 0x18001CC04 (sub_18001CC04.c)
 *     sub_180040A14 @ 0x180040A14 (sub_180040A14.c)
 *     sub_1800BC4A0 @ 0x1800BC4A0 (sub_1800BC4A0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800BC360(__int64 *a1, __int64 a2, _DWORD *a3)
{
  _DWORD *v5; // r8
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // r8
  __int128 v11; // [rsp+30h] [rbp-38h] BYREF
  __int128 v12; // [rsp+40h] [rbp-28h] BYREF
  __int64 v13; // [rsp+50h] [rbp-18h]
  _DWORD *v14; // [rsp+88h] [rbp+20h] BYREF

  sub_180040A14(a1, &v12, a3);
  if ( *(_BYTE *)(v13 + 25) || *v5 < *(_DWORD *)(v13 + 32) )
  {
    if ( a1[1] == 0x38E38E38E38E38ELL )
      sub_18001CC04();
    v14 = v5;
    v6 = *a1;
    *(_QWORD *)&v11 = a1;
    v7 = sub_18001B098(72LL);
    sub_1800BC4A0(v8, v7 + 32, v9, &v14);
    *(_QWORD *)v7 = v6;
    *(_QWORD *)(v7 + 8) = v6;
    *(_QWORD *)(v7 + 16) = v6;
    *(_WORD *)(v7 + 24) = 0;
    *((_QWORD *)&v11 + 1) = 0LL;
    sub_18001C1A8((__int64)&v11);
    v11 = v12;
    *(_QWORD *)a2 = sub_18001CA04((__int64)a1, (__int64)&v11, v7);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v13;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
