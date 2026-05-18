/*
 * XREFs of sub_180083AF0 @ 0x180083AF0
 * Callers:
 *     sub_180084830 @ 0x180084830 (sub_180084830.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011110 @ 0x180011110 (sub_180011110.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180017054 @ 0x180017054 (sub_180017054.c)
 *     sub_180026F90 @ 0x180026F90 (sub_180026F90.c)
 *     sub_180027030 @ 0x180027030 (sub_180027030.c)
 *     sub_180057650 @ 0x180057650 (sub_180057650.c)
 *     sub_1800588F0 @ 0x1800588F0 (sub_1800588F0.c)
 *     sub_180058A5C @ 0x180058A5C (sub_180058A5C.c)
 *     sub_180058B50 @ 0x180058B50 (sub_180058B50.c)
 *     sub_180058C08 @ 0x180058C08 (sub_180058C08.c)
 *     sub_1800840E8 @ 0x1800840E8 (sub_1800840E8.c)
 *     sub_180084600 @ 0x180084600 (sub_180084600.c)
 *     sub_1800846B0 @ 0x1800846B0 (sub_1800846B0.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_180083AF0(__int64 a1)
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
    sub_1800840E8(a1, &v15);
    v7 = *(unsigned int *)(a1 + 4LL * *(int *)(a1 + 1964) + 1972);
    if ( !v15
      || (unsigned int)sub_180027030(v15) != *(_DWORD *)(a1 + 1940)
      || (v9 = sub_180026F90(v8), v9 != (_DWORD)v7) )
    {
      sub_180084600(a1, v7);
    }
    v10 = (__int64 *)sub_1800840E8(a1, &v14);
    sub_180058A5C(a1, v10);
    v14 = 0LL;
    sub_1800588F0(a1, (__int64 *)&v14);
    sub_180058B50(a1, *(_DWORD *)(a1 + 1928), 0);
    sub_180058B50(a1, *(_DWORD *)(a1 + 1932), 1);
    sub_180058B50(a1, *(_DWORD *)(a1 + 1936), 1);
    *(_BYTE *)(a1 + 465) |= 1u;
    v11 = *(_DWORD *)(a1 + 404);
    v12 = *(_DWORD *)(a1 + 408);
    LODWORD(v14) = *(_DWORD *)(a1 + 400);
    DWORD1(v14) = v11;
    *((_QWORD *)&v14 + 1) = v12;
    v13 = sub_180017054((__int64)v17, (__int64)&unk_1801C88B8);
    result = sub_180058C08(a1, v13, &v14, -1);
    if ( v16 )
      return sub_18001060C(v16);
  }
  else
  {
    v2 = (_QWORD *)(a1 + 1832);
    v3 = *(_QWORD *)(a1 + 1832);
    if ( !v3 || (unsigned int)sub_180057650(v3) != *(_DWORD *)(a1 + 1940) )
      sub_1800846B0(a1);
    v14 = 0LL;
    sub_180011110((_QWORD *)(a1 + 1912), (__int64 *)&v14);
    if ( *((_QWORD *)&v14 + 1) )
      sub_18001060C(*((__int64 *)&v14 + 1));
    v4 = unknown_libname_81(&v15, (_QWORD *)(a1 + 1912));
    sub_180058A5C(a1, v4);
    v5 = unknown_libname_81(&v15, v2);
    sub_1800588F0(a1, v5);
    sub_180058B50(a1, *(_DWORD *)(a1 + 1928), 1);
    sub_180058B50(a1, *(_DWORD *)(a1 + 1932), 0);
    result = sub_180058B50(a1, *(_DWORD *)(a1 + 1936), 0);
    *(_BYTE *)(a1 + 465) &= ~1u;
  }
  return result;
}
