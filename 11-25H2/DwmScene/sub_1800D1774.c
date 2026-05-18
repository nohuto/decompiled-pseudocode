/*
 * XREFs of sub_1800D1774 @ 0x1800D1774
 * Callers:
 *     sub_1800D1D30 @ 0x1800D1D30 (sub_1800D1D30.c)
 * Callees:
 *     sub_18001B098 @ 0x18001B098 (sub_18001B098.c)
 *     sub_18001CA04 @ 0x18001CA04 (sub_18001CA04.c)
 *     sub_18001CC04 @ 0x18001CC04 (sub_18001CC04.c)
 *     sub_180023A5C @ 0x180023A5C (sub_180023A5C.c)
 *     sub_18004F1D8 @ 0x18004F1D8 (sub_18004F1D8.c)
 *     sub_1800CF870 @ 0x1800CF870 (sub_1800CF870.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800D1774(__int64 *a1, __int64 a2, _DWORD *a3)
{
  int *v5; // r8
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int128 v12; // [rsp+30h] [rbp-38h] BYREF
  __int128 v13; // [rsp+40h] [rbp-28h] BYREF
  __int64 v14; // [rsp+50h] [rbp-18h]
  int *v15; // [rsp+88h] [rbp+20h] BYREF

  sub_180023A5C(a1, &v13, a3);
  if ( *(_BYTE *)(v14 + 25) || *v5 < *(_DWORD *)(v14 + 32) )
  {
    if ( a1[1] == 0x276276276276276LL )
      sub_18001CC04();
    v15 = v5;
    v6 = *a1;
    *(_QWORD *)&v12 = a1;
    v7 = sub_18001B098(104LL);
    sub_1800CF870(v8, v7 + 32, v9, &v15);
    *(_QWORD *)v7 = v6;
    *(_QWORD *)(v7 + 8) = v6;
    *(_QWORD *)(v7 + 16) = v6;
    *(_WORD *)(v7 + 24) = 0;
    *((_QWORD *)&v12 + 1) = 0LL;
    sub_18004F1D8((__int64)&v12, v10);
    v12 = v13;
    *(_QWORD *)a2 = sub_18001CA04((__int64)a1, (__int64)&v12, v7);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v14;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
