/*
 * XREFs of sub_18002E2D8 @ 0x18002E2D8
 * Callers:
 *     sub_180030D14 @ 0x180030D14 (sub_180030D14.c)
 * Callees:
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 *     sub_18001CB64 @ 0x18001CB64 (sub_18001CB64.c)
 *     sub_18001CD64 @ 0x18001CD64 (sub_18001CD64.c)
 *     sub_18002D550 @ 0x18002D550 (sub_18002D550.c)
 *     sub_18002E508 @ 0x18002E508 (sub_18002E508.c)
 *     sub_18002FD9C @ 0x18002FD9C (sub_18002FD9C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18002E2D8(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r8
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // r8
  __int128 v11; // [rsp+30h] [rbp-38h] BYREF
  __int128 v12; // [rsp+40h] [rbp-28h] BYREF
  __int64 v13; // [rsp+50h] [rbp-18h]
  __int64 v14; // [rsp+88h] [rbp+20h] BYREF

  sub_18002D550(a1, &v12, a3);
  if ( *(_BYTE *)(v13 + 25) || *(_QWORD *)(v5 + 8) < *(_QWORD *)(v13 + 40) )
  {
    if ( a1[1] == 0x38E38E38E38E38ELL )
      sub_18001CD64();
    v14 = v5;
    v6 = *a1;
    *(_QWORD *)&v11 = a1;
    v7 = sub_18001B1F8(72LL);
    sub_18002E508(v8, v7 + 32, v9, &v14);
    *(_QWORD *)v7 = v6;
    *(_QWORD *)(v7 + 8) = v6;
    *(_QWORD *)(v7 + 16) = v6;
    *(_WORD *)(v7 + 24) = 0;
    *((_QWORD *)&v11 + 1) = 0LL;
    sub_18002FD9C(&v11);
    v11 = v12;
    *(_QWORD *)a2 = sub_18001CB64((__int64)a1, (__int64)&v11, v7);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v13;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
