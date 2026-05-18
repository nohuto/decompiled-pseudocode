/*
 * XREFs of sub_18004F02C @ 0x18004F02C
 * Callers:
 *     sub_18004E740 @ 0x18004E740 (sub_18004E740.c)
 *     sub_18004E82C @ 0x18004E82C (sub_18004E82C.c)
 *     sub_18004E918 @ 0x18004E918 (sub_18004E918.c)
 *     sub_18004EA04 @ 0x18004EA04 (sub_18004EA04.c)
 *     sub_18004EAF0 @ 0x18004EAF0 (sub_18004EAF0.c)
 *     sub_18004EBDC @ 0x18004EBDC (sub_18004EBDC.c)
 *     sub_18004ECC8 @ 0x18004ECC8 (sub_18004ECC8.c)
 *     sub_18004EDB4 @ 0x18004EDB4 (sub_18004EDB4.c)
 *     sub_1800B69D8 @ 0x1800B69D8 (sub_1800B69D8.c)
 *     sub_1800B6AC4 @ 0x1800B6AC4 (sub_1800B6AC4.c)
 *     sub_1800B6BB0 @ 0x1800B6BB0 (sub_1800B6BB0.c)
 *     sub_1800B6C9C @ 0x1800B6C9C (sub_1800B6C9C.c)
 *     sub_1800B6D88 @ 0x1800B6D88 (sub_1800B6D88.c)
 *     sub_1800B6E74 @ 0x1800B6E74 (sub_1800B6E74.c)
 *     sub_1800B6F60 @ 0x1800B6F60 (sub_1800B6F60.c)
 *     sub_1800B704C @ 0x1800B704C (sub_1800B704C.c)
 *     sub_1800B7138 @ 0x1800B7138 (sub_1800B7138.c)
 *     sub_1800B7224 @ 0x1800B7224 (sub_1800B7224.c)
 *     sub_1800B7310 @ 0x1800B7310 (sub_1800B7310.c)
 *     sub_1800B73FC @ 0x1800B73FC (sub_1800B73FC.c)
 *     sub_1800B74E8 @ 0x1800B74E8 (sub_1800B74E8.c)
 *     sub_1800B75D4 @ 0x1800B75D4 (sub_1800B75D4.c)
 *     sub_1800B76C0 @ 0x1800B76C0 (sub_1800B76C0.c)
 *     sub_1800B77AC @ 0x1800B77AC (sub_1800B77AC.c)
 *     sub_1800B7898 @ 0x1800B7898 (sub_1800B7898.c)
 * Callees:
 *     sub_180010BFC @ 0x180010BFC (sub_180010BFC.c)
 *     sub_18001B098 @ 0x18001B098 (sub_18001B098.c)
 *     sub_18001CA04 @ 0x18001CA04 (sub_18001CA04.c)
 *     sub_18001CC04 @ 0x18001CC04 (sub_18001CC04.c)
 *     sub_18004F118 @ 0x18004F118 (sub_18004F118.c)
 *     sub_18004F1D8 @ 0x18004F1D8 (sub_18004F1D8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18004F02C(__int64 *a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v5; // r8
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // r8
  __int128 v11; // [rsp+30h] [rbp-38h] BYREF
  __int128 v12; // [rsp+40h] [rbp-28h] BYREF
  __int64 v13; // [rsp+50h] [rbp-18h]
  _QWORD *v14; // [rsp+88h] [rbp+20h] BYREF

  sub_180010BFC(a1, &v12, a3);
  if ( *(_BYTE *)(v13 + 25) || *v5 < *(_QWORD *)(v13 + 32) )
  {
    if ( a1[1] == 0x276276276276276LL )
      sub_18001CC04();
    v14 = v5;
    v6 = *a1;
    *(_QWORD *)&v11 = a1;
    v7 = sub_18001B098(104LL);
    sub_18004F118(v8, v7 + 32, v9, &v14);
    *(_QWORD *)v7 = v6;
    *(_QWORD *)(v7 + 8) = v6;
    *(_QWORD *)(v7 + 16) = v6;
    *(_WORD *)(v7 + 24) = 0;
    *((_QWORD *)&v11 + 1) = 0LL;
    sub_18004F1D8(&v11);
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
