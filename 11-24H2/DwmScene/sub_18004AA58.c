/*
 * XREFs of sub_18004AA58 @ 0x18004AA58
 * Callers:
 *     sub_18004BF2C @ 0x18004BF2C (sub_18004BF2C.c)
 *     sub_18005B0FC @ 0x18005B0FC (sub_18005B0FC.c)
 * Callees:
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 *     sub_18001B9BC @ 0x18001B9BC (sub_18001B9BC.c)
 *     sub_18001BA80 @ 0x18001BA80 (sub_18001BA80.c)
 *     sub_18001C38C @ 0x18001C38C (sub_18001C38C.c)
 *     sub_18001CB64 @ 0x18001CB64 (sub_18001CB64.c)
 *     sub_18001CD64 @ 0x18001CD64 (sub_18001CD64.c)
 *     sub_18004ACE8 @ 0x18004ACE8 (sub_18004ACE8.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18004AA58(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // r8
  __int128 v13; // [rsp+30h] [rbp-38h] BYREF
  __int128 v14; // [rsp+40h] [rbp-28h] BYREF
  __int64 v15; // [rsp+50h] [rbp-18h]
  __int64 v16; // [rsp+88h] [rbp+20h] BYREF

  sub_18001B9BC((__int64)a1, (__int64 **)&v14, a3);
  v6 = v15;
  if ( sub_18001BA80(v7, v15) )
  {
    *(_QWORD *)a2 = v6;
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    if ( a1[1] == 0x38E38E38E38E38ELL )
      sub_18001CD64();
    v16 = a3;
    v8 = *a1;
    *(_QWORD *)&v13 = a1;
    v9 = sub_18001B1F8(72LL);
    sub_18004ACE8(v10, v9 + 32, v11, &v16);
    *(_QWORD *)v9 = v8;
    *(_QWORD *)(v9 + 8) = v8;
    *(_QWORD *)(v9 + 16) = v8;
    *(_WORD *)(v9 + 24) = 0;
    *((_QWORD *)&v13 + 1) = 0LL;
    sub_18001C38C((__int64)&v13);
    v13 = v14;
    *(_QWORD *)a2 = sub_18001CB64((__int64)a1, (__int64)&v13, v9);
    *(_BYTE *)(a2 + 8) = 1;
  }
  return a2;
}
