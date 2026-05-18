/*
 * XREFs of sub_180054650 @ 0x180054650
 * Callers:
 *     sub_1800567F0 @ 0x1800567F0 (sub_1800567F0.c)
 * Callees:
 *     sub_180054140 @ 0x180054140 (sub_180054140.c)
 *     sub_1800548B8 @ 0x1800548B8 (sub_1800548B8.c)
 *     sub_1800548FC @ 0x1800548FC (sub_1800548FC.c)
 *     sub_180059B0C @ 0x180059B0C (sub_180059B0C.c)
 */

__int64 __fastcall sub_180054650(_QWORD *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = a3;
  if ( a2 > 0x555555555555555LL )
    std::_Xlength_error("vector too long");
  v5 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1[1] - *a1) >> 4);
  v9 = sub_180059B0C(a1, a2);
  v7 = sub_180054140(v6, (unsigned __int64 *)&v9);
  sub_1800548FC(v7 + 48 * v5, a2 - v5);
  sub_1800548B8(*a1, a1[1], v7);
  return sub_180059B54(a1, v7, a2, v9);
}
