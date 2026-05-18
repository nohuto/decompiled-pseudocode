/*
 * XREFs of sub_1800326D0 @ 0x1800326D0
 * Callers:
 *     sub_1800320F0 @ 0x1800320F0 (sub_1800320F0.c)
 *     sub_180032634 @ 0x180032634 (sub_180032634.c)
 *     sub_180032794 @ 0x180032794 (sub_180032794.c)
 *     sub_1800328FC @ 0x1800328FC (sub_1800328FC.c)
 *     sub_180033660 @ 0x180033660 (sub_180033660.c)
 *     sub_180033C18 @ 0x180033C18 (sub_180033C18.c)
 *     sub_180034C28 @ 0x180034C28 (sub_180034C28.c)
 * Callees:
 *     sub_180028584 @ 0x180028584 (sub_180028584.c)
 *     sub_1800287FC @ 0x1800287FC (sub_1800287FC.c)
 */

__int64 __fastcall sub_1800326D0(__int64 a1)
{
  __int64 v2; // rdi
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF

  sub_1800287FC(a1 + 112, (__int64)v4);
  v2 = (__int64)(*(_QWORD *)(a1 + 96) - *(_QWORD *)(a1 + 88)) >> 4;
  sub_180028584((__int64)v4);
  return (unsigned int)v2;
}
