/*
 * XREFs of sub_1800D18D4 @ 0x1800D18D4
 * Callers:
 *     sub_1800D1E90 @ 0x1800D1E90 (sub_1800D1E90.c)
 * Callees:
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 *     sub_18001CB64 @ 0x18001CB64 (sub_18001CB64.c)
 *     sub_18001CD64 @ 0x18001CD64 (sub_18001CD64.c)
 *     sub_180023BBC @ 0x180023BBC (sub_180023BBC.c)
 *     sub_18004F338 @ 0x18004F338 (sub_18004F338.c)
 *     sub_1800CF9D0 @ 0x1800CF9D0 (sub_1800CF9D0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800D18D4(__int64 *a1, __int64 a2, _DWORD *a3)
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

  sub_180023BBC(a1, &v13, a3);
  if ( *(_BYTE *)(v14 + 25) || *v5 < *(_DWORD *)(v14 + 32) )
  {
    if ( a1[1] == 0x276276276276276LL )
      sub_18001CD64();
    v15 = v5;
    v6 = *a1;
    *(_QWORD *)&v12 = a1;
    v7 = sub_18001B1F8(104LL);
    sub_1800CF9D0(v8, v7 + 32, v9, &v15);
    *(_QWORD *)v7 = v6;
    *(_QWORD *)(v7 + 8) = v6;
    *(_QWORD *)(v7 + 16) = v6;
    *(_WORD *)(v7 + 24) = 0;
    *((_QWORD *)&v12 + 1) = 0LL;
    sub_18004F338((__int64)&v12, v10);
    v12 = v13;
    *(_QWORD *)a2 = sub_18001CB64((__int64)a1, (__int64)&v12, v7);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v14;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
