/*
 * XREFs of sub_18001BB9C @ 0x18001BB9C
 * Callers:
 *     sub_18001C028 @ 0x18001C028 (sub_18001C028.c)
 * Callees:
 *     sub_18001B098 @ 0x18001B098 (sub_18001B098.c)
 *     sub_18001B85C @ 0x18001B85C (sub_18001B85C.c)
 *     sub_18001B920 @ 0x18001B920 (sub_18001B920.c)
 *     sub_18001BD48 @ 0x18001BD48 (sub_18001BD48.c)
 *     sub_18001C22C @ 0x18001C22C (sub_18001C22C.c)
 *     sub_18001CA04 @ 0x18001CA04 (sub_18001CA04.c)
 *     sub_18001CC04 @ 0x18001CC04 (sub_18001CC04.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18001BB9C(__int64 *a1, __int64 a2, __int64 a3)
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

  sub_18001B85C((__int64)a1, (__int64 **)&v14, a3);
  v6 = v15;
  if ( sub_18001B920(v7, v15) )
  {
    *(_QWORD *)a2 = v6;
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    if ( a1[1] == 0x38E38E38E38E38ELL )
      sub_18001CC04();
    v16 = a3;
    v8 = *a1;
    *(_QWORD *)&v13 = a1;
    v9 = sub_18001B098(72LL);
    sub_18001BD48(v10, v9 + 32, v11, &v16);
    *(_QWORD *)v9 = v8;
    *(_QWORD *)(v9 + 8) = v8;
    *(_QWORD *)(v9 + 16) = v8;
    *(_WORD *)(v9 + 24) = 0;
    *((_QWORD *)&v13 + 1) = 0LL;
    sub_18001C22C(&v13);
    v13 = v14;
    *(_QWORD *)a2 = sub_18001CA04(a1, &v13, v9);
    *(_BYTE *)(a2 + 8) = 1;
  }
  return a2;
}
