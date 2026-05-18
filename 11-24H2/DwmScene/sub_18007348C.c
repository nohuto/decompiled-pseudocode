/*
 * XREFs of sub_18007348C @ 0x18007348C
 * Callers:
 *     sub_180073058 @ 0x180073058 (sub_180073058.c)
 * Callees:
 *     sub_18007302C @ 0x18007302C (sub_18007302C.c)
 */

__int64 *__fastcall sub_18007348C(__int64 *a1)
{
  *a1 = 0LL;
  a1[1] = 0LL;
  *a1 = sub_18007302C();
  return a1;
}
