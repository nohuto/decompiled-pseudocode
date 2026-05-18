/*
 * XREFs of sub_18001F3EC @ 0x18001F3EC
 * Callers:
 *     sub_18001F390 @ 0x18001F390 (sub_18001F390.c)
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_18001F35C @ 0x18001F35C (sub_18001F35C.c)
 */

void *__fastcall sub_18001F3EC(__int64 a1, char a2)
{
  void *v2; // rdi

  v2 = (void *)(a1 - 152);
  sub_18001F35C(a1 - 152);
  if ( (a2 & 1) != 0 )
    sub_18000B77C(v2);
  return v2;
}
