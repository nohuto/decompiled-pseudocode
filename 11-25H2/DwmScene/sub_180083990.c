/*
 * XREFs of sub_180083990 @ 0x180083990
 * Callers:
 *     sub_1800846D0 @ 0x1800846D0 (sub_1800846D0.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011010 @ 0x180011010 (sub_180011010.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_180016F54 @ 0x180016F54 (sub_180016F54.c)
 *     sub_180026E30 @ 0x180026E30 (sub_180026E30.c)
 *     sub_180026ED0 @ 0x180026ED0 (sub_180026ED0.c)
 *     sub_1800574F0 @ 0x1800574F0 (sub_1800574F0.c)
 *     sub_180058790 @ 0x180058790 (sub_180058790.c)
 *     sub_1800588FC @ 0x1800588FC (sub_1800588FC.c)
 *     sub_1800589F0 @ 0x1800589F0 (sub_1800589F0.c)
 *     sub_180058AA8 @ 0x180058AA8 (sub_180058AA8.c)
 *     sub_180083F88 @ 0x180083F88 (sub_180083F88.c)
 *     sub_1800844A0 @ 0x1800844A0 (sub_1800844A0.c)
 *     sub_180084550 @ 0x180084550 (sub_180084550.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_180083990(__int64 a1)
{
  _QWORD *v2; // rdi
  __int64 v3; // rcx
  __int64 *v4; // rax
  __int64 *v5; // rax
  char result; // al
  __int64 v7; // rdx
  __int64 v8; // r8
  int v9; // eax
  __int64 *v10; // rax
  int v11; // xmm1_4
  unsigned int v12; // xmm2_4
  __int64 v13; // rax
  __int128 v14; // [rsp+20h] [rbp-40h] BYREF
  __int64 v15; // [rsp+30h] [rbp-30h] BYREF
  __int64 v16; // [rsp+38h] [rbp-28h]
  _BYTE v17[32]; // [rsp+40h] [rbp-20h] BYREF

  if ( *(_DWORD *)(a1 + 1960) )
  {
    sub_180083F88(a1, &v15);
    v7 = *(unsigned int *)(a1 + 4LL * *(int *)(a1 + 1964) + 1972);
    if ( !v15
      || (unsigned int)sub_180026ED0(v15) != *(_DWORD *)(a1 + 1940)
      || (v9 = sub_180026E30(v8), v9 != (_DWORD)v7) )
    {
      sub_1800844A0(a1, v7);
    }
    v10 = (__int64 *)sub_180083F88(a1, &v14);
    sub_1800588FC(a1, v10);
    v14 = 0LL;
    sub_180058790(a1, (__int64 *)&v14);
    sub_1800589F0(a1, *(_DWORD *)(a1 + 1928), 0);
    sub_1800589F0(a1, *(_DWORD *)(a1 + 1932), 1);
    sub_1800589F0(a1, *(_DWORD *)(a1 + 1936), 1);
    *(_BYTE *)(a1 + 465) |= 1u;
    v11 = *(_DWORD *)(a1 + 404);
    v12 = *(_DWORD *)(a1 + 408);
    LODWORD(v14) = *(_DWORD *)(a1 + 400);
    DWORD1(v14) = v11;
    *((_QWORD *)&v14 + 1) = v12;
    v13 = sub_180016F54((__int64)v17, (__int64)&unk_1801C78A8);
    result = sub_180058AA8(a1, v13, &v14, -1);
    if ( v16 )
      return sub_18001050C(v16);
  }
  else
  {
    v2 = (_QWORD *)(a1 + 1832);
    v3 = *(_QWORD *)(a1 + 1832);
    if ( !v3 || (unsigned int)sub_1800574F0(v3) != *(_DWORD *)(a1 + 1940) )
      sub_180084550(a1);
    v14 = 0LL;
    sub_180011010((_QWORD *)(a1 + 1912), (__int64 *)&v14);
    if ( *((_QWORD *)&v14 + 1) )
      sub_18001050C(*((__int64 *)&v14 + 1));
    v4 = unknown_libname_81(&v15, (_QWORD *)(a1 + 1912));
    sub_1800588FC(a1, v4);
    v5 = unknown_libname_81(&v15, v2);
    sub_180058790(a1, v5);
    sub_1800589F0(a1, *(_DWORD *)(a1 + 1928), 1);
    sub_1800589F0(a1, *(_DWORD *)(a1 + 1932), 0);
    result = sub_1800589F0(a1, *(_DWORD *)(a1 + 1936), 0);
    *(_BYTE *)(a1 + 465) &= ~1u;
  }
  return result;
}
