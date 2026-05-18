/*
 * XREFs of sub_18001B57C @ 0x18001B57C
 * Callers:
 *     sub_18004BB0C @ 0x18004BB0C (sub_18004BB0C.c)
 *     sub_18004C040 @ 0x18004C040 (sub_18004C040.c)
 *     sub_18004C268 @ 0x18004C268 (sub_18004C268.c)
 *     sub_18004C644 @ 0x18004C644 (sub_18004C644.c)
 *     sub_18004CDF0 @ 0x18004CDF0 (sub_18004CDF0.c)
 *     sub_18005BFD4 @ 0x18005BFD4 (sub_18005BFD4.c)
 *     sub_180078220 @ 0x180078220 (sub_180078220.c)
 *     sub_1800791C4 @ 0x1800791C4 (sub_1800791C4.c)
 *     sub_18007965C @ 0x18007965C (sub_18007965C.c)
 *     sub_180079EB0 @ 0x180079EB0 (sub_180079EB0.c)
 *     sub_18007A2D4 @ 0x18007A2D4 (sub_18007A2D4.c)
 * Callees:
 *     sub_180011AA0 @ 0x180011AA0 (sub_180011AA0.c)
 *     sub_1800131FC @ 0x1800131FC (sub_1800131FC.c)
 *     sub_1800137F8 @ 0x1800137F8 (sub_1800137F8.c)
 */

__int64 *__fastcall sub_18001B57C(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // r9
  void *Src; // rax
  size_t v6; // rdx
  unsigned __int64 v7; // r8
  size_t Size; // r9
  const void *v9; // r10

  v4 = -1LL;
  do
    ++v4;
  while ( *(_BYTE *)(a2 + v4) );
  if ( 0x7FFFFFFFFFFFFFFFLL - *(_QWORD *)(a3 + 16) < v4 )
    sub_180011AA0();
  Src = (void *)sub_1800137F8(a3);
  sub_1800131FC(a1, v6, v7, v9, Size, Src, v6);
  return a1;
}
