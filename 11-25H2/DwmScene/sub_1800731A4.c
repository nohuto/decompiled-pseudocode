/*
 * XREFs of sub_1800731A4 @ 0x1800731A4
 * Callers:
 *     sub_18007370C @ 0x18007370C (sub_18007370C.c)
 * Callees:
 *     sub_18001B85C @ 0x18001B85C (sub_18001B85C.c)
 *     sub_18001B920 @ 0x18001B920 (sub_18001B920.c)
 *     sub_18001CA04 @ 0x18001CA04 (sub_18001CA04.c)
 *     sub_18002EE44 @ 0x18002EE44 (sub_18002EE44.c)
 *     sub_1800361C8 @ 0x1800361C8 (sub_1800361C8.c)
 *     sub_1800732D0 @ 0x1800732D0 (sub_1800732D0.c)
 *     sub_1800733D0 @ 0x1800733D0 (sub_1800733D0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800731A4(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rbx
  __int64 v13; // [rsp+30h] [rbp-30h] BYREF
  __int64 v14; // [rsp+38h] [rbp-28h]
  __int128 v15; // [rsp+40h] [rbp-20h] BYREF
  __int64 v16; // [rsp+50h] [rbp-10h]
  __int64 v17; // [rsp+98h] [rbp+38h] BYREF

  sub_18001B85C((__int64)a1, (__int64 **)&v15, a3);
  v6 = v16;
  if ( sub_18001B920(v7, v16) )
  {
    *(_QWORD *)a2 = v6;
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    sub_1800361C8((__int64)a1);
    v17 = a3;
    v8 = *a1;
    sub_18002EE44(&v13, (__int64)a1);
    sub_1800732D0(v9, v14 + 32, v10, &v17);
    *(_QWORD *)v14 = v8;
    *(_QWORD *)(v14 + 8) = v8;
    *(_QWORD *)(v14 + 16) = v8;
    *(_BYTE *)(v14 + 24) = 0;
    *(_BYTE *)(v14 + 25) = 0;
    v11 = v14;
    v14 = 0LL;
    sub_1800733D0(&v13);
    *(_QWORD *)a2 = sub_18001CA04((__int64)a1, (__int64)&v15, v11);
    *(_BYTE *)(a2 + 8) = 1;
  }
  return a2;
}
