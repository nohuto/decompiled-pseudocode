/*
 * XREFs of sub_18001B4B0 @ 0x18001B4B0
 * Callers:
 *     sub_180026858 @ 0x180026858 (sub_180026858.c)
 *     sub_180049230 @ 0x180049230 (sub_180049230.c)
 *     sub_1800577C8 @ 0x1800577C8 (sub_1800577C8.c)
 *     sub_180057AB0 @ 0x180057AB0 (sub_180057AB0.c)
 *     sub_18007E444 @ 0x18007E444 (sub_18007E444.c)
 *     sub_180083EA0 @ 0x180083EA0 (sub_180083EA0.c)
 *     sub_1800844A0 @ 0x1800844A0 (sub_1800844A0.c)
 *     sub_180084550 @ 0x180084550 (sub_180084550.c)
 *     sub_1800845F4 @ 0x1800845F4 (sub_1800845F4.c)
 *     sub_18008CD40 @ 0x18008CD40 (sub_18008CD40.c)
 *     sub_1800BF4C4 @ 0x1800BF4C4 (sub_1800BF4C4.c)
 *     sub_1800C6A94 @ 0x1800C6A94 (sub_1800C6A94.c)
 * Callees:
 *     sub_180011AA0 @ 0x180011AA0 (sub_180011AA0.c)
 *     sub_1800131FC @ 0x1800131FC (sub_1800131FC.c)
 *     sub_1800137F8 @ 0x1800137F8 (sub_1800137F8.c)
 */

__int64 *__fastcall sub_18001B4B0(__int64 *a1, __int64 a2, __int64 a3)
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
    sub_180011AA0();
  v5 = (const void *)sub_1800137F8(a2);
  sub_1800131FC(a1, v6, (unsigned __int64)Src, v5, Size, Src, v8);
  return a1;
}
