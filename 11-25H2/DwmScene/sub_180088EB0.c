/*
 * XREFs of sub_180088EB0 @ 0x180088EB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800878DC @ 0x1800878DC (sub_1800878DC.c)
 */

__int64 *__fastcall sub_180088EB0(__int64 a1, __int64 a2)
{
  __int64 *v2; // rcx
  __int64 *result; // rax

  v2 = *(__int64 **)(a1 + 16);
  if ( v2 )
    return sub_1800878DC(v2, a2);
  return result;
}
