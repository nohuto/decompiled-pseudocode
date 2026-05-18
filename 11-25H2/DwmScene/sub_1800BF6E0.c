/*
 * XREFs of sub_1800BF6E0 @ 0x1800BF6E0
 * Callers:
 *     sub_1800C0438 @ 0x1800C0438 (sub_1800C0438.c)
 *     sub_1800C0A74 @ 0x1800C0A74 (sub_1800C0A74.c)
 *     sub_1800C234C @ 0x1800C234C (sub_1800C234C.c)
 * Callees:
 *     sub_1800514AC @ 0x1800514AC (sub_1800514AC.c)
 */

void ***__fastcall sub_1800BF6E0(void ***a1, void ***a2)
{
  void **v2; // rax
  void **v4; // rdx

  v2 = *a2;
  *a2 = 0LL;
  v4 = *a1;
  *a1 = v2;
  if ( v4 )
    sub_1800514AC((__int64)a1, v4);
  return a1;
}
