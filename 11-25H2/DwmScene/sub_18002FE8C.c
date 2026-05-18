/*
 * XREFs of sub_18002FE8C @ 0x18002FE8C
 * Callers:
 *     sub_18002D990 @ 0x18002D990 (sub_18002D990.c)
 *     sub_18002DA60 @ 0x18002DA60 (sub_18002DA60.c)
 *     sub_1800D67D5 @ 0x1800D67D5 (sub_1800D67D5.c)
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 */

__int64 __fastcall sub_18002FE8C(void **a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return sub_18000B77C(v1);
  return result;
}
