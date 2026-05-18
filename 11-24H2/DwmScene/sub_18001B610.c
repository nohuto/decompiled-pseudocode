/*
 * XREFs of sub_18001B610 @ 0x18001B610
 * Callers:
 *     sub_1800269B8 @ 0x1800269B8 (sub_1800269B8.c)
 *     sub_180049390 @ 0x180049390 (sub_180049390.c)
 *     sub_180057928 @ 0x180057928 (sub_180057928.c)
 *     sub_180057C10 @ 0x180057C10 (sub_180057C10.c)
 *     sub_18007E5A4 @ 0x18007E5A4 (sub_18007E5A4.c)
 *     sub_180084000 @ 0x180084000 (sub_180084000.c)
 *     sub_180084600 @ 0x180084600 (sub_180084600.c)
 *     sub_1800846B0 @ 0x1800846B0 (sub_1800846B0.c)
 *     sub_180084754 @ 0x180084754 (sub_180084754.c)
 *     sub_18008CEA0 @ 0x18008CEA0 (sub_18008CEA0.c)
 *     sub_1800BF624 @ 0x1800BF624 (sub_1800BF624.c)
 *     sub_1800C6BF4 @ 0x1800C6BF4 (sub_1800C6BF4.c)
 * Callees:
 *     sub_180011BA0 @ 0x180011BA0 (sub_180011BA0.c)
 *     sub_1800132FC @ 0x1800132FC (sub_1800132FC.c)
 *     sub_1800138F8 @ 0x1800138F8 (sub_1800138F8.c)
 */

__int64 *__fastcall sub_18001B610(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // r9
  const void *v5; // rax
  __int64 v6; // rdx
  void *Src; // r8
  size_t v8; // r9
  size_t Size; // r10

  v4 = -1LL;
  do
    ++v4;
  while ( *(_BYTE *)(a3 + v4) );
  if ( 0x7FFFFFFFFFFFFFFFLL - *(_QWORD *)(a2 + 16) < v4 )
    sub_180011BA0();
  v5 = (const void *)sub_1800138F8(a2);
  sub_1800132FC(a1, v6, (unsigned __int64)Src, v5, Size, Src, v8);
  return a1;
}
