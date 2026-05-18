/*
 * XREFs of sub_180052BB8 @ 0x180052BB8
 * Callers:
 *     sub_1800530A0 @ 0x1800530A0 (sub_1800530A0.c)
 * Callees:
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 *     sub_18001CB64 @ 0x18001CB64 (sub_18001CB64.c)
 *     sub_18001CD64 @ 0x18001CD64 (sub_18001CD64.c)
 *     sub_18002D550 @ 0x18002D550 (sub_18002D550.c)
 *     sub_180052CA4 @ 0x180052CA4 (sub_180052CA4.c)
 *     sub_180052EDC @ 0x180052EDC (sub_180052EDC.c)
 */

__int64 __fastcall sub_180052BB8(__int64 *a1, __int64 a2, __int64 a3)
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
    sub_180052CA4(v8, v7 + 32, v9, &v14);
    *(_QWORD *)v7 = v6;
    *(_QWORD *)(v7 + 8) = v6;
    *(_QWORD *)(v7 + 16) = v6;
    *(_WORD *)(v7 + 24) = 0;
    *((_QWORD *)&v11 + 1) = 0LL;
    sub_180052EDC(&v11);
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
