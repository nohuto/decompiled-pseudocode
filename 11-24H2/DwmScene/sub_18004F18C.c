/*
 * XREFs of sub_18004F18C @ 0x18004F18C
 * Callers:
 *     sub_18004E8A0 @ 0x18004E8A0 (sub_18004E8A0.c)
 *     sub_18004E98C @ 0x18004E98C (sub_18004E98C.c)
 *     sub_18004EA78 @ 0x18004EA78 (sub_18004EA78.c)
 *     sub_18004EB64 @ 0x18004EB64 (sub_18004EB64.c)
 *     sub_18004EC50 @ 0x18004EC50 (sub_18004EC50.c)
 *     sub_18004ED3C @ 0x18004ED3C (sub_18004ED3C.c)
 *     sub_18004EE28 @ 0x18004EE28 (sub_18004EE28.c)
 *     sub_18004EF14 @ 0x18004EF14 (sub_18004EF14.c)
 *     sub_1800B6B38 @ 0x1800B6B38 (sub_1800B6B38.c)
 *     sub_1800B6C24 @ 0x1800B6C24 (sub_1800B6C24.c)
 *     sub_1800B6D10 @ 0x1800B6D10 (sub_1800B6D10.c)
 *     sub_1800B6DFC @ 0x1800B6DFC (sub_1800B6DFC.c)
 *     sub_1800B6EE8 @ 0x1800B6EE8 (sub_1800B6EE8.c)
 *     sub_1800B6FD4 @ 0x1800B6FD4 (sub_1800B6FD4.c)
 *     sub_1800B70C0 @ 0x1800B70C0 (sub_1800B70C0.c)
 *     sub_1800B71AC @ 0x1800B71AC (sub_1800B71AC.c)
 *     sub_1800B7298 @ 0x1800B7298 (sub_1800B7298.c)
 *     sub_1800B7384 @ 0x1800B7384 (sub_1800B7384.c)
 *     sub_1800B7470 @ 0x1800B7470 (sub_1800B7470.c)
 *     sub_1800B755C @ 0x1800B755C (sub_1800B755C.c)
 *     sub_1800B7648 @ 0x1800B7648 (sub_1800B7648.c)
 *     sub_1800B7734 @ 0x1800B7734 (sub_1800B7734.c)
 *     sub_1800B7820 @ 0x1800B7820 (sub_1800B7820.c)
 *     sub_1800B790C @ 0x1800B790C (sub_1800B790C.c)
 *     sub_1800B79F8 @ 0x1800B79F8 (sub_1800B79F8.c)
 * Callees:
 *     sub_180010CFC @ 0x180010CFC (sub_180010CFC.c)
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 *     sub_18001CB64 @ 0x18001CB64 (sub_18001CB64.c)
 *     sub_18001CD64 @ 0x18001CD64 (sub_18001CD64.c)
 *     sub_18004F278 @ 0x18004F278 (sub_18004F278.c)
 *     sub_18004F338 @ 0x18004F338 (sub_18004F338.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18004F18C(__int64 *a1, __int64 a2, _QWORD *a3)
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

  sub_180010CFC(a1, &v12, a3);
  if ( *(_BYTE *)(v13 + 25) || *v5 < *(_QWORD *)(v13 + 32) )
  {
    if ( a1[1] == 0x276276276276276LL )
      sub_18001CD64();
    v14 = v5;
    v6 = *a1;
    *(_QWORD *)&v11 = a1;
    v7 = sub_18001B1F8(104LL);
    sub_18004F278(v8, v7 + 32, v9, &v14);
    *(_QWORD *)v7 = v6;
    *(_QWORD *)(v7 + 8) = v6;
    *(_QWORD *)(v7 + 16) = v6;
    *(_WORD *)(v7 + 24) = 0;
    *((_QWORD *)&v11 + 1) = 0LL;
    sub_18004F338(&v11);
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
