/*
 * XREFs of sub_1800208A0 @ 0x1800208A0
 * Callers:
 *     sub_180003660 @ 0x180003660 (sub_180003660.c)
 *     sub_180021120 @ 0x180021120 (sub_180021120.c)
 * Callees:
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 */

__int64 *__fastcall sub_1800208A0(__int64 *a1)
{
  __int64 v2; // rax

  v2 = sub_18001B1F8(56LL);
  if ( v2 )
  {
    *(_OWORD *)v2 = 0LL;
    *(_OWORD *)(v2 + 16) = 0LL;
    *(_OWORD *)(v2 + 32) = 0LL;
    *(_QWORD *)(v2 + 48) = 0LL;
  }
  *a1 = v2;
  return a1;
}
