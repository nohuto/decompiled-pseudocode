/*
 * XREFs of sub_1800208D4 @ 0x1800208D4
 * Callers:
 *     sub_180020920 @ 0x180020920 (sub_180020920.c)
 *     sub_1800209B8 @ 0x1800209B8 (sub_1800209B8.c)
 *     sub_1800E2C20 @ 0x1800E2C20 (sub_1800E2C20.c)
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 */

__int64 __fastcall sub_1800208D4(void **a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return sub_18000B77C(v1);
  return result;
}
