/*
 * XREFs of sub_1800547B0 @ 0x1800547B0
 * Callers:
 *     sub_180056950 @ 0x180056950 (sub_180056950.c)
 * Callees:
 *     sub_1800542A0 @ 0x1800542A0 (sub_1800542A0.c)
 *     sub_180054A18 @ 0x180054A18 (sub_180054A18.c)
 *     sub_180054A5C @ 0x180054A5C (sub_180054A5C.c)
 *     sub_180059C6C @ 0x180059C6C (sub_180059C6C.c)
 */

__int64 __fastcall sub_1800547B0(_QWORD *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = a3;
  if ( a2 > 0x555555555555555LL )
    std::_Xlength_error("vector too long");
  v5 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1[1] - *a1) >> 4);
  v9 = sub_180059C6C(a1, a2);
  v7 = sub_1800542A0(v6, (unsigned __int64 *)&v9);
  sub_180054A5C(v7 + 48 * v5, a2 - v5);
  sub_180054A18(*a1, a1[1], v7);
  return sub_180059CB4(a1, v7, a2, v9);
}
