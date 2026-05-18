/*
 * XREFs of sub_18004A3F8 @ 0x18004A3F8
 * Callers:
 *     sub_18004C040 @ 0x18004C040 (sub_18004C040.c)
 * Callees:
 *     sub_18001B098 @ 0x18001B098 (sub_18001B098.c)
 *     sub_18001B85C @ 0x18001B85C (sub_18001B85C.c)
 *     sub_18001B920 @ 0x18001B920 (sub_18001B920.c)
 *     sub_18001CA04 @ 0x18001CA04 (sub_18001CA04.c)
 *     sub_18001CC04 @ 0x18001CC04 (sub_18001CC04.c)
 *     sub_18004AAE0 @ 0x18004AAE0 (sub_18004AAE0.c)
 *     sub_18004B5CC @ 0x18004B5CC (sub_18004B5CC.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18004A3F8(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 **v8; // rax
  __int128 v9; // xmm6
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // rcx
  __int128 v16; // [rsp+20h] [rbp-48h] BYREF
  __int64 *v17; // [rsp+30h] [rbp-38h]

  v8 = sub_18001B85C((__int64)a1, (__int64 **)&v16, a3);
  v9 = *(_OWORD *)v8;
  v17 = v8[2];
  v10 = (__int64)v17;
  if ( sub_18001B920(v11, (__int64)v17) )
  {
    *(_QWORD *)a2 = v10;
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    if ( a1[1] == 0x276276276276276LL )
      sub_18001CC04();
    v12 = *a1;
    *(_QWORD *)&v16 = a1;
    v13 = sub_18001B098(104LL);
    sub_18004AAE0(v14, v13 + 32, a3, a4);
    *(_QWORD *)v13 = v12;
    *(_QWORD *)(v13 + 8) = v12;
    *(_QWORD *)(v13 + 16) = v12;
    *(_WORD *)(v13 + 24) = 0;
    *((_QWORD *)&v16 + 1) = 0LL;
    sub_18004B5CC(&v16);
    v16 = v9;
    *(_QWORD *)a2 = sub_18001CA04((__int64)a1, (__int64)&v16, v13);
    *(_BYTE *)(a2 + 8) = 1;
  }
  return a2;
}
